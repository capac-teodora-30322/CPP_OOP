#include "Person.h"
#include "Angajat.h"
#include "Adult.h"
#include "Cnp.h"
#include "Copil.h"
#include "Employee.h"
#include "Entity.h"
using namespace std;

void Person::setRace(string Race) {
	race = Race;
}
string Person::getRace() {
	return race;
}
void Person::setIq(int IQ) {
	iq = IQ;
}
int Person::getIq() {
	return iq;
}
void Person::setHeight(float Height) {
	height = Height;
}
float Person::getHeight() {
	return height;
}
void Person::setWeight(float Weight) {
	weight = Weight;
}
float Person::getWeight() {
	return weight;
}
void Person::setShoe_size(int Shoe_size) {
	shoe_size = Shoe_size;
}
int Person::getShoe_size() {
	return shoe_size;
}
void Person::say_hello() {
	cout << "Hello, I am a person!" << endl;
}

void Person::say_goodbye() {
	cout << "The person says goodbye." << endl;
}

void Person::it_exists() {
	cout << "This entity exists." << endl;
}
void Person::doesnt_exist() {
	cout << "This entity doesn't exist." << endl;
}
int Main::main() {
	Person Mara;
	Adult Teo;
	Copil Diana;
	Angajat Vlad;
	/*Vlad.setShoe_size(43);
	cout << "Marimea lui Vlad la pantofi este " << Vlad.getShoe_size() << endl;
	Diana.setShoe_size(36);
	cout << "Marimea Dianei la pantofi este " << Diana.getShoe_size() << endl;
	Teo.setShoe_size(38);
	cout << "Marimea lui Teo la pantofi este " << Teo.getShoe_size() << endl;*/ 

	Person* Beatrice = new Adult();
	Beatrice->say_hello();
	Person* Andrei = new Copil();
	Andrei->say_hello();
	Person* Claudia = new Angajat();
	Claudia->say_hello();

	Person* Stefan = new Adult();
	cout << endl;
	Stefan->say_goodbye();
	Person* Angi = new Copil();
	Angi->say_goodbye();
	Person* Stefania = new Angajat();
	Stefania->say_goodbye();

	Person* A = new Person();
	Adult* B = new Adult();
	Copil* C = new Copil(); 
	Angajat* D = new Angajat();
	cout << endl << endl;
	A->it_exists();
	B->it_exists();
	C->it_exists();
	D->it_exists();
	A->doesnt_exist();
	B->doesnt_exist();
	C->doesnt_exist();
	D->doesnt_exist();

	delete A, B, C, D, Beatrice, Claudia, Stefan, Andrei, Angi, Stefania;
	return 0;
}