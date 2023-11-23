#include <math.h>
#include "dod.h"
#include "sum.h"
#include "var.h" // підключили зовнішні оголошення змінних
using namespace nsDod;
using namespace nsVar;
void nsSum::sum() {
	n = 0;
	a = 2 / x;
	s = a;
	do {
		n++;
		dod(); // виклик процедури обчислення доданку
		s += a;
	} while (fabs(a) > e);
}