#include"Rand.h"

int main()
{
	int max;
	int size;

	std::cout << "�����̍ő�l����͂��Ă��������B" << std::endl;
	std::cin >> max;

	std::cout << "�������闐���̌�����͂��Ă��������B" << std::endl;
	std::cin >> size;

	Rand rand(size, max);
	rand.toString();
}