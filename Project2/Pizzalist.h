#ifndef Pizzalist_h
#define Pizzalist_h
#include<iostream>
#include<string>
using namespace std;
/*---------------pizza----------------------------*/
class Pizza {
private:
	string name;
	string discription;
public:
	virtual string getDiscription() = 0;
	virtual int getCost()=0;
	Pizza& operator=(const Pizza& x) {
		this->name = x.name;
		this->discription = x.discription;
	}
 };
class PeppyPaneer: public Pizza {
public:
	string getDiscription();
	int getCost();
};
class FarmHouse : public Pizza {
public:
	string getDiscription();
	int getCost();
};
class Margheritta : public Pizza {
public:
	string getDiscription();
	int getCost();
};
class ChickenFiesta : public Pizza {
public:
	string getDiscription();
	int getCost();
};
/*-------------Toping--------------*/
class TopingDecorator : public Pizza {
public:
	virtual string getDiscription()=0; //make this class -> abstract class
};
class FreshTomato : public TopingDecorator {
private:
	Pizza *a;
public:
	FreshTomato(Pizza *x);
	int getCost();
	string getDiscription();
};
class Paneer : public TopingDecorator {
private :
	Pizza *a;
public:
	Paneer(Pizza *x);
	int getCost();
	string getDiscription();
};
class Jalapeno : public TopingDecorator {
private:
	Pizza *a;
public:
	Jalapeno(Pizza *x);
	int getCost();
	string getDiscription();
};
class Barbeque : public TopingDecorator {
private:
	Pizza *a;
public:
	Barbeque(Pizza *x);
	int getCost();
	string getDiscription();
};
#endif // !Pizzalist_h
