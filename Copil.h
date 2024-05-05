#pragma once
#include <iostream>
#include <conio.h>
#include "Person.h"
using namespace std;
class Copil : public Person {
	public:
		string studii;
		int nr_siblings;
	void has_anID(bool id);
	void Copil_alocat(bool co);
	void say_hello();
	virtual void say_goodbye();
	virtual void it_exists() override
	{
		cout << "The child exists." << endl;
	}
	virtual void doesnt_exist() override
	{
		cout << "The child doesn't exist." << endl;
	}
};

