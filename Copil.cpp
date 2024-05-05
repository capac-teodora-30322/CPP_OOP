#include "Copil.h"
using namespace std;

void Copil::has_anID(bool id) {
	if (id == true) cout << "Copilul are buletin.\n";
	else cout << "Copilul nu are buletin.\n";
}

void Copil::Copil_alocat(bool co) {
	obiect.este_alocat(co);
	cout << "Copil alocat";
}

void Copil::say_hello() {
	cout << "Hello, I am a child!" << endl;
}

void Copil::say_goodbye() {
	cout << "The child says goodbye." << endl;
}