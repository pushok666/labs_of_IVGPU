#include<iostream>
#include<cmath>

using namespace std;

void sFun(double, double);
void fiFun(double,double,double);
double Factorial(double);


void lab1()
{
    
    double x = 0.335;
    double y = 0.025;
    double s = 0;
    double fi = 0;
    cout<<"the result of work on entered data"<<endl;
    sFun(x,s);
    fiFun(x,y,fi);
    cout<<"enter your data: x,y,s,fi "<<endl;
    cin>>x,y,s,fi;
    sFun(x,s);
    fiFun(x,y,fi);
}

double Factorial(double n)
{
    
    double factorial = 1;

    if (n < 0)
    {
        cout << "Error! Factorial of a negative number doesn't exist."<<endl;
    }
        
    else 
    {
        for(int i = 1; i <=n; ++i) 
        {
            factorial *= i;
        }
    
    }
    return factorial;
}

void sFun(double x, double s)
{
    s = 1 + x + (pow( x,2)/Factorial(2))+(pow(x,3)/Factorial(3))+(pow(x,4)/Factorial(4));
    cout<<"s = "<<s<<endl;
}
void fiFun(double x , double y, double fi)
{
    fi = x*(sin(pow(x,3)) + pow(cos(x),2));
    cout<<"fi = "<<fi<<endl;
}