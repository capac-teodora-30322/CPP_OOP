#include "Angajat.h"

using namespace std;

void Angajat::modificare_salariu(float new_salary) {
	cout << "Noul salariu al angajatului este: " << new_salary << endl;
}

void Angajat::voted(bool v) {
	if (v == true) cout << "This adult voted.\n";
	else cout << "This adult didn't vote.\n";
	cout << "Override method\n";
	Adult::voted(v);  //invoke call clasa Adult
}

void Angajat::angajat_alocat(bool ang) {
	obiect.este_alocat(ang);
	cout << "Angajat alocat";
}

void Angajat::say_hello() {
	cout << "Hello, I am an employee!" << endl;
}

void Angajat::say_goodbye() {
	cout << "The employee says goodbye!" << endl;
}

