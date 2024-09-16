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
      IF Age >= 18 THEN\
         PRINT "Legal for marriage."\
      ELSE\
         PRINT "Illegal for marriage."\
      ENDIF\
   ELSE\
     IF Prov == "Punjab" THEN\
       IF (Gen == "male" && Age >= 18) || (Gen == "female" && Age >= 16) THEN\
         PRINT "Legal for marriage."\
       ELSE\
         PRINT "Illegal for marriage."\
       ENDIF\
     ELSE\
       PRINT "Invalid province."\
     ENDIF\
**END**


## *EXPLANATION*
