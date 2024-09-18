# Problem 7

## *IPO*

## *FLOWCHART*

## *PSEUDOCODE*

**START**

*// Input*\\
INPUT BinNum

*// Process*\ 
IF BinNum == "1111110" THEN\
  PRINT "The lift is on floor 0"\
  ELSE IF BinNum == "0110000" THEN\
    PRINT "The lift is on floor 1"\
  ELSE IF BinNum == "1101101" THEN\
    PRINT "The lift is on floor 2"\
  ELSE IF BinNum == "1111001" THEN\
    PRINT "The lift is on floor 3"\
  ELSE IF BinNum == "0110011" THEN\
    PRINT "The lift is on floor 4"\
  ELSE IF BinNum == "1011011" THEN\
    PRINT "The lift is on floor 5"\
  ELSE IF BinNum == "1011111" THEN\
    PRINT "The lift is on floor 6"\
  ELSE IF BinNum == "1110000" THEN\
    PRINT "The lift is on floor 7"\
  ELSE IF BinNum == "1111111" THEN\
    PRINT "The lift is on floor 8"\
  ELSE IF BinNum == "1111011" THEN\
    PRINT "The lift is on floor 9"\
ELSE\
    PRINT "Invalid input"\
ENDIF
  
**END**

## *EXPLANATION*

We take a 7-digit binary number as the input, where each digit represents a segment on a display. Depending on whatever segments are lit, the display will show a specific number (0 to9) which represents the current floor. We then map each binary combination of 7 segments to the correct floor number using if-else statements.
