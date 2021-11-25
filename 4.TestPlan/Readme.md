
# TEST PLAN:

## Table no: High level test plan

| **Test ID** | **Description**                                              | **Exp I/P** | **Exp O/P** | **Actual Out** |**Type Of Test**  |    
|-------------|--------------------------------------------------------------|------------|-------------|----------------|------------------|
|  01      |v|  valid ATM card|successfully inserted|presents information of card holder|Requirement based |
|  02       |verify the ATM machines accepts card and PIN details|  PIN number|screen for transaction options|Accepts the PIN and moves forward|Scenario based    |
|  03       |verify the error message by inserting an invalid card(expired card)|  invalid ATM card|invalid alert|Error message|Boundary based    |

## Table no: Low level test plan

| **Test ID** | **Description**                                              | **Exp IN** | **Exp OUT** | **Actual Out** |**Type Of Test**  |    
|-------------|--------------------------------------------------------------|------------|-------------|----------------|------------------|
|  01       |user password| number |Valid  |Enter correct pin|Boundary based |
|  02       |payment | Account details |valid amount to enter|Crediting amount in reqiured Account|Scenario based    |
|  03       |reports generation| typr of report|select report|generate a report|Requirement based    |

