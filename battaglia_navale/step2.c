// ...existing code...
#include <stdio.h>
#include <string.h>
// ...existing code...
#include <stdlib.h>
#include <time.h>
#include <ctype.h>
#include <stdbool.h>

#define SIZE 10

typedef struct { int row, col; } Coord;
typedef struct { char name[20]; int len; } ShipDef;

const ShipDef ships[] = {
    {"Carrier", 5},
    {"Battleship", 4},
    {"Cruiser", 3},
    {"Submarine", 3},
    {"Destroyer", 2}
};
const int SHIP_COUNT = sizeof(ships) / sizeof(ships[0]);

void init_board(char b[SIZE][SIZE]) {
    for (int r = 0; r < SIZE; ++r)
        for (int c = 0; c < SIZE; ++c)
            b[r][c] = '.';
}

void clear_screen() { system("clear || printf \"\033c\""); }

void print_board(char b[SIZE][SIZE], bool show_ships) {
    printf("   ");
    for (int c = 0; c < SIZE; ++c) printf(" %c", 'A' + c);
    printf("\n");
    for (int r = 0; r < SIZE; ++r) {
        printf("%2d ", r + 1);
        for (int c = 0; c < SIZE; ++c) {
            char ch = b[r][c];
            if (!show_ships && ch == 'S') ch = '.';
            printf(" %c", ch);
        }
        printf("\n");
    }
}

bool in_bounds(int r, int c) { return r >= 0 && r < SIZE && c >= 0 && c < SIZE; }

bool can_place(char b[SIZE][SIZE], int r, int c, int len, bool horiz) {
    for (int i = 0; i < len; ++i) {
        int rr = r + (horiz ? 0 : i);
        int cc = c + (horiz ? i : 0);
        if (!in_bounds(rr, cc) || b[rr][cc] != '.') return false;
    }
    return true;
}

void place_ship(char b[SIZE][SIZE], int r, int c, int len, bool horiz) {
    for (int i = 0; i < len; ++i) {
        int rr = r + (horiz ? 0 : i);
        int cc = c + (horiz ? i : 0);
        b[rr][cc] = 'S';
    }
}

Coord parse_coord(const char *s) {
    // Accept formats: A5, 5A, or "A 5" etc.
    Coord res = {-1, -1};
    int row = -1, col = -1;
    // find letter
    for (const char *p = s; *p; ++p) {
        if (isalpha((unsigned char)*p)) {
            col = toupper((unsigned char)*p) - 'A';
            break;
        }
    }
    // find number
    int num = 0; bool num_found = false;
    for (const char *p = s; *p; ++p) {
        if (isdigit((unsigned char)*p)) {
            num_found = true;
            num = num * 10 + (*p - '0');
        } else if (num_found) break;
    }
    if (num_found) row = num - 1;
    if (in_bounds(row, col)) { res.row = row; res.col = col; }
    return res;
}

Coord input_coord(const char *prompt) {
    char buf[100];
    while (1) {
        printf("%s", prompt);
        if (!fgets(buf, sizeof(buf), stdin)) { clearerr(stdin); continue; }
        // trim newline
        size_t L = strlen(buf); if (L && buf[L-1]=='\n') buf[L-1]=0;
        Coord c = parse_coord(buf);
        if (c.row != -1) return c;
        printf("Coordinata non valida. Usa ad esempio A5 o 5A. Riprova.\n");
    }
}

void place_all_random(char b[SIZE][SIZE]) {
    for (int i = 0; i < SHIP_COUNT; ++i) {
        int len = ships[i].len;
        bool placed = false;
        while (!placed) {
            bool horiz = rand() % 2;
            int r = rand() % SIZE;
            int c = rand() % SIZE;
            if (can_place(b, r, c, len, horiz)) {
                place_ship(b, r, c, len, horiz);
                placed = true;
            }
        }
    }
}

