#pragma once
#include<vector>

using namespace std;

class Rand {
private:
	int Maxnum; //¶¬‚·‚é—”‚ÌÅ‘å
	int Sizenum;//¶¬‚·‚é—”‚Ì”
	vector<int> vec;

public:
	Rand(int sizenum, int maxnum);
	~Rand() {};
	void RandMax(); //—”ì¬
	void setMax(int maxnum);
	int getMax() { return Maxnum; };
	void toString();
};