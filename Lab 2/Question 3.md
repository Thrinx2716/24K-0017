# Question 3

## ALGORITHM

1. Start.
2. Input three numbers A, B, and C.
3. If A is greater than B, proceed to step 5.
4. Otherwise, proceed to step 7.
5. If A is greater than C, set Greatest to A.
6. Otherwise, set Greatest to C.
7. If B is greater than C, set Greatest to B.
8. Otherwise, set Greatest to C.
9. Print Greatest.
10. End.

## PSEUDOCODE
**START**
INPUT A
INPUT B
INPUT C

SET Greatest to A
IF B > Greatest THEN
  SET Greatest to B
ELSE
  IF C > Greatest THEN
    SET Greatest to C
  ENDIF
ENDIF
PRINT Greatest
**END**
