#include<bits/stdc++.h>
#define SIZE 101
#define EPS .001
using namespace std;

void jacobi(int n, float a[SIZE][SIZE],float b[SIZE],float x[SIZE], int *count, int *status)
{
    int key;
    float sum,x0[SIZE];

    for(int i=1; i<=n; i++)
        x0[i] = b[i]/a[i][i];

    //Jacobi iteration begins
    *count = 1;
    begin:
    key=0;

    //counting values of x(i)
    for(int i=1; i<=n; i++)
    {
        sum = b[i];
        for(int j=1; j<=n; j++)
        {
           if(i==j) continue;
           sum = sum - a[i][j]*x0[j];
        }
        x[i] = sum / a[i][i];
        if(key == 0)
        {
            //testing accuracy
            if(fabs((x[i]-x0[i])/x[i]) > EPS)
                key = 1;
        }
    }

    //testing for convergence
    if(key == 1)
    {
        if(*count == SIZE)
        {
            *status = 2;
            return;
        }
        else
        {
            *status = 1;
            for(int i=1; i<=n; i++) x0[i] = x[i];
        }
        *count = *count+1;
        goto begin;
    }
}


int main()
{
    int n,count,status;
    float a[SIZE][SIZE], b[SIZE], x[SIZE];

    cout <<"The number of system size: ";
    cin >> n;
    cout<<"Input coefficients a(i,j) row by row\n";
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++) cin >> a[i][j];
    }

    cout <<"Input vector:";
    for(int i=1; i<=n; i++)
        cin >> b[i];
    jacobi(n,a,b,x, &count, &status);

    if(status==2)
    {
        cout <<"No convergence in"<<SIZE<<"iteration";
    }
    else
    {
        //cout << "\nsolution vector X ";
        for(int i=1; i<=n; i++) cout << x[i]<<"\t ";
            //printf("%15.6f", x[i]);
        cout<<endl <<"Iterations = "<<count;
    }

    return 0;
}
/*sample input output
example 8.1
The number of system size: 3
Input coefficients a(i,j) row by row
2 1 1
3 5 2
2 1 4
Input vector:5 15 8
0.999528         1.99952         0.999613
Iterations = 91
*/
