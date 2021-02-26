#include<iostream>
#include<cmath>

using namespace std;

double sFunc(double, double, double, double);
void sOut(double, double, int);

void lab3()
{
    cout<<"lab#3 Sidorov P.V. ISTB11"<< endl;
    double a = 2.8;
    double b = -0.3;
    double c = 4;
    double X = 0;
    double Y = 0;
    double deltX = 0.05;
    double ziroX = 1;
    double endX = 2;
    int n = 1;

    cout<<"the result of work on entered data: "<<endl;
    cout<<"#"<<"\t meaning of X"<<"\t meaning of X(Y)"<<endl;
    for (double X = ziroX; X <= endX; X+=deltX)
    {
        Y = sFunc(a,b,c,X);
        sOut(X,Y,n);
        cout<<endl;
        n++;
    }
    cout<<"enter your data: a, b, c, ziroX, endX, deltX"<<endl;
    cin>>a, b, c, ziroX, endX, deltX;
    cout<<"#"<<"\t meaning of X"<<"\t meaning of X(Y)"<<endl;
    for (double X = ziroX; X <= endX; X+=deltX)
    {
        Y = sFunc(a,b,c,X);
        sOut(X,Y,n);
        cout<<endl;
        n++;
    }
}

double sFunc(double a, double b, double c, double X)
{
    double result;
    if (X<1.2)
    {
        result = a*pow(X,2) + b*X + c;
    }
    if(X==1.2)
    {
        result = a/X + sqrt(pow(X,2) + 1);
    }
    if(X>1.2)
    {
        result = (a+b*X)/sqrt(pow(X,2) + 1);
    }
    return result;
}
void sOut(double X, double Y, int n)
{
    cout.setf(ios::right);
    cout.width(3); cout<<n;
    cout.width(17); cout<<X;
    cout.width(19); cout<<Y<<endl;
}