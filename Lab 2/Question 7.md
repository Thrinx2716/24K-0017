# Question 7

## *PSEUDOCODE*

**START**\
INPUT number1\
INPUT operator\
INPUT number2\
SET result to 0

IF operator == "+" THEN\
&nbsp; SET result to number1 + number2\
ELSE\
&nbsp; IF operator is "-" THEN\
&nbsp;&nbsp;&nbsp; SET result to number1 - number2\
&nbsp; ELSE\
&nbsp;&nbsp;&nbsp; IF operator is "*" THEN\
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; SET result to number1 * number2\
&nbsp;&nbsp;&nbsp; ELSE\
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; IF operator is "/" THEN\
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; IF number2 is not 0 THEN\
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; SET result to number1 / number2\
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; ELSE\
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; PRINT "Error: Division by zero"\
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; ENDIF\
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; ELSE\
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; IF operator is "%" THEN\
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; SET result to number1 % number2\
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; ELSE\
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; PRINT "Invalid operator. Please use +, -, *, /, or %"\
ENDIF

PRINT "Result: ", Result\
**END**
