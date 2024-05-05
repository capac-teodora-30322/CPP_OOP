#pragma once
#include <iostream>
#include <conio.h>
#include "Adult.h"
using namespace std;

class Angajat : public Adult {
	float salariu;
	int ani_vechime;
	string loc_munca;
public:
	void modificare_salariu(float new_salary);
	void voted(bool v);
	void angajat_alocat(bool ang);
	void say_hello();
	virtual void say_goodbye();
	virtual void it_exists() override
	{
		cout << "The employee exists." << endl;
	}
	virtual void doesnt_exist() override
	{
		cout << "The employee exists." << endl;
	}
};

