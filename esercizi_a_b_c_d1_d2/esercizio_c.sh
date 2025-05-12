@echo off
set /a segreto=%random% %% 100 + 1
set tent=0

:inizio
set /a tent=tent+1
if %tent% GTR 10 (
    echo Hai perso! Il numero era: %segreto%
    pause
    exit /b
)

set /p num=Tentativo %tent% - Indovina il numero:

if %num%==%segreto% (
    echo Bravo! Hai indovinato in %tent% tentativi.
    pause
    exit /b
)

if %num% LSS %segreto% (
    echo Troppo basso.
) else (
    echo Troppo alto.
)

goto inizio
