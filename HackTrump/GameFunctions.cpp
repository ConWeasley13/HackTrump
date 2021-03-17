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


/*
bool PlayerGuess()
{
	
	std::cout << SumAndProduct << std::endl;
	std::cin >> GuessA >> GuessB >> GuessC;
	std::cout << GuessA << GuessB << GuessC << std::endl;
	
	if (GuessSum == CodeSum && GuessProduct == CodeProduct)
	{
		std::cout << "Access Granted." << std::endl;
		LevelDifficulty++;
		return true;
	}

	else
	{
		std::cout << "Ha Ha, you dems will never get my things." << std::endl;
		return false;
	}
}

*/