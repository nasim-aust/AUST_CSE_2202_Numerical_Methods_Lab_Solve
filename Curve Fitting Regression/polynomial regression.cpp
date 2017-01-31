#include <bits/stdc++.h>
#define SIZE 101
using namespace std;
int main()
{
    int m, n;
    cout <<"Enter the number of data set:";
    cin >> n;
    cout<<"Enter the number of polynomial:";
    cin >> m;

    int x, y;
    double arrX[SIZE][SIZE],arrY[SIZE];

    for(int i=0; i<n; i++)
    {
        cin >> x >> y;
        for(int a=0; a<=m; a++)
        {
            for(int b=0; b<=a; b++)
            {
                if(a<m) arrX[b][a-b]+=pow(x, a);
                arrX[m-b][m-(a-b)]+=pow(x, 2*m-a);
            }
            arrY[a]+=y*pow(x, a);
        }
    }
    for(int a=0; a<=m; a++)
    {
        double temp=arrX[a][a];
        for(int b=0; b<=m; b++) arrX[a][b]/=temp;
        arrY[a]/=temp;

        for(int b=0; b<=m; b++)
        {
            if(a!=b)
            {
                temp=arrX[b][a];
                for(int c=0; c<=m; c++) arrX[b][c]-=(temp*arrX[a][c]);
                arrY[b]-=(temp*arrY[a]);
            }
        }
    }
    for(int i=0; i<=m; i++) cout << "a" << i+1 << " = " << arrY[i] << endl;
    return 0;
}
/*
sample input output

Enter the number of data set:4
Enter the number of polynomial:2
1 6
2 11
3 18
4 27
a1 = 3
a2 = 2
a3 = 1

*/
