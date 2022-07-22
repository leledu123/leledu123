
#include <ctime>
#include <iostream>

int main()
{
	std::srand(time(nullptr));

	int resultats = std::rand() % 100;
	int max_try = 0;

	std::cout <<  " Combien d'essaie veut tu : " << std::endl;
	std::cin >> max_try;
	std::cin.ignore();
	

	for (int i = 0;i < max_try; ++i)
	{

		std::cout << "Entre un chiffre entre 1 - 100" << std::endl;

		int nombre = 0;
		std::cin >> nombre;
		std::cin.ignore();
		
		if (nombre < resultats)
		{
			std::cout << "C'est plus "   << std::endl;
			continue;
		}
		else if (nombre > resultats)
		{
			std::cout << "C'est moins"  << std::endl;
			continue;
		}
		else if (nombre == resultats)
		{
			std::cout << "Tu as gagner" << std::endl;
			break;
		}
		else if (i == max_try - 1)
		{
			std::cout << "Perdu" << std::endl;
			break;
		}
		
	}
	std::cin.ignore();
	return 0;
}