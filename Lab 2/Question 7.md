# Question 7

## *ALGORITHM*

1. Start
2. Input number1
3. Input operator
4. Input number2
5. Initialize Result to 0
6. If the operator is '+', then add 'number1' and 'number2'
7. If the operator is '-', then subtract 'number2' from 'number1'
8. If the operator is '*', then multiply 'number1' and 'number2'
9. If the operator is `/`, then check if 'number2' is not 0, if its true print "Error: Division by zero" and end the process
10. Otherwise, divide 'number1' by 'number2'
11. If the operator is '%', then find the remainder when 'number1' is divided by 'number2'
12. If the operator is none of these, display "Invalid operator. Please use +, -, *, /, or %" and end the process
13. Store the result in 'Result'
14. Print 'Result'
15. End

## *PSEUDOCODE*

**START**\
INPUT number1\
INPUT operator\
INPUT number2\
SET Result to 0

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
