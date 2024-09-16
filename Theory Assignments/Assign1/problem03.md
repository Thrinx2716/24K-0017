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

First, we take the person's age, gender, and province. If they live in Sindh, the law is easy; no one under the age of 18 can marry. In Punjab, the girls need to be at least 16, and the boys must be at least 18 to marry. We check these rules and then tell the user if they are legally allowed to marry or not based on whatever details they provided.
