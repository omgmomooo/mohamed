@echo off
setlocal ENABLEDELAYEDEXPANSION

set somma=0

:inizio
if "%1"=="" goto fine
set /a somma+=%1
shift
goto inizio

:fine
echo Risultato della somma=%somma%
endlocal
