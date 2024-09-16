# Problem 9

## *IPO*

## *FLOWCHART*

## *PSEUDOCODE*

**START**

*// Input/Initialize*\
INPUT BDate\
INPUT TDate

*// Process*\
BYear = BDate / 10000\
BMonth = (BDate % 10000) / 100\
BDay = BDate % 100

TYear = TDate / 10000\
TMonth = (TDate % 10000) / 100\
TDay = TDate % 100

IF BMonth < 1 || BMonth > 12 THEN\
  PRINT "Invalid birht month."\
ENDIF\
IF BMonth = 2 THEN\
  IF (BYear % 4 == 0 && BYear % 100 != 0) || (BYear % 400 == 0) THEN\
    MaxDays = 29 // Leap\
  ELSE\
    MaxDays = 28  // Not leap\
  ENDIF\
ELSE IF BMonth == 4 || BMonth == 6 || BMonth == 9 || BMonth == 11 THEN\
  MaxDays = 30\
ELSE\
  MaxDays = 31\
ENDIF\
IF BDay < 1 || BDay > MaxDays THEN\
  PRINT "Invalid birthday."\
ENDIF

IF TMonth < 1 || TMonth > 12 THEN\
  PRINT "Invalid month."\
ENDIF\
IF TMonth = 2 THEN\
  IF (TYear % 4 == 0 && TYear % 100 != 0) || (TYear % 400 == 0) THEN\
    MaxDays = 29\
  ELSE\
    MaxDays = 28\
  ENDIF\
ELSE IF TMonth == 4 || TMonth == 6 || TMonth == 9 || TMonth == 11 THEN\
  MaxDays = 30\
ELSE\
  MaxDays = 31\
ENDIF\
IF TDay < 1 || TDay > MaxDays THEN\
  PRINT "Invalid day."\
ENDIF\
Age = TYear - BYear\
IF (TMonth < BMonth) || (TMonth == BMonth && TDay < TDay) THEN\
  Age = Age - 1\
ENDIF

*// Output\*
PRINT "You are", Age, "years old."

**END**

## *EXPLANATION*

First, we extract the year, month and day from the birthdate and today's date. Each date is validated, including leap years. After validation, the age is calculated by the difference between the birth year and the current year. If the birthday hasn't occurred in the current year, the age is adjusted.
