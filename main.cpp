#include <cstdlib>
#include <iostream>
#include <cmath>

using namespace std;
/*
Emily Zastenchik
Assignment 1

PROBLEM: Find future value of retirement savings account
ANALYSIS:
         INPUTS - 
         double a = salary
                b = ROI (percent form)
                c = payment frequency per year
                d = years worked
                e = total percentage saved (including company contribution)
                
         FORMULAS -
         R = (b / 100) / c
         N = c * d
         P = (a / c) * (e / 100) = P1 * P2
         
         FUNCTIONS -
		 
         Num = (P * ((pow(R, N) - 1)     //numerator of FV function
         returnQuotient (double, double)    //FV value in dollars
		 
         FV = Num / R

IMPLEMENTATION:
               Ask user to input the following values
               Assign designated values to variables
               Calculate values for sub-formulas (R, N, P)
               Use sub-formulas and function values to calculate FV
               Display total FV
        
*/


double determineR(double, double);
double determineN (double, double);
double determineP (double, double, double);
double returnQuotient(double, double);

int main()
{
    double a, 
	b,
	c,  
	d, 
	e,  
	Num,
	FV;
	
  
    
    cout << "Please enter the following values to calculate" << endl
         << "your future retirement savings account. " << endl;
    cout << "Annual salary: ";
    cin >> a;
    cout << "Return on investment (in percent form): ";
    cin >> b;
    cout << "Payment frequency per year: ";
    cin >> c;
    cout << "Years worked at company: ";
    cin >> d;
    
    cout << "Total percentage saved (include company contribution as well): ";
    cin >> e;
    
    double P = determineP (a, c, e);
    cout << "P = " << P <<endl;
    
	double R = determineR (b, c);
    cout << "R = " << R << endl;
    
	double N = determineN (c, d);
	cout << "N = "<< N << endl;
    	
    
 	Num = (P * (pow(1 + R, N) - 1));
 	cout << "Numerator = " << Num <<endl;    

    FV = returnQuotient(Num, (1, R));
   
	
	cout << "The future value of your retirement"
         << " saving account is: $ " << FV << endl;

    system("PAUSE");
    return EXIT_SUCCESS;
}

double determineR(double A, double B)
{
	return (A / 100) / B;
    
}

double determineN (double A, double B)
{
	return A * B;
    
}	
	
double determineP (double A, double B, double C)
{
	return (A / B) * (C / 100);
	
}
	
double returnQuotient(double a, double b) 
{
    return a / b;      
}
    
         
         
         
         
         
         
         
         
         
         
