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
        sumXMulY+=log(x)*log(y);
        sumX+=log(x);
        sumY+=log(y);
        sumXSquare+=log(x)*log(x);
    }

    double b=fabs(((n*sumXMulY)-(sumX*sumY))/((n*sumXSquare)-(sumX*sumX)));
    double a=fabs((sumY/n)-b*(sumX/n));

    cout<<"a = "<< a <<endl <<"b =  "<<b;
    return 0;
}
/*sample input output
Enter number of data sets: 5
X-Y
1 .5
2 2
3 4.5
4 8
5 12.5
a = 0.693147
b =  2
*/
