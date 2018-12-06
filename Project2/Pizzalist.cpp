#include"Pizzalist.h"
/*----------------peppy panner-----------*/
string PeppyPaneer::getDiscription() {
	string discript = "Peppy Paneer";
	return discript;
}
int PeppyPaneer::getCost() {
	return 100;
}
/*------------farm house-----------------*/
string FarmHouse::getDiscription() {
	string discript = "Farm House";
	return discript;
}
int FarmHouse::getCost() {
	return 200;
}
/*------------------margheritta------------*/
string Margheritta::getDiscription() {
	string discript = "Margeritta";
	return discript;
}
int Margheritta::getCost() {
	return 300;
}
/*------------------chicken fiesta---------*/
string ChickenFiesta::getDiscription() {
	string discript = "Chicken Fiesta";
	return discript;
}
int ChickenFiesta::getCost() {
	return 400;
}

/*-------------------fresh tomato----------*/
string FreshTomato::getDiscription() {
	string discript = a->getDiscription() + ",Fresh Tomato";
	return discript;
}
FreshTomato::FreshTomato(Pizza *x) {
	a = x;
}
int FreshTomato::getCost() {
	return a->getCost() + 40;
}
/*------------------Paneer------------------*/
Paneer::Paneer(Pizza *x) {
	a = x;
}
string Paneer::getDiscription() {
	string discript = a->getDiscription() + ",Panner";
	return discript;
}
int Paneer::getCost() {
	return a->getCost() + 50;
}
/*--------------------Jalapeno--------------*/
Jalapeno::Jalapeno(Pizza *x) {
	a = x;
}
string Jalapeno::getDiscription() {
	string discript = a->getDiscription() + ",Jalapeno";
	return discript;
}
int Jalapeno::getCost() {
	return a->getCost() + 60;
}
/*---------------Barbeque-----------------*/
Barbeque::Barbeque(Pizza *x) {
	a = x;
}
string Barbeque::getDiscription() {
	string discript = a->getDiscription() + ",Barbeque";
	return discript;
}
int Barbeque::getCost() {
	return a->getCost() + 70;
}

