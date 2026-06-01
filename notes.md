Decision #1

Use one field for transaction type instead of
two booleans because income and expense are
mutually exclusive.

Decision #2

Validation, no negative values for amounts. 
Validation, if transaction vector size is zero, instead of iteration, directly print. 