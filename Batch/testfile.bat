:: Variables to translate the returned BatteryStatus integer to a descriptive text
SET BatteryStatus.1=discharging
SET BatteryStatus.2=The system has access to AC so no battery is being discharged. However, the battery is not necessarily charging.
SET BatteryStatus.3=fully charged
SET BatteryStatus.4=low
SET BatteryStatus.5=critical
SET BatteryStatus.6=charging
SET BatteryStatus.7=charging and high
SET BatteryStatus.8=charging and low
SET BatteryStatus.9=charging and critical
SET BatteryStatus.10=UNDEFINED
SET BatteryStatus.11=partially charged

:: Read the battery status
FOR /F "tokens=*" %%A IN ('WMIC Path Win32_Battery Get BatteryStatus /Format:List ^| FIND "="') DO SET %%A

:: Check the battery status, and display a warning message if running on battery power
IF NOT "%BatteryStatus%"=="2" (
    > "%~dpn0.vbs" ECHO MsgBox vbLf ^& "The laptop is currently running on its battery." ^& vbLf ^& vbLf ^& "The battery is !BatteryStatus.%BatteryStatus%!." ^& vbLf ^& vbLf ^& "Connect the laptop to the mains voltage if possible." ^& vbLf ^& " "^, vbWarning^, "Battery Warning"
    CSCRIPT //NoLogo "%~dpn0.vbs"
    DEL "%~dpn0.vbs"
)