#pragma once
#include<string>
class Car {

private:
	std::string name;

public:
	Car(std::string ArgvName = "–¼–³‚µ") : name(ArgvName) {};
	~Car() {};
	void setName(std::string ArgvName = "–¼–³‚µ");
	std::string getName() { return name; };
	void toString();
};