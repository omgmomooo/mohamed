@echo off
setlocal enabledelayedexpansion

set somma=0

:inizio
if "%1"=="" goto fine
set /a somma+=%1
shift
goto inizio

:fine
echo La somma è: %somma%
pause
