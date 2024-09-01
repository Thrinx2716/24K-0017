# Question 1

## *ALGORITHM*
1. Start
2. Take the customer's order *(e.g., food items, drinks, etc.)*
3. Ask the customer if they have any special requests or add-ons *(e.g., extra cheese, no salt, etc.)*
4. If the customer has special requests, modify the order according to the requests
5. If no special requests, proceed to the next step
6. Total Cost = Order Cost + Special Requests Cost
7. Display the Total Cost for the customer
8. End

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
