#include "Hack.h"


void Introduction()
{
	std::cout << "We have gained access to a secret server with all of Trump's secure files. However, it is encrypted.\n";
	std::cout << "Your mission is to hack the server and obtain access to the files. \n";
	std::cout << "The agent who obtained the data was able to find out crucial tips for you, which will be revealed as you progress." << std::endl;

}


int Sum(int CodeA, int CodeB, int CodeC)
{
	int CodeSum = CodeA + CodeB + CodeC;
	return CodeSum;
}

int Sum(int CodeA, int CodeB, int CodeC, int CodeD)
{
	int CodeSum = CodeA + CodeB + CodeC + CodeD;
	return CodeSum;
}

int Sum(int CodeA, int CodeB, int CodeC, int CodeD, int CodeE)
{
	int CodeSum = CodeA + CodeB + CodeC + CodeD + CodeE;
	return CodeSum;
}

int Product(int CodeA, int CodeB, int CodeC)
{
	int CodeProduct = CodeA * CodeB * CodeC;
	return CodeProduct;
}

int Product(int CodeA, int CodeB, int CodeC, int CodeD)
{
	int CodeProduct = CodeA * CodeB * CodeC * CodeD;
	return CodeProduct;
}

int Product(int CodeA, int CodeB, int CodeC, int CodeD, int CodeE)
{
	int CodeProduct = CodeA * CodeB * CodeC * CodeD * CodeE;
	return CodeProduct;
}

int GuessSum(int GuessA, int GuessB, int GuessC)
{
	int GuessSum = GuessA + GuessB + GuessC;
	return GuessSum;
}

int GuessSum(int GuessA, int GuessB, int GuessC, int GuessD)
{
	int GuessSum = GuessA + GuessB + GuessC + GuessD;
	return GuessSum;
}

int GuessSum(int GuessA, int GuessB, int GuessC, int GuessD, int GuessE)
{
	int GuessSum = GuessA + GuessB + GuessC + GuessD + GuessE;
	return GuessSum;
}

int GuessProduct(int GuessA, int GuessB, int GuessC)
{
	int GuessProduct = GuessA * GuessB * GuessC;
	return GuessProduct;
}

int GuessProduct(int GuessA, int GuessB, int GuessC, int GuessD)
{
	int GuessProduct = GuessA * GuessB * GuessC * GuessD;
	return GuessProduct;
}

int GuessProduct(int GuessA, int GuessB, int GuessC, int GuessD, int GuessE)
{
	int GuessProduct = GuessA * GuessB * GuessC * GuessD * GuessE;
	return GuessProduct;
}


void PlayGame()
{
	bool bLevelOneComplete = LevelOne(1);
	if (bLevelOneComplete) {
		bool bLevelTwoComplete = LevelTwo(1);

		if (bLevelOneComplete && bLevelTwoComplete)
		{
			bool bLevelThreeComplete = LevelThree(1);
		}
	}


}


void Success()
{
	std::cout << "\nWell done agent! Thanks to your work, we not only rescued our agent but we have enough evidence to put Trump \n";
	std::cout << "and his entire family behind bars for life.\n";
	std::cout << "Be proud that you served your country and made the world a little better." << std::endl;
}

