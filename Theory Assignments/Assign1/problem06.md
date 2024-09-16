# Problem 6

## *IPO*

## *FLOWCHART*

## *PSEUDOCODE*

**START**

*// Input*\
INPUT Height\
INPUT Age\
INPUT Ride
   
*// Process/Output*\
IF Ride == "Dragon Roller Coaster" THEN *// Start Main/Dragon Roller Coaster Start*\
  IF Height >= 48 && Age >= 10 THEN\
    PRINT "You are eligible."\
  ELSE\
    PRINT "You are not eligible."\
  ENDIF *// Dragon Rollar Coaster End*\
ELSE\
  IF Ride == "Sky Swing" THEN *// Sky Swing Start*\
    IF Height >= 54 THEN\
      PRINT "You meet the criteria for The Sky Swing."\
    ELSE\
      PRINT "Sorry, you do not meet the criteria for The Sky Swing."\
    ENDIF *// Sky Swing End*\
  ELSE\
    IF Ride == "Carousel" THEN *// Carousel Start*\
      IF Age >= 5 THEN\
        PRINT "You meet the criteria for The Carousel."\
      ELSE\
        PRINT "Sorry, you do not meet the criteria for The Carousel."\
      ENDIF *// Carousel End*\
    ELSE\
      PRINT "Invalid ride." *// Otherwise*\
    ENDIF\
  ENDIF\
ENDIF *// End Main*

**END**

## *EXPLANATION*

We know that Safari Park has 3 rides, each with its own requirements. Dragon Roller Coaster requires visitors to be 48 inches tall or above and 10 years old. Sky Swing requires visitors to be 54 inches tall or above and has no age limit at all. The Carousel has no height limit, but the visitor must be 5 years old or above. We check the ride selected by the visitor and compare their height and age to the requirements for the ride. We then output if the visitor meets the criteria for their selected ride or not.
