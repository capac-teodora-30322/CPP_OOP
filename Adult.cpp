#include "Adult.h"
#include "Cnp.h"
#include "Person.h"
using namespace std;

void Adult::voted(bool v) {
	if (v == true) cout << "This adult voted.\n";
	else cout << "This adult didn't vote.\n";
}

void Adult::Adult_alocat(bool ad) {
	obiect.este_alocat(ad);
	cout << "Adult alocat";
}

void Adult::say_hello() {
	cout << "Hello, I am an adult!" << endl;
}

void Adult::say_goodbye() {
	cout << "The adult says goodbye." << endl;
}

