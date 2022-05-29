# Question

Write a program which works out the Simple interest on a loan. Simple interest is worker out as follows:

$$Simple\;Interest\;=\;\frac{p\;\times\;t\;\times\;r}{100}$$

where: 
- p is total sum of money to be borrowed
- t is time in years to repay loan
- r is rate of interest

Program should:
- contain necessary hard coded values 
- outputs to terminal the simple interest on 
    - principal amount p of 20,000 
    - rate r of 5%
    - loan repayment t of 5 years
- Set up to two decimal places

> math.h may be needed

## Logic

We need variables for p, t and r where all three must be float due to the possibility of fractional values. Make values constant. 

math.h library is not needed as can be written as (p*t*r) / 100. 
Use print statement to output.