# Problem 8

## *IPO*

## *FLOWCHART*

## *PSEUDOCODE*

**START**

*// Input/Initialize*\
INPUT Num\
Sum = 0\
Temp = Num\

    
*// Process*\
WHILE Temp > 0 DO\
  Digit = Temp % 10\
  Sum = Sum + Digit\
  Temp = Temp / 10\
ENDWHILE
    
*// Output*\
PRINT Sum

**END**

## *EXPLANATION*

First, we initialize the sum to 0 and use a temporary variable to process the number. A loop runs as long as the temp variable is > 0, extracting the last digit with mod operation, adding it to the sum, and removing the last digit using div. This continues until all digits are used and the final sum is printed.

