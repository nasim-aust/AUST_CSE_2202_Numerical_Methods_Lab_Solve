#include<bits/stdc++.h>
#define eps .001
using namespace std;

int main()
{
    double a,b,c,x0,x;
    int r=1;
    cout <<"Enter the value of a,b,c : ";
    cin>>a>>b>>c;
    if(a>0){
         cout<<"Enter the value of x0(initial guess) :";
         cin>>x0;
         double fx = a*x*x +b*x +c;
         double fpx = 2*a*x +b;
         x = x0-(fx/fpx);
         cout <<"iteration "<<r++<<" value is : "<<x<<endl;
        while(abs(x0-x)>eps)
        {
            x0 = x;
            fx = a*x*x +b*x +c;
            fpx = 2*a*x +b;
            x = x0-(fx/fpx);
            cout <<"iteration "<<r++<<" value is : "<<x<<endl;
        }
        cout<<"The Root is : " <<x<<endl;
    }
    return 0;
}
