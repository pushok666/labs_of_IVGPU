#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

double f_x(double x)
{
	return pow(x, x) * (1 + log(x));
}

double F_x(double x)
{
	return pow(x, x);
}

void lab4()
{
	
	
	double a, b, z, zp, ep, x, dx;
	int n; 
	
	cout << "Ëàáîðàòîðíàÿ ðàáîòà 4 - Îðëèê Þ.Â.\n\n"; 
    cout << "Ââåäèòå èñõîäíûå äàííûå: a, b, n:\n" << 
            "    a = 1 - íà÷àëî èíòåðâàëà èíòåãðèðîâàíèÿ;\n" << 
            "    b = 3 - êîíåö èíòåðâàëà èíòåãðèðîâàíèÿ;\n" <<
            "    n = 40 - ÷èñëî øàãîâ èíòåãðèðîâàíèÿ;\n\n"; 
            
    cin >> a >> b >> n;
    
    cout << "\nÂâåäåíû èñõîäíûå äàííûå: \n" << "a = " << a << ", b = " << b << ", n = " << n << ".\n\n";
    
    z = (f_x(a) + f_x(b)) / 2;
    dx = (double) (b - a) / n;
    x = a;
    
    for(int i = 1; i < n; i++) 
    {
    	x += dx;
    	z += f_x(x);
	}
	
	z *= dx;
	zp = F_x(b) - F_x(a); 
	ep = pow(10, -4); 
	
	cout << "Çíà÷åíèå èíòåãðàëà, îïðåäåëžííîå ìåòîäîì òðàïåöèè, z = " << z << "; \n" <<
            "Çíà÷åíèå èíòåãðàëà, îïðåäåëžííîå àëãåáðàè÷åñêè, zp = " << zp << "; \n" <<
            "Ïîãðåøíîñòü âû÷èñëåíèÿ e = " << ep << " %." << endl << endl;
	
    system("pause"); 
}