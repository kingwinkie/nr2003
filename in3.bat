@echo off
echo Lets do this

.\i6comp.exe d -r -f cabs/data1.cab Executable

.\i6comp.exe a -r -f cabs/data1.cab Executable

.\i6comp.exe d -r -f cabs/data1.cab "[Support]English String Tables"

.\i6comp.exe a -r -f cabs/data1.cab "[Support]English String Tables"

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

.\i6comp.exe d -r -f cabs/data1.cab Telemetry 

.\i6comp.exe a -r -f cabs/data1.cab Telemetry 

.\i6comp.exe d -r -f cabs/data1.cab tracks

.\i6comp.exe a -r -f cabs/data1.cab tracks



pause/ 