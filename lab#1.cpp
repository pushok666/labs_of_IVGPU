#include <iostream>
#include <cmath>

using namespace std;

void lab_2();
void fun_2f(double,double,double,double);
void fun_2exp(double, double, double, double, double);



void lab_2()
{
    double a = 10.2;
    double b = 9.2;
    double x = 2.2;
    double c = 0.5;
    double f = 0;
    double z = 0;
    cout<< "lab #2 Sidorov P.V\n\n";

    fun_2f(a,b,x,f);

    fun_2exp(a, b, c, x, z);

    cout << "enter your details: a, b, x, c" << endl;

    cin >> a, b, x, c;

    fun_2f(a, b, x, f);

    fun_2exp(a, b, c, x, z);

//cout « "enter your details: a, b, c, x" « endl;

//cin » a, b, c, x;


}

void fun_2f(double a, double b, double x, double f)
{
    f = log10(a + pow(x, 2)) + pow(sin(x / b), 2);
    cout << "f = " << f << endl;
}
void fun_2exp(double a, double b, double c, double x, double z)
{
    z = exp(c * x) * ((x + sqrt(x + a)) / (x - sqrt(abs(x - b))));
    cout << "z = " << z << endl;
}