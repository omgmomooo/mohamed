
#!/bin/bash

# Chiede all'utente di inserire due numeri
echo "Inserisci il primo numero:"
read operand1
echo "Inserisci il secondo numero:"
read operand2

# Esegue la somma e mostra il risultato
result=$(($operand1 + $operand2))
echo "Risultato della somma: $result"

