#include<bits/stdc++.h>
#define eps .001
using namespace std;

int main()
{
    double a,b,c,d,x0,x;
    double r=1;
    cout <<"Enter the value of a,b,c,d : ";
    cin>>a>>b>>c>>d;
    if(a>0){
         cout<<"Enter the value of x0(initial guess) :";
         cin>>x0;
         double fx = a*x*x*x +b*x*x +c*x+d;
         double fpx = 3*a*x*x +2*b*x+c;
         x = x0-(fx/fpx);
         cout <<"iteration "<<r++<<" value is : "<<x<<endl;
        while(abs(x0-x)>eps)
        {
            x0 = x;
            fx = a*x*x*x +b*x*x +c*x+d;
            fpx = 3*a*x*x +2*b*x+c;
            x = x0-(fx/fpx);
            cout <<"iteration "<<r++<<" value is : "<<x<<endl;
        }
        cout<<"The Root is : " <<x<<endl;
    }
    return 0;
}
