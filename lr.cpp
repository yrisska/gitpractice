#include <iostream>
#include <iomanip>
#define _USE_MATH_DEFINES
#include <math.h>
using namespace std;
int main()
{
    double y, x, x1, x2, h;
    cout << "Input x1,x2 and step"<<endl;
    cin >> x1 >> x2 >> h;
    x = x1;
    do {
        y = sqrt(sin(x*M_PI/180)) + pow(M_E,x) - 3;
        cout <<setw(10)<< x<<setw(10)<<y<<endl;
        x+=h;
    	}
	while (x <= (x2 + h / 2))
}
