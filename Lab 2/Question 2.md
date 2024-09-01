# Question 2

## *ALGORITHM*

1. Start.
2. Input account number.
3. Input deposit amount.
4. If the account is valid, continue to step 6.
5. If the account is not valid, print "Invalid account number" and end the process.
6. If the deposit amount is greater than 0, continue to step 8.
7. If the deposit amount is not valid, print "Deposit amount must be greater than 0" and end the process.
8. Add the deposit amount to the existing account balance.
9. Print receipt "Deposit successful, your new balance is", AccountBalance
10. End.

## *PSEUDOCODE*

**START**

INPUT AccountNumber\
INPUT DepositAmount

IF AccountNumber = TRUE THEN\
  IF DepositAmount > 0 THEN\
    AccountBalance = DepositAmount + AccountBalance\
    PRINT "Deposit successful, your new balance is: ", AccountBalance\
  ELSE\
    PRINT "Deposit amount must be greater than 0!"\
  ENDIF\
ELSE\
  PRINT "Invalid account number!"\
ENDIF

**END**