void place_all_manual(char b[SIZE][SIZE]) {
    for (int i = 0; i < SHIP_COUNT; ++i) {
        int len = ships[i].len;
        bool placed = false;
        while (!placed) {
            clear_screen();
            printf("Posiziona la nave: %s (lunghezza %d)\n", ships[i].name, len);
            print_board(b, true);
            printf("Inserisci coordinate iniziali (es. A5): ");
            Coord start = input_coord("");
            char dir_buf[10];
            printf("Orizzontale o verticale? (h/v): ");
            if (!fgets(dir_buf, sizeof(dir_buf), stdin)) { clearerr(stdin); continue; }
            char ch = tolower(dir_buf[0]);
            bool horiz = (ch == 'h');
            if (!in_bounds(start.row, start.col)) {
                printf("Coordinate fuori campo.\n"); getchar(); continue;
            }
            if (!can_place(b, start.row, start.col, len, horiz)) {
                printf("Impossibile posizionare qui. Spazio occupato o fuori campo.\n"); getchar(); continue;
            }
            place_ship(b, start.row, start.col, len, horiz);
            placed = true;
        }
    }
}

bool attack(char target[SIZE][SIZE], int r, int c) {
    if (!in_bounds(r,c)) return false;
    if (target[r][c] == 'S') {
        target[r][c] = 'X';
        return true;
    } else if (target[r][c] == '.') {
        target[r][c] = 'O';
        return false;
    }
    // already attacked: return false but indicate no change
    return false;
}

bool all_sunk(char b[SIZE][SIZE]) {
    for (int r = 0; r < SIZE; ++r)
        for (int c = 0; c < SIZE; ++c)
            if (b[r][c] == 'S') return false;
    return true;
}

Coord random_shot(char vis[SIZE][SIZE]) {
    // naive random shot on unseen cells
    int attempts = 0;
    while (attempts++ < 1000) {
        int r = rand() % SIZE;
        int c = rand() % SIZE;
        if (vis[r][c] == '.') return (Coord){r,c};
    }
    for (int r = 0; r < SIZE; ++r)
        for (int c = 0; c < SIZE; ++c)
            if (vis[r][c] == '.') return (Coord){r,c};
    return (Coord){-1,-1};
}

int main(void) {
    srand((unsigned)time(NULL));
    char player[SIZE][SIZE], computer[SIZE][SIZE];
    char comp_view[SIZE][SIZE]; // what player sees of computer
    init_board(player); init_board(computer); init_board(comp_view);

    clear_screen();
    printf("Battaglia Navale - C\n");
    printf("1) Posiziona manualmente\n2) Posizionamento casuale\nScegli (1/2): ");
    int choice = 1;
    if (scanf("%d%*c", &choice) != 1) choice = 2;

    if (choice == 1) {
        place_all_manual(player);
        place_all_random(computer);
    } else {
        place_all_random(player);
        place_all_random(computer);
    }

    // game loop
    bool player_turn = true;
    while (1) {
        clear_screen();
        printf("Tuo campo:\n");
        print_board(player, true);
        printf("\nCampo avversario (visibile):\n");
        print_board(comp_view, true);

        if (player_turn) {
            printf("\nTuo turno: inserisci coordinata da colpire (es. B7): ");
            Coord shot = input_coord("");
            if (!in_bounds(shot.row, shot.col)) { printf("Coordinata non valida.\n"); getchar(); continue; }
            char prev = comp_view[shot.row][shot.col];
            if (prev == 'X' || prev == 'O') {
                printf("Hai già sparato qui. Premi invio per continuare.\n"); getchar(); continue;
            }
            bool hit = attack(computer, shot.row, shot.col);
            comp_view[shot.row][shot.col] = hit ? 'X' : 'O';
            printf(hit ? "Colpito!\n" : "Mancato.\n");
            if (all_sunk(computer)) { printf("Hai vinto! Tutte le navi nemiche affondate.\n"); break; }
            player_turn = false;
            printf("Premi invio per continuare..."); getchar();
        } else {
            printf("\nTurno del computer...\n");
            Coord s = random_shot(player);
            if (s.row == -1) { printf("Errore: nessuna mossa disponibile.\n"); break; }
            bool hit = attack(player, s.row, s.col);
            printf("Computer spara in %c%d: %s\n", 'A' + s.col, s.row + 1, hit ? "Colpito!" : "Mancato.");
            if (all_sunk(player)) { printf("Il computer ha vinto. Tutte le tue navi sono affondate.\n"); break; }
            player_turn = true;
            printf("Premi invio per continuare..."); getchar();
        }
    }

    printf("Partita terminata.\n");
    return 0;
}