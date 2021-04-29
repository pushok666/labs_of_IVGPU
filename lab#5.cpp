#include <iostream>
#include <cmath>

using namespace std;

double func(int, double, double);

void lab5()
{
    int n = 1;
    double x = 0.15;
    int ps = 0;
    double result = 0;
    cin>>ps;
    cout<<"first calculate "<<endl;
    for (int i = 0; i < ps; i++)
    {
        double y = func(n,x,0);
        result+=y;
        n++;
    }
    cout<<"result"<<result<<endl;
    
}

double func(int n, double x, double value)
{
    value = pow(x,2*n+1)/ (4* pow(n,2)+1);
    return value;
}
