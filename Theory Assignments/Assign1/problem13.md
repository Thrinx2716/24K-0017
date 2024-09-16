# Problem 13

## *IPO*

## *FLOWCHART*

## *PSEUDOCODE*

**START**

BEGIN
// Declare jug capacities and desired amount
DECLARE M, N, W : INTEGER
DECLARE GCD : INTEGER
DECLARE Temp : INTEGER
DECLARE JugM, JugN : INTEGER

// Input jug capacities and desired amount
INPUT M
INPUT N
INPUT W
a = M
b = N
JugM = 0
JugN = 0

WHILE b != 0 DO
&emsp;Temp = b
&emsp;b = a % b
&emsp;a = Temp
ENDWHILE
GCD = a

IF W > M && W > N THEN
&emsp;PRINT "The desired amount is too large."
ELSE IF W % GCD != 0 THEN
&emsp;PRINT "The desired amount cannot be measured with these jugs."
ELSE
&emsp;PRINT "The desired amount is possible to measure."

WHILE JugM != W && JugN !- W DO
&emsp;IF JugM == 0 THEN
&emsp;&emsp;JugM = M
&emsp;&emsp;PRINT "Fill JugM (", M, "L)."
&emsp;ELSE IF JugN == N THEN
&emsp;&emsp;JugN = 0
&emsp;&emsp;PRINT "Empty JugN (", N, "L)."
&emsp;ELSE
&emsp;&emsp;Amount = MIN(JugM, N - JugN)
&emsp;&emsp;JugM = JugM - Amount
&emsp;&emsp;JugN = JugN + Amount
&emsp;&emsp;PRINT "Pour ", Amount, " liters from Jug M to Jug N."
ENDWHILE

&emsp;PRINT "You made the amount you entered in one of the jugs."
ENDIF

**END**

## *EXPLANATION*

Frst, we calculate the greatest common divisor (GCD) of M and N. The desired amount W can only be measured if it is less than or equal to the larger jug's capacity and is a multiple of the GCD. If W meets these criteria, we proceed to simulate the process of filling, emptying, and transferring water between the jugs until the input amount is reached.
