#include"Rand.h"

int main()
{
	int max;
	int size;

	std::cout << "—”‚ÌÅ‘å’l‚ð“ü—Í‚µ‚Ä‚­‚¾‚³‚¢B" << std::endl;
	std::cin >> max;

	std::cout << "¶¬‚·‚é—”‚ÌŒÂ”‚ð“ü—Í‚µ‚Ä‚­‚¾‚³‚¢B" << std::endl;
	std::cin >> size;

	Rand rand(size, max);
	rand.toString();
}