#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter number of data sets: ";
    cin >> n;
    cout <<"X-Y"<<endl;
    double x, y, sumXSquare=0, sumXMulY=0, sumX=0, sumY=0;
    for(int i=0; i<n; i++){
        cin >> x >> y;
        sumXMulY+=(x*y);
        sumX+=x;
        sumY+=y;
        sumXSquare+=(x*x);
    }

    double b=((n*sumXMulY)-(sumX*sumY))/((n*sumXSquare)-(sumX*sumX));
    double a=(sumY/n)-b*(sumX/n);

    cout<<"The equation is:"<< a <<" + "<<b<<"*x";
    return 0;
}
/*sample input output

Enter number of data sets: 5
X-Y
1 3
2 4
3 5
4 6
5 8
The equation is:1.6 + 1.2*x

*/
