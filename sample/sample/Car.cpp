#include"Car.h"
#include<iostream>


void Car::setName(std::string ArgvName) 
{
	name = ArgvName;
}

void Car::toString()
{
	std::cout << "ŽÔ‚Ì–¼‘O‚Í" << this->name << "‚Å‚·B" << std::endl;
}