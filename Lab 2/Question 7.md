# Question 7

## *PSEUDOCODE*

**START**/
INPUT number1/
INPUT operator/
INPUT number2/
SET result to 0

IF operator == "+" THEN/
SET result to number1 + number2/
ELSE/ 
IF operator is "-" THEN/
SET result to number1 - number2/
ELSE/ 
IF operator is "*" THEN/
SET result to number1 * number2/
ELSE/
IF operator is "/" THEN/
IF number2 is not 0 THEN/
SET result to number1 / number2/
ELSE/
PRINT "Error: Division by zero"/
ENDIF/
ELSE/ 
IF operator is "%" THEN/
SET result to number1 % number2/
ELSE/
PRINT "Invalid operator. Please use +, -, *, /, or %"/
ENDIF

PRINT "Result: ", Result/
**END**
