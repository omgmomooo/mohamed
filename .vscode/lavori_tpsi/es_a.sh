@echo off

REM Controlla se l'utente ha inserito entrambi i parametri
IF "%2"=="" (
    echo Devi scrivere: benvenuto.bat Nome Ora
    goto fine
)

REM Controlla l'orario inserito per scegliere il saluto giusto
IF %2 LEQ 18 (
    echo Buongiorno %1!
) ELSE (
    echo Buonasera %1!
)

:fine