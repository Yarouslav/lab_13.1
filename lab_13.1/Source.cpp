#include <iostream>
#include <math.h>
#include <iomanip>
#include "dod.h"
#include "sum.h"
#include "var.h"
using namespace std;
using namespace nsDod;
using namespace nsSum;
using namespace nsVar;
int main()
{
	  cout << "xp = "; cin >> x_p;
    cout << "xk = "; cin >> x_k;
    cout << "dx = "; cin >> dx;
    cout << "eps = "; cin >> e;
    cout << fixed;
    cout << "-------------------------------------------------" << endl;
    cout << "|" << setw(5) << "x" << " |"
        << setw(10) << "log((x + 1) / (x - 1))" << " | "
        << setw(7) << "S" << " |"
        << setw(5) << "n" << " |"
        << endl;
    cout << "-------------------------------------------------" << endl;
	x = x_p;
	while (x <= x_k) {
		sum(); // виклик процедури обчислення суми
        cout << "|" << setw(7) << setprecision(2) << x << " |"
            << setw(15) << setprecision(5) << log((x + 1) / (x - 1)) << " |"
            << setw(10) << setprecision(5) << s << " |"
            << setw(5) << n << " |"
            << endl;
		x += dx;
	}
	cin.get();
	return 0;
}