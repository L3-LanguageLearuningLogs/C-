#pragma once
#include<vector>

using namespace std;

class Rand {
private:
	int Maxnum; //�������闐���̍ő�
	int Sizenum;//�������闐���̐�
	vector<int> vec;

public:
	Rand(int sizenum, int maxnum);
	~Rand() {};
	void RandMax(); //�����쐬
	void setMax(int maxnum);
	int getMax() { return Maxnum; };
	void toString();
};