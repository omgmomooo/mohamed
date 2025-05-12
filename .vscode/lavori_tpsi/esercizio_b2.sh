@echo off
setlocal enabledelayedexpansion

set righe=%1

if "%righe%"=="" (
    echo Utilizzo: albero.bat [numero righe]
    pause
    exit /b 1
)

set riga=1

:inizio
if %riga% GTR %righe% goto tronco

REM Calcola spazi prima degli asterischi
set spazi=%righe%
set /a spazi-=%riga%

set line=
for /L %%i in (1,1,!spazi!) do (
    set line=!line! 
)
for /L %%i in (1,1,!riga!) do (
    set line=!line!*
)
for /L %%i in (1,1,!riga!) do (
    set line=!line!*
)

echo !line!
set /a riga+=1
goto inizio

:tronco
REM Disegna il tronco
set line=
for /L %%i in (1,1,%righe%) do (
    set line=!line!
)
echo !line!*
pause
