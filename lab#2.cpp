//Lab 2, variant 3
//x = 0.05
#include <iostream>
#include <math.h>
//#include <conio.h>
using namespace std;

float func_y(float a, float b, float c, float x) 
{
    float res = 0;
    if(x < 1.2) res =  a * x * x + b * x + c;
    if(x == 1.2) res = a / x + sqrt(x * x + 1);
    if(x > 1.2) res = (a + b * x) / sqrt(x * x + 1);
    return res;
}


void lab2()
{
    

    float x = 0.05, 
          y, 
	      a = 2.8, 
	      b = -0.3,
	      c = 4;

    
    cout << a << " " << b << " " << c << " " << x << "\n\n";
    y = func_y(a, b, c, x);
    cout << "y = " << y << "\n\n";

    
    cin >> a >> b >> c >> x;
    y = func_y(a, b, c, x);
    cout << "\n" << "y = " << y << "\n\n";

}