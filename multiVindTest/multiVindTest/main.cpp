#include<iostream>
#include<thread>
#include<mutex>

using namespace std;

int NumCount = 0; 
mutex mtx;	//排他制御用

//14行目と22行目で排他制御している。コメント化すると実行するたびにが変わる。
void AddCount1() 
{
	for (int i = 0; 10000 > i; i++) {
		lock_guard<mutex> lock(mtx);	//lock_guardのコンストラクタでlockデストラクタunlockしている。lock中は他の場所でNumCountを触れない
		NumCount++;
	}
}

void AddCount2()
{
	for (int i = 0; 10000 > i; i++) {
		lock_guard<mutex> lock(mtx);
		NumCount++;
	}
}

int main()
{
	thread th1(AddCount1);
	thread th2(AddCount2);

	th1.join();
	th2.join();

	cout << NumCount << endl;
	
	return 0;
}