#pragma once
#include<string>
class Car {

private:
	std::string name;

public:
	Car(std::string ArgvName = "名無し") : name(ArgvName) {};
	~Car() {};
	void setName(std::string ArgvName = "名無し");
	std::string getName() { return name; };
	void toString();
};