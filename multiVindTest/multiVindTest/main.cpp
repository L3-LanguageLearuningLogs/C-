#include<iostream>
#include<thread>
#include<mutex>

using namespace std;

int NumCount = 0; 
mutex mtx;	//�r������p

//14�s�ڂ�22�s�ڂŔr�����䂵�Ă���B�R�����g������Ǝ��s���邽�тɂ��ς��B
void AddCount1() 
{
	for (int i = 0; 10000 > i; i++) {
		lock_guard<mutex> lock(mtx);	//lock_guard�̃R���X�g���N�^��lock�f�X�g���N�^unlock���Ă���Block���͑��̏ꏊ��NumCount��G��Ȃ�
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