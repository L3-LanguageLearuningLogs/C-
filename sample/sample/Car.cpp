#include"Car.h"
#include<iostream>


void Car::setName(std::string ArgvName) 
{
	name = ArgvName;
}

void Car::toString()
{
	std::cout << "�Ԃ̖��O��" << this->name << "�ł��B" << std::endl;
}