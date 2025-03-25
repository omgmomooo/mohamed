

#!/bin/bash

# Inizializza la variabile somma a 0
sum=0

# Chiede all'utente di inserire una sequenza di numeri
echo "Inserisci una sequenza di numeri separati da spazi:"
read -a numbers

# Variabile per scorrere gli elementi dell'array
i=0

# Ciclo while per sommare tutti i numeri
while [ $i -lt ${#numbers[@]} ]; do
  sum=$((sum + ${numbers[$i]}))
  i=$((i + 1))
done

# Mostra il risultato della somma
echo "Risultato della somma = $sum"
