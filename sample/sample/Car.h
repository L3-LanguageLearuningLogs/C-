#pragma once
#include<string>
class Car {

private:
	std::string name;

public:
	Car(std::string ArgvName = "������") : name(ArgvName) {};
	~Car() {};
	void setName(std::string ArgvName = "������");
	std::string getName() { return name; };
	void toString();
};