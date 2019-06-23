# Retirement Savings Calc
Assignment 1 from Intro Programming Class 

Emily Zastenchik
Assignment 1

PROBLEM: 

Find future value of retirement savings account

ANALYSIS:

         INPUTS 
         
         double a = salary
                b = ROI (percent form)
                c = payment frequency per year
                d = years worked
                e = total percentage saved (including company contribution)
                
         FORMULAS 
         
         R = (b / 100) / c
         N = c * d
         P = (a / c) * (e / 100) = P1 * P2
         
         FUNCTIONS 
		 
         Num = (P * ((pow(R, N) - 1)     //numerator of FV function
         returnQuotient (double, double)    //FV value in dollars
		 
         FV = Num / R

IMPLEMENTATION:

               Ask user to input the following values
               
               Assign designated values to variables
               
               Calculate values for sub-formulas (R, N, P)
               
               Use sub-formulas and function values to calculate FV
               
               Display total FV
        
