// Bisection Method
// To find all possible root for an equation .
#include <iostream>
#include <cmath>
#include <cstdio>
using namespace std;
#define EPS 1e-8
double f (double x)
{
    return x*x + (-5)*x + 6 ;
}
double bisection_All_Possible_Root(double x1 , double x2)
{
    double x0 = x1  ;
    while(fabs(f(x0))>=EPS)
    {
        x0 = (x1+x2)/2;
        if(f(x1)*f(x0)<=0) x2 = x0 ;
        else x1 = x0 ;
    }
    return x0 ;
}
int main()
{
    double Xmax = sqrt( (-5/1)*(-5/1) - 2*(6/1) ) ;
    // An*X^(n-1) + (An-1)*X^(n-2) + ..... + A2*X^1 + A1 * X^(0) .
    // Xmax = sqrt ( (An-1/An)^2 - 2 * (An-2/An) ) .
    // It selects a interval where all the root lies .
    for(double x1=-Xmax;x1<=Xmax;x1=x1+.01)
    {
        double x2 = x1+.01 ;
        if(f(x1)*f(x2)<=0) printf("The root is : %.6lf\n",bisection_All_Possible_Root(x1,x2));
    }
    if(fabs(f(0))<EPS)  printf("The root is : 0.000000\n"); // Find out whether 0 is a root or not .
    return 0;
}
/*
The root is : 2.000000
The root is : 3.000000
*/
