#include "Hack.h"

//3 types of levels with 4 stages each

/*
bool PlayGame(int Difficulty)
{

	srand(time(NULL));
	int CodeA = rand() % 10;
	int CodeB = rand() % 10;
	int CodeC = rand() % 10;
	int GuessA, GuessB, GuessC;

	int CodeSum = Sum(CodeA, CodeB, CodeC);
	int CodeProduct = Product(CodeA, CodeB, CodeC);

	std::cout << CodeSum << std::endl;
	std::cout << CodeProduct << std::endl;
	std::cin >> GuessA >> GuessB >> GuessC;
	std::cout << GuessA << GuessB << GuessC << std::endl;

	int GuessSum = GuessA + GuessB + GuessC;
	int GuessProduct = GuessA * GuessB * GuessC;

	if (CodeSum == GuessSum && CodeProduct == GuessProduct)
	{
		std::cout << "Access Granted." << std::endl;
		return true;
	}

	else
	{
		std::cout << "Ha Ha, you dems will never get my things." << std::endl;
		return false;
	}
}
*/

int main()
{
	//int LevelDifficulty = 1;
	//int MaxDifficulty = 4;
	Introduction();
	bool bLevelComplete = LevelOne(1);

	
	
	/*
	while (LevelDifficulty <= MaxDifficulty)
	{

	
		bool bLevelComplete = PlayGame(LevelDifficulty);

		std::cin.clear();
		std::cin.ignore();

		if (bLevelComplete)
		{
			LevelDifficulty++;
		}

	}
	*/
	return 0;
}
