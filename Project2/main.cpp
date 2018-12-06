#include "Pizzalist.h"
int main() {
	Pizza *a;
	a = new Margheritta;
	a = new Paneer(a);//decorate pizza a with topping paneer
	cout << a->getDiscription() << endl;
	cout << a->getCost() << endl;
	system("pause");
}