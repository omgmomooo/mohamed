@echo off

:: Chiedi il nome se non è stato passato
if "%1"=="" (
    set /p nome=Come ti chiami?
) else (
    set nome=%1
)

:: Chiedi l'ora in formato 24h
set /p ora=Che ora è adesso? (formato 0-23):

:: Controlla se è giorno o sera
if %ora% LSS 19 (
    echo Buongiorno %nome%!
) else (
    echo Buonasera %nome%!
)
