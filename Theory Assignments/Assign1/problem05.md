# Problem 5

## *IPO*

## *FLOWCHART*

## *PSEUDOCODE*

**START**

*// Input*\
INPUT Crop\
INPUT Moisture\
INPUT Rain
   
*// Process/Output*\
IF Crop == "wheat" THEN *// Start Main*\
  IF Moisture < 30 && Rain == FALSE THEN *// Wheat Start*\
    PRINT "Irrigation required for Wheat."\
  ELSE\
    PRINT "No irrigation required."\
  ENDIF *// Wheat End*\
ELSE\
  IF Crop == "corn" THEN *// Corn Start*\
    IF Moisture < 40 THEN\
      PRINT "Irrigation required for Corn."\
    ELSE\
      PRINT "No irrigation required."\
    ENDIF *// Corn End*\
  ELSE\
    IF Crop == "rice" THEN *// Rice Start*\
      IF Moisture < 25 && Rain == FALSE THEN\
        PRINT "Irrigation Required for Rice."\
      ELSE\
        PRINT "No irrigation required."\
      ENDIF *// Rice End*\
    ELSE\
      PRINT "Invalid crop." *// Otherwise*\
    ENDIF\
  ENDIF\
ENDIF *// End Main*

**END**

## *EXPLANATION*

First, we check three crop types being wheat, corn, and rice. For each crop, there are different conditions to check whether irrigation's needed or not. Then, the drone reads the soil moisture and we check if it rained in the last 24 hours. Depending on the crop, it either irrigates or skips the irrigation. Wheat requires irrigation if the soil moisture is below 30% and it hasn’t rained. Corn is irrigated if moisture is below 40% regardless of rain. Rice only irrigates if the moisture is below 25% and it hasn’t rained. If the moisture levels are above the limits, no irrigation is applied anywhere.
