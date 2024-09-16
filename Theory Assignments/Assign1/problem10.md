# Problem 10
<sup> poor Mr. Bhoola ;-;

## *IPO*

## *FLOWCHART*

## *PSEUDOCODE*

**START**

*// Input*\
INPUT Typed

Fixed = ""\
Current = FIRST CHARACTER OF Typed

*// Process*\
WHILE Current IS NOT EMPTY DO\
&emsp;IF Current = "9" THEN\
&emsp;&emsp;Next = NEXT CHARACTER OF Typed

&emsp;&emsp;IF Next = "0" THEN\
&emsp;&emsp;&emsp;Fixed = Fixed + "9"\
&emsp;&emsp;&emsp;Typed = REMOVE FIRST TWO CHARACTERS FROM Typed\
&emsp;&emsp;ELSE\
&emsp;&emsp;&emsp;Fixed = Fixed + "9"\
&emsp;&emsp;&emsp;Typed = REMOVE FIRST CHARACTER FROM Typed\
&emsp;&emsp;ENDIF\
&emsp;ELSE\
&emsp;&emsp;Fixed = Fixed + Current\
&emsp;&emsp;Typed = REMOVE FIRST CHARACTER FROM Typed\
&emsp;ENDIF

&emsp;Current = FIRST CHARACTER OF Typed\
ENDWHILE

*// Print*\
PRINT Fixed

**END**

## *EXPLANATION*

First, we read the incorrectly typed number and process it character by character. We check each "9" to see if it's followed by a "0". If it is, we replace "90" with "9" and continue. Otherwise we just add the current digit to the corrected number. This process continues until all characters are used and the final corrected number is printed.
