***24K-0017 | Salman Ahmed***

# Problem 4

## *IPO*

![image](https://github.com/user-attachments/assets/6bd27c0d-ae18-4a67-a823-50560524fc13)

## *FLOWCHART*

![image](https://github.com/user-attachments/assets/86bd9c6a-cfba-4c19-bf85-38c1c60e2622)

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

First, we ask for how much money Mr. Bhoola has as well as the prices of onions, apricots, grapes, and tomatoes. Then we ask how many kilograms he wants to buy. We then calculate the total cost based on the quantity and price of each listed item. And finally, we compare the total cost to the money Mr. Bhoola has and tell him if he has enough money to cover his expenses. If he does, we output how much change he will get. If he doesn't, we output how much more he needs.
