REM hitting the spacebar should stop the batch file and saves having to scroll up to troubleshooting.REM The cls command below will clear the console window before starting. Handy for troubleshooting.
REM remove the rem (INCAPS) for cls
@echo off
cls
echo Lets do this

.\i6comp.exe d -r -f cabs/data1.cab Executable

.\i6comp.exe a -r -f cabs/data1.cab Executable

.\i6comp.exe d -r -f cabs/data1.cab Layout

.\i6comp.exe a -r -f cabs/data1.cab Layout

.\i6comp.exe d -r -f cabs/data1.cab Objs

.\i6comp.exe a -r -f cabs/data1.cab Objs 

.\i6comp.exe d -r -f cabs/data1.cab Paintkit

.\i6comp.exe a -r -f cabs/data1.cab Paintkit

.\i6comp.exe d -r -f cabs/data1.cab "Program Files"

.\i6comp.exe a -r -f cabs/data1.cab "Program Files"

.\i6comp.exe d -r -f cabs/data1.cab Series

.\i6comp.exe a -r -f cabs/data1.cab Series

.\i6comp.exe d -r -f cabs/data1.cab Sound

.\i6comp.exe a -r -f cabs/data1.cab Sound

.\i6comp.exe d -r -f cabs/data1.cab tracks

.\i6comp.exe a -r -f cabs/data1.cab tracks



pause/ 