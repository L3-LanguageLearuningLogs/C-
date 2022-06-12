#include"Rand.h"
#include<random>

Rand::Rand(int sizenum, int maxnum) {
	Maxnum = maxnum;
	Sizenum = sizenum;
	vec.reserve(Sizenum);

	RandMax();
}


void Rand::RandMax() {
	int i;
	for (i = 0; i < Sizenum; i++) {
		vec.push_back(rand() % Maxnum + 1);
	}
}


void Rand::setMax(int maxnum) {
	Maxnum = maxnum;
}

void Rand::toString() {
	int i;
	for (i = 0; i < Sizenum; i++) {
		cout << i + 1 << "ŒÂ–Ú‚Ì—”F" << vec[i] << endl;
	}
}