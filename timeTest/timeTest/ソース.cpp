#include<iostream>
#include<chrono>
#include<thread>
#include<windows.h>

using namespace std;


bool end_flg = false;
bool time_flg = false;
void DispMessage() 
{
	int selectNum;
	while (end_flg == false) {
		system("cls");
		cout << "数字を入力してください" << endl;
		cout << "0 : 終了" << endl;
		cout << "1 : 時計表示" << endl;
		cout << "2 : 時計非表示" << endl;
		cin >> selectNum;

		switch (selectNum){
		case 0:
			end_flg = true;
			break;

		case 1:
			time_flg = true;
			break;

		case 2:
			time_flg = false;

		default:
			break;
		}
	}
	
}

void TimeUpdate()
{
	while (end_flg == false) {
		
		chrono::system_clock::time_point now;
		now = chrono::system_clock::now();

		time_t time_now = std::chrono::system_clock::to_time_t(now);
		if (time_flg) {
			cout << "\033[5;1H" << "日本の時刻：" << ctime(&time_now);
		}
		Sleep(1 * 1000);

		
	}
}

int main()
{
	thread th1(DispMessage);
	thread th2(TimeUpdate);


	th1.join();
	th2.join();


	return 0;
}
