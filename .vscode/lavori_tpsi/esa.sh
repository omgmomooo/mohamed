@echo off
IF "%1"=="" (
    ECHO Utilizzo: benvenuto.bat [nome] [orario]
    PAUSE
    EXIT /B 1
)

IF "%2"=="" (
    ECHO Utilizzo: benvenuto.bat [nome] [orario]
    PAUSE
    EXIT /B 1
)

REM Controllo se l'orario è un numero valido
set /a ora=%2%+0 >nul 2>nul
IF ERRORLEVEL 1 (
    ECHO L'orario deve essere un numero.
    PAUSE
    EXIT /B 1
)

REM Controllo fasce orarie
IF %ora% GEQ 0 IF %ora% LEQ 18 (
    ECHO Buongiorno %1!
) ELSE IF %ora% GEQ 19 IF %ora% LEQ 24 (
    ECHO Buonasera %1!
) ELSE (
    ECHO Orario non valido. Inserire un'ora tra 0 e 24.
)

PAUSE
