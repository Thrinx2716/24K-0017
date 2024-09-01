# Question 1

## *ALGORITHM*
1. Take the customer's order *(e.g., food items, drinks, etc.)*
2.  Ask the customer if they have any special requests or add-ons *(e.g., extra cheese, no salt, etc.)*
3.  If the customer has special requests, modify the order according to the requests
4.  If no special requests, proceed to the next step
5.  Total Cost = Order Cost + Special Requests Cost
6.  Display the Total Cost for the customer

## *PSEUDOCODE*
**START**

INPUT CustomerOrder\
INPUT SpecialRequests\
SET TotalCost to 0

IF SpecialRequests = TRUE THEN\
&nbsp; CustomerOrder = CustomerOrder + SpecialRequests\
ENDIF\
TotalCost = OrderCost + SpecialRequestsCost\
PRINT TotalCost

**END**
