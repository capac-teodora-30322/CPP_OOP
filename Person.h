#pragma once
#include <conio.h>
#include <iostream>
#include <string>
#include "Cnp.h"
#include "Entity.h"
using namespace std;

class Person : public Entity {
	private:
		string race;
		int iq;
		float height;
		float weight;
		int shoe_size; 
	public:
		string first_name;
		int age;
	protected:
		char gender;
		string last_name;
		
	public:
		void setRace(string Race);
		string getRace();
		void setIq(int IQ);
		int getIq();
		void setHeight(float Height);
		float getHeight();
		void setWeight(float Weight);
		float getWeight();
		void setShoe_size(int Shoe_size);
		int getShoe_size();

		void say_hello();
		virtual void say_goodbye();
		virtual void it_exists() override;
		virtual void doesnt_exist() override;
	protected:
		Cnp obiect; //obiect de tipul clasei E
	public:
		virtual ~Person() {};
};

class Main {
	public:
		int main(); 
};