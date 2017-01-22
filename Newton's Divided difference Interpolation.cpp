#include<bits/stdc++.h>
#define size 101
using namespace std;

int main()
{
    int n,f,f1=1,f2=0,j=1;
    float x[size],y[size],p[size],value;
    cout <<"Enter the number of elements: ";
    cin >> n;
    for(int i=1; i<=n; i++)
    {
        printf("x[%d] = ",i);
        cin >> x[i];
        printf("y[%d] = ",i);
        cin >> y[i];
    }
    f=y[1];
    cout <<"Enter the value at which interpolation is required : ";
    cin >> value;

    do
    {
        for (int i=1;i<=n-1;i++)
        {
            p[i] = ((y[i+1]-y[i])/(x[i+j]-x[i]));
            y[i]=p[i];
        }
        f1=1;
        for(int i=1;i<=j;i++) f1*=(value-x[i]);
        f2+=(y[1]*f1);
        n--;
        j++;
    }while(n!=1);
    f+=f2;
    cout <<"The answer is :" << f ;

    return 0;
}
