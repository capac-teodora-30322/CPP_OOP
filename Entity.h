#pragma once
#include <iostream>
class Entity
{	public:
	virtual void it_exists() = 0;
	virtual void doesnt_exist() = 0;

	virtual ~Entity() {};
};

