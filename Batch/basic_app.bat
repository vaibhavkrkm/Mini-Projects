@echo off

: start
echo Welcome!
set /p userInput="Please specify what do you want to do (C - BASIC CALCULATOR, S - SIMPLE INTEREST CALCULATOR, D - SHUT DOWN MY SYSTEM) : "

if %userInput% EQU C (
	goto calculator
) else if %userInput% EQU S (
	goto si_cacl
) else if %userInput% EQU D (
	goto shut_down
) else (
	cls
	goto start
)

: calculator
cls
set /p num1="Enter the first number : "
set /p num2="Enter the second number : "
set /p oper="Enter the operator : "

if %oper% EQU + (
	goto addition
) else if %oper% EQU - (
	goto subtraction
) else if %oper% EQU * (
	goto multiplication
) else if %oper% EQU / (
	goto division
)

: si_cacl
cls
set /p principle="Enter the Principle amount : "
set /p rate="Enter the Rate of Interest : "
set /p time="Enter the Time Period : "

set /a result=(%principle%*%rate%*%time%)/%time%
echo Simple Interest is : %result%
pause
exit /b

: addition
cls
set /a result=%num1%+%num2%
echo Result is %result%
pause
exit /b

: subtraction
cls
set /a result = %num1%-%num2%
echo Result is %result%
pause
exit /b

: multiplication
cls
set /a result = %num1%*%num2%
echo Result is %result%
pause
exit /b

: division
cls
set /a result = %num1%/%num2%
echo Result is %result%
pause
exit /b

: shut_down
echo Continuing now will shut down your computer!
pause
shutdown /s /f /t 0

exit /b
