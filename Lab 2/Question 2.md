# Question 2

## ALGORITHM

1. Start
2. Input account number *(The system asks for the account number)*
3. Input deposit amount *(The system asks for the deposit amount)*
4. Check Account Validity. *(Verify if the account number exists in the database)*
5. If the account is valid, continue to the next step.
6. If the account is not valid, print "Invalid account number" and end the process.
7. Check Deposit Amount. *(Verify if the deposit_amount is greater than 0)*
8. If the deposit amount is valid, continue to the next step.
9. If the deposit amount is not valid, print "Deposit amount must be greater than 0" and end the process.
10. Process deposit *(Add the deposit_amount to the existing account balance)*
11. Print receipt "Deposit successful, your new balance is: [account_balance]"
12. End

## PSEUDOCODE

**START**

INPUT AccountNumber
INPUT DepositAmount

IF AccountNumber = TRUE THEN
  IF DepositAmount > 0 THEN
    AccountBalance = DepositAmount + AccountBalance
    PRINT "Deposit successful, your new balance is: ", AccountBalance
  ELSE
    PRINT "Deposit amount must be greater than 0!"
  ENDIF
ELSE
  PRINT "Invalid account number!"
ENDIF

**END**

## FLOWCHART

