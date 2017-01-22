#include<bits/stdc++.h>
#define size 101
using namespace std;

int main()
{
    int n;
    float x[size],y[size],f[size],value,sum=0.0;
    cout <<"Enter the number of elements: ";
    cin >> n;
    for(int i=0; i<n; i++)
    {
        printf("x[%d] = ",i);
        cin >> x[i];
        printf("y[%d] = ",i);
        cin >> y[i];
    }

    cout <<"Enter the value at which interpolation is required : ";
    cin >> value;

    for(int i=0; i<n; i++)
    {
        float temp = 1;
        int k = i;
        for(int j=0; j<n; j++)
        {
            if(k == j) continue;
            else temp = temp * ((value - x[j])/(x[k]-x[j]));
        }
        f[i] = y[i]*temp;
    }
    for(int i=0; i<n; i++) sum = sum+f[i];
    cout <<"The answer is :" << sum ;

    return 0;
}
