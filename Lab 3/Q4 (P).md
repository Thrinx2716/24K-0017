## *PSEUDOCODE*

START

SET TotalDist TO 1207 * 2\  
SET FwdFuelPrice TO 118\       
SET returnfuelprice TO 123 

WHILE FuelAvg <= 0 DO\
    INPUT FuelAvg\
    IF FuelAvg <= 0 THEN\
        PRINT "Fuel average must be a positive value!"\
    ENDIF\
ENDWHILE

SET TotalFuelUsed TO TotalDist / FuelAvg\
SET TotalFuelCost = (1207 / FuelAvg) * FwdFuelPrice + (1207 / FuelAvg) * ReturnFuelPrice

PRINT "Total fuel consumed: ", TotalFuelUsed, " liters"\
PRINT "Total fuel cost: ", TotalFuelCost

END
