#include <bits/stdc++.h>
#define SIZE 101
#define EPS .001
using namespace std;

int arr[SIZE];
int power;

double fx(double x0)
{
    double func = 0;
    for(int i=power; i>=1; i--){
        func+=arr[i]*(pow(x0,i)) ;
    }
    func+=arr[0];
    return func;
}
int main()
{
    double temp,x1,x2,x3;
    double x,x0;
    int a=1;
    cout<<"Power of x: ";
    cin >>power;

    for(int i=power; i>=0; i--){
        printf("\nx^%d = ",i);
        scanf("%d",&arr[i]);
    }

    cout<< "Enter first approximation : ";
    cin >> x0;

    while (1){
        x = fx(x0);
        if((fabs(x-x0))< EPS){
            break;
        }
        printf("Iteration %d: Current value = %lf\n", a, x);
        a++;
        x0=x;
    }
    cout <<"Root is: "<<x;
}
