# App-Regulator


## Features:

Control Time Limit in Premium Apps(Youtube , Amazon Prime , Netflix)
User can set time limit.
After time limit exceeded the app will be locked to the time set by the user.
User can set time lock according to his will.
After time limit user will get a Notification regarding time limit.


## Problem Statement:

Binge Watch.
Teenager Time spending.

## Workflow:
WpeFramework --->  API Calls  ----> Functions {

-> getTime() :-> This function will record the input time set by the user. 

-> lockingPeriod () :> This function will decide how long the app will be closed after reciveing alert.

->eventHandler() :-> This function will handle the background running time and process.
