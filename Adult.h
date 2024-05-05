#pragma once
#include <conio.h>
#include <iostream>
#include "Person.h"

class Adult : public Person {
	public:
		string statut;
		string nationalitate;
	protected:
		string asigurare;
	public:
		void voted(bool v);
		void Adult_alocat(bool ad);
		void say_hello();
		virtual void say_goodbye();
		virtual void it_exists() override
		{
			cout << "The adult exists." << endl;
		}
		virtual void doesnt_exist() override
		{
			cout << "The adult doesn't exists." << endl;
		}
};

