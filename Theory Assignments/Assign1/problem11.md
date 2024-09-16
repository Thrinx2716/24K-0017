# Problem 11

## *IPO*

## *FLOWCHART*

## *PSEUDOCODE*

**START**

*// Input*\
INPUT Num1\
INPUT Num2

*// Process*\
WHILE Num2 != 0 DO\
&emsp;Remainder = Num1 % Num2\
&emsp;Num1 = Num2\
&emsp;Num2 = Remainder\
ENDWHILE

*// Output*\
IF Num1 = 1 THEN\
&emsp;PRINT "Coprime."\
ELSE\
&emsp;PRINT "Not coprime."\
ENDIF

**END**

## *EXPLANATION*

First, we take two whole numbers as input. We then use Euclid's algorithm to calculate the GCD. If GCD is 1, the numbers are coprime. If GCD is not 1, the numbers are not coprime.
