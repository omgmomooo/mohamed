#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *fp;
    char c;
    int parole = 0;
    int dentro_parola = 0;

    // Apri il file in lettura
    
    fp = fopen("testo.txt", "r");
    if (fp == NULL) {
        printf("Errore: impossibile aprire il file.\n");
        return 1;
    }

    // Legge il file carattere per carattere
    while ((c = fgetc(fp)) != EOF) {
        if (!isspace(c)) {
            // Se il carattere NON è spazio, tab o newline
            if (dentro_parola == 0) {
                parole++;
                dentro_parola = 1; // siamo dentro una parola
            }
        } else {
            // se è uno spazio o newline, usciamo dalla parola
            dentro_parola = 0;
        }
    }

    fclose(fp);
    printf("Numero di parole nel file: %d\n", parole);
    return 0;
}

/*PPP usa:

⚡ PoE – Power over Ethernet

PoE = tecnologia che permette di alimentare i dispositivi tramite il cavo di rete, senza bisogno di cavo elettrico separato.

🔸 Esempio:
un telefono IP o una telecamera di sicurezza riceve sia la corrente sia i dati dallo stesso cavo Ethernet.

🔸 Standard:

802.3af → PoE = 15,4 watt per porta

802.3at → PoE+ = 30 watt per porta

🔸 Tipi di dispositivi:

Tipo	Significato
PSE (Power Sourcing Equipment)	Chi fornisce corrente (es. switch PoE)
PD (Powered Device)	Chi riceve corrente (es. webcam IP, access point)

🔸 Due scenari possibili:

Switch non PoE + Power Injector
→ serve un adattatore per unire corrente + dati.

Switch PoE
→ manda direttamente dati e corrente.

🔸 Splitter PoE
→ separa di nuovo corrente e dati vicino al dispositivo.

🧾 Riassunto veloce per l’interrogazione
Argomento	Cosa ricordare
LLC	Controlla flusso, crea connessioni, DSAP/SSAP, tipi di frame (I, S, U)
MAC	Gestisce accesso al mezzo, indirizzi MAC, FCS
HDLC	Protocollo punto-punto, frame con Flag, Address, Control, Data, FCS
PPP	Versione semplificata di HDLC per Internet, usa LCP e NCP
PoE	Dati + alimentazione nello stesso cavo (Ethernet)*/








