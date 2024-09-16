# Problem 4

## *IPO*

## *FLOWCHART*

## *PSEUDOCODE*

**START**

*// Input*\
INPUT Money

INPUT OnionPr\
INPUT ApricotPr\
INPUT GrapePr\
INPUT TomatoPr

INPUT OnionQty\
INPUT ApricotQty\
INPUT GrapeQty\
INPUT TomatoQty

*// Initialize/Process*\
Change = 0\
Needed = 0\
Total = (OnionPr * OnionQty) + (ApricotPr * ApricotQty) + (GrapePR * GrapeQty) + (TomatoPr * TomatoQty)

*// Output*\
IF Total <= Money THEN\
  Change = Money - Total\
    PRINT "Change: $", Change\
ELSE\
  Needed = Total - Money\
    PRINT "You need $", Needed, "to cover the total price"\
ENDIF

**END**

## *EXPLANATION*
