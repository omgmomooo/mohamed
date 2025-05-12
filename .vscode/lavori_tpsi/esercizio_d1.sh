@echo off
setlocal enabledelayedexpansion

set righe=%1

if "%righe%"=="" (
    echo Utilizzo: triangolo.bat [numero righe]
    pause
    exit /b 1
)

set riga=1

:inizio
if %riga% GTR %righe% goto fine

set line=
for /L %%i in (1,1,%riga%) do (
    set line=!line!*
)

echo !line!
set /a riga+=1
goto inizio

:fine
pause
