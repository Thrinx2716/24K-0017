# Problem 3

## *IPO*

## *FLOWCHART*

## *PSEUDOCODE*

**START**

*// Input*\
INPUT Age\
INPUT Gen\
INPUT Prov

*// Process/Output*\
IF Prov == "Sindh" THEN\
&emsp;IF Age >= 18 THEN\
&emsp;&emsp;PRINT "Legal for marriage."\
&emsp;ELSE\
&emsp;&emsp;PRINT "Illegal for marriage."\
&emsp;ENDIF\
ELSE\
&emsp;IF Prov == "Punjab" THEN\
&emsp;&emsp;IF (Gen == "male" && Age >= 18) || (Gen == "female" && Age >= 16) THEN\
&emsp;&emsp;&emsp;PRINT "Legal for marriage."\
&emsp;&emsp;ELSE\
&emsp;&emsp;&emsp;PRINT "Illegal for marriage."\
&emsp;&emsp;ENDIF\
&emsp;ELSE\
&emsp;&emsp;PRINT "Invalid province."\
&emsp;ENDIF\

**END**

## *EXPLANATION*

This solution helps to determine if a person can legally marry based on their age, gender, and the province they live in (Sindh or Punjab). First, it asks for the person's age, gender, and province. If they live in Sindh, the law is simple: no one under 18 can marry. In Punjab, girls need to be at least 16, and boys need to be at least 18 to marry. The program checks these rules and then tells the user if they are legally allowed to marry or not based on their details.
