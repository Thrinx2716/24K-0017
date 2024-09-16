# Problem 3

## *IPO*

## *FLOWCHART*

## *PSEUDOCODE*

**START**

*// Input*\
PRINT "Enter age: "\
INPUT Age\
PRINT "Enter gender: "\
INPUT Gen\
PRINT "Enter province (Sindh/Punjab): "\
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
