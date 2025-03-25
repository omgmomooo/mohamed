
#!/bin/bash

# Funzione per verificare se un numero è valido
is_number() {
  # Controlla se l'argomento è un numero intero
  if ! [[ "$1" =~ ^-?[0-9]+$ ]]; then
    return 1
  else
    return 0
  fi
}

# Chiede all'utente di inserire il primo numero
echo "Inserisci il primo numero:"
read operand1

# Verifica se il primo numero è valido
if ! is_number $operand1; then
  echo "Errore: '$operand1' non è un numero valido!"
  exit 1
fi

# Chiede all'utente di inserire il secondo numero
echo "Inserisci il secondo numero:"
read operand2

# Verifica se il secondo numero è valido
if ! is_number $operand2; then
  echo "Errore: '$operand2' non è un numero valido!"
  exit 1
fi

# Somma i numeri
result=$(($operand1 + $operand2))

# Mostra il risultato
echo "Risultato della somma: $result"
