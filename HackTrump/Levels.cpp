#include "Hack.h"


bool LevelOne(int Difficulty)
{
	std::cout << "\n According to our agent, there are 4 stages in this level that will become progressively more challenging.\n";
	std::cout << "Each code sequence you will have to solve is a three digit code between 0 and 9.\n";
	std::cout << "You can determine the code based on the sum and product of the digits.\n\n";

	int CodeA, CodeB, CodeC;
	int GuessA, GuessB, GuessC;
	int MaxDifficulty = 4;
	int GSum;
	int GProduct;
	int CodeSum;
	int CodeProduct;

	while (Difficulty <= MaxDifficulty)
	{
		if (Difficulty == 1)
		{

			CodeA = rand() % (Difficulty + 3);
			CodeB = rand() % (Difficulty + 3);
			CodeC = rand() % (Difficulty + 3);

			CodeSum = Sum(CodeA, CodeB, CodeC);
			CodeProduct = Product(CodeA, CodeB, CodeC);

			std::cout << CodeSum << std::endl;
			std::cout << CodeProduct << std::endl;
			std::cin >> GuessA >> GuessB >> GuessC;
			std::cout << GuessA << GuessB << GuessC << std::endl;
			GSum = GuessSum(GuessA, GuessB, GuessC);
			GProduct = GuessProduct(GuessA, GuessB, GuessC);

			if (GSum == CodeSum && GProduct == CodeProduct)
			{
				std::cout << "Access Granted." << std::endl;
				Difficulty++;
			}

			else
			{
				std::cout << "Ha Ha, you dems will never get my things." << std::endl;
				return false;
			}

		}

		else if (Difficulty == 2)
		{
			CodeA = rand() % (Difficulty + 4);
			CodeB = rand() % (Difficulty + 4);
			CodeC = rand() % (Difficulty + 4);

			CodeSum = Sum(CodeA, CodeB, CodeC);
			CodeProduct = Product(CodeA, CodeB, CodeC);

			std::cout << CodeSum << std::endl;
			std::cout << CodeProduct << std::endl;
			std::cin >> GuessA >> GuessB >> GuessC;
			std::cout << GuessA << GuessB << GuessC << std::endl;
			GSum = GuessSum(GuessA, GuessB, GuessC);
			GProduct = GuessProduct(GuessA, GuessB, GuessC);

			if (GSum == CodeSum && GProduct == CodeProduct)
			{
				std::cout << "Access Granted." << std::endl;
				Difficulty++;
			}

			else
			{
				std::cout << "Ha Ha, you dems will never get my things." << std::endl;
				return false;
			}
		}

		else if (Difficulty == 3)
		{
			CodeA = rand() % (Difficulty + 5);
			CodeB = rand() % (Difficulty + 5);
			CodeC = rand() % (Difficulty + 5);

			CodeSum = Sum(CodeA, CodeB, CodeC);
			CodeProduct = Product(CodeA, CodeB, CodeC);

			std::cout << CodeSum << std::endl;
			std::cout << CodeProduct << std::endl;
			std::cin >> GuessA >> GuessB >> GuessC;
			std::cout << GuessA << GuessB << GuessC << std::endl;
			GSum = GuessSum(GuessA, GuessB, GuessC);
			GProduct = GuessProduct(GuessA, GuessB, GuessC);

			if (GSum == CodeSum && GProduct == CodeProduct)
			{
				std::cout << "Access Granted." << std::endl;
				Difficulty++;
			}

			else
			{
				std::cout << "Ha Ha, you dems will never get my things." << std::endl;
				return false;
			}

		}

		else if (Difficulty == MaxDifficulty)
		{
			CodeA = rand() % (Difficulty + 6);
			CodeB = rand() % (Difficulty + 6);
			CodeC = rand() % (Difficulty + 6);

			CodeSum = Sum(CodeA, CodeB, CodeC);
			CodeProduct = Product(CodeA, CodeB, CodeC);

			std::cout << CodeSum << std::endl;
			std::cout << CodeProduct << std::endl;
			std::cin >> GuessA >> GuessB >> GuessC;
			std::cout << GuessA << GuessB << GuessC << std::endl;
			GSum = GuessSum(GuessA, GuessB, GuessC);
			GProduct = GuessProduct(GuessA, GuessB, GuessC);

			if (GSum == CodeSum && GProduct == CodeProduct)
			{
				std::cout << "Access Granted." << std::endl;
				std::cout << "Congratulations Agent on successfully accessing the files." << std::endl;
				Difficulty++;
			}

			else
			{
				std::cout << "Ha Ha, you dems will never get my things." << std::endl;
				return false;
			}
		}

		else
		{
			std::cout << "Error." << std::endl;
		}


	}
	return true;
}

bool LevelTwo(int Difficulty)
{
	std::cout << "\nExcellent work on deciphering those codes. We've gained access to several files.\n";
	std::cout << "This time, each code sequence you will have to solve is a four digit code between 0 and 9.\n";
	std::cout << "You can still determine the code based on the sum and product of the digits.\n\n";

	int CodeA, CodeB, CodeC, CodeD;
	int GuessA, GuessB, GuessC, GuessD;
	int MaxDifficulty = 4;
	int GSum;
	int GProduct;
	int CodeSum;
	int CodeProduct;

	while (Difficulty <= MaxDifficulty)
	{
		if (Difficulty == 1)
		{

			CodeA = rand() % (Difficulty + 3);
			CodeB = rand() % (Difficulty + 3);
			CodeC = rand() % (Difficulty + 3);
			CodeD = rand() % (Difficulty + 3);

			CodeSum = Sum(CodeA, CodeB, CodeC, CodeD);
			CodeProduct = Product(CodeA, CodeB, CodeC, CodeD);

			std::cout << CodeSum << std::endl;
			std::cout << CodeProduct << std::endl;
			std::cin >> GuessA >> GuessB >> GuessC >> GuessD;
			std::cout << GuessA << GuessB << GuessC << GuessD << std::endl;
			GSum = GuessSum(GuessA, GuessB, GuessC, GuessD);
			GProduct = GuessProduct(GuessA, GuessB, GuessC, GuessD);

			if (GSum == CodeSum && GProduct == CodeProduct)
			{
				std::cout << "Access Granted." << std::endl;
				Difficulty++;
			}

			else
			{
				std::cout << "Ha Ha, you dems will never get my things." << std::endl;
				return false;
			}

		}

		else if (Difficulty == 2)
		{
			CodeA = rand() % (Difficulty + 4);
			CodeB = rand() % (Difficulty + 4);
			CodeC = rand() % (Difficulty + 4);
			CodeD = rand() % (Difficulty + 4);

			CodeSum = Sum(CodeA, CodeB, CodeC, CodeD);
			CodeProduct = Product(CodeA, CodeB, CodeC, CodeD);

			std::cout << CodeSum << std::endl;
			std::cout << CodeProduct << std::endl;
			std::cin >> GuessA >> GuessB >> GuessC >> GuessD;
			std::cout << GuessA << GuessB << GuessC << GuessD << std::endl;
			GSum = GuessSum(GuessA, GuessB, GuessC, GuessD);
			GProduct = GuessProduct(GuessA, GuessB, GuessC, GuessD);

			if (GSum == CodeSum && GProduct == CodeProduct)
			{
				std::cout << "Access Granted." << std::endl;
				Difficulty++;
			}

			else
			{
				std::cout << "Ha Ha, you dems will never get my things." << std::endl;
				return false;
			}
		}

		else if (Difficulty == 3)
		{
			CodeA = rand() % (Difficulty + 5);
			CodeB = rand() % (Difficulty + 5);
			CodeC = rand() % (Difficulty + 5);
			CodeD = rand() % (Difficulty + 5);

			CodeSum = Sum(CodeA, CodeB, CodeC, CodeD);
			CodeProduct = Product(CodeA, CodeB, CodeC, CodeD);

			std::cout << CodeSum << std::endl;
			std::cout << CodeProduct << std::endl;
			std::cin >> GuessA >> GuessB >> GuessC >> GuessD;
			std::cout << GuessA << GuessB << GuessC << GuessD << std::endl;
			GSum = GuessSum(GuessA, GuessB, GuessC, GuessD);
			GProduct = GuessProduct(GuessA, GuessB, GuessC, GuessD);

			if (GSum == CodeSum && GProduct == CodeProduct)
			{
				std::cout << "Access Granted." << std::endl;
				Difficulty++;
			}

			else
			{
				std::cout << "Ha Ha, you dems will never get my things." << std::endl;
				return false;
			}

		}

		else if (Difficulty == MaxDifficulty)
		{
			CodeA = rand() % (Difficulty + 6);
			CodeB = rand() % (Difficulty + 6);
			CodeC = rand() % (Difficulty + 6);
			CodeD = rand() % (Difficulty + 6);

			CodeSum = Sum(CodeA, CodeB, CodeC, CodeD);
			CodeProduct = Product(CodeA, CodeB, CodeC, CodeD);

			std::cout << CodeSum << std::endl;
			std::cout << CodeProduct << std::endl;
			std::cin >> GuessA >> GuessB >> GuessC >> GuessD;
			std::cout << GuessA << GuessB << GuessC << GuessD << std::endl;
			GSum = GuessSum(GuessA, GuessB, GuessC, GuessD);
			GProduct = GuessProduct(GuessA, GuessB, GuessC, GuessD);

			if (GSum == CodeSum && GProduct == CodeProduct)
			{
				std::cout << "Access Granted." << std::endl;
				std::cout << "Congratulations Agent on successfully accessing the files." << std::endl;
				Difficulty++;
			}

			else
			{
				std::cout << "Ha Ha, you dems will never get my things." << std::endl;
				return false;
			}
		}

		else
		{
			std::cout << "Error." << std::endl;
		}


	}
	return true;
}


bool LevelThree(int Difficulty)
{
	std::cout << "\nExcellent work; however, our agent was compromised! The Trump team is proposing an exchange \n";
	std::cout << "of the remaining data in return for our agent.\n";
	std::cout << "His location may be in the last of these files. Hurry and solve this so we can send in a team to rescue him.\n";
	std::cout << "His last message before he was captured was \" 5 digits, sum and product same as before.\n\n";

	int CodeA, CodeB, CodeC, CodeD, CodeE;
	int GuessA, GuessB, GuessC, GuessD, GuessE;
	int MaxDifficulty = 4;
	int GSum;
	int GProduct;
	int CodeSum;
	int CodeProduct;

	while (Difficulty <= MaxDifficulty)
	{
		if (Difficulty == 1)
		{

			CodeA = rand() % (Difficulty + 3);
			CodeB = rand() % (Difficulty + 3);
			CodeC = rand() % (Difficulty + 3);
			CodeD = rand() % (Difficulty + 3);
			CodeE = rand() % (Difficulty + 3);

			CodeSum = Sum(CodeA, CodeB, CodeC, CodeD, CodeE);
			CodeProduct = Product(CodeA, CodeB, CodeC, CodeD, CodeE);

			std::cout << CodeSum << std::endl;
			std::cout << CodeProduct << std::endl;
			std::cin >> GuessA >> GuessB >> GuessC >> GuessD >> GuessE;
			std::cout << GuessA << GuessB << GuessC << GuessD << GuessE << std::endl;
			GSum = GuessSum(GuessA, GuessB, GuessC, GuessD, GuessE);
			GProduct = GuessProduct(GuessA, GuessB, GuessC, GuessD, GuessE);

			if (GSum == CodeSum && GProduct == CodeProduct)
			{
				std::cout << "Access Granted." << std::endl;
				Difficulty++;
			}

			else
			{
				std::cout << "Ha Ha, say goodbye to your agent." << std::endl;
				return false;
			}

		}

		else if (Difficulty == 2)
		{
			CodeA = rand() % (Difficulty + 4);
			CodeB = rand() % (Difficulty + 4);
			CodeC = rand() % (Difficulty + 4);
			CodeD = rand() % (Difficulty + 4);
			CodeE = rand() % (Difficulty + 4);

			CodeSum = Sum(CodeA, CodeB, CodeC, CodeD, CodeE);
			CodeProduct = Product(CodeA, CodeB, CodeC, CodeD, CodeE);

			std::cout << CodeSum << std::endl;
			std::cout << CodeProduct << std::endl;
			std::cin >> GuessA >> GuessB >> GuessC >> GuessD >> GuessE;
			std::cout << GuessA << GuessB << GuessC << GuessD << GuessE << std::endl;
			GSum = GuessSum(GuessA, GuessB, GuessC, GuessD, GuessE);
			GProduct = GuessProduct(GuessA, GuessB, GuessC, GuessD, GuessE);

			if (GSum == CodeSum && GProduct == CodeProduct)
			{
				std::cout << "Access Granted." << std::endl;
				Difficulty++;
			}

			else
			{
				std::cout << "Ha Ha, say goodbye to your agent." << std::endl;
				return false;
			}
		}

		else if (Difficulty == 3)
		{
			CodeA = rand() % (Difficulty + 5);
			CodeB = rand() % (Difficulty + 5);
			CodeC = rand() % (Difficulty + 5);
			CodeD = rand() % (Difficulty + 5);
			CodeE = rand() % (Difficulty + 5);

			CodeSum = Sum(CodeA, CodeB, CodeC, CodeD, CodeE);
			CodeProduct = Product(CodeA, CodeB, CodeC, CodeD, CodeE);

			std::cout << CodeSum << std::endl;
			std::cout << CodeProduct << std::endl;
			std::cin >> GuessA >> GuessB >> GuessC >> GuessD >> GuessE;
			std::cout << GuessA << GuessB << GuessC << GuessD << GuessE << std::endl;
			GSum = GuessSum(GuessA, GuessB, GuessC, GuessD, GuessE);
			GProduct = GuessProduct(GuessA, GuessB, GuessC, GuessD, GuessE);

			if (GSum == CodeSum && GProduct == CodeProduct)
			{
				std::cout << "Access Granted." << std::endl;
				Difficulty++;
			}

			else
			{
				std::cout << "Ha Ha, say goodbye to your agent." << std::endl;
				return false;
			}

		}

		else if (Difficulty == MaxDifficulty)
		{
			CodeA = rand() % (Difficulty + 6);
			CodeB = rand() % (Difficulty + 6);
			CodeC = rand() % (Difficulty + 6);
			CodeD = rand() % (Difficulty + 6);
			CodeE = rand() % (Difficulty + 6);

			CodeSum = Sum(CodeA, CodeB, CodeC, CodeD, CodeE);
			CodeProduct = Product(CodeA, CodeB, CodeC, CodeD, CodeE);

			std::cout << CodeSum << std::endl;
			std::cout << CodeProduct << std::endl;
			std::cin >> GuessA >> GuessB >> GuessC >> GuessD >> GuessE;
			std::cout << GuessA << GuessB << GuessC << GuessD << GuessE << std::endl;
			GSum = GuessSum(GuessA, GuessB, GuessC, GuessD, GuessE);
			GProduct = GuessProduct(GuessA, GuessB, GuessC, GuessD, GuessE);

			if (GSum == CodeSum && GProduct == CodeProduct)
			{
				std::cout << "Access Granted." << std::endl;
				std::cout << "Congratulations Agent on successfully accessing the files." << std::endl;
				Success();
				Difficulty++;
			}

			else
			{
				std::cout << "Ha Ha, say goodbye to your agent." << std::endl;
				return false;
			}
		}

		else
		{
			std::cout << "Error." << std::endl;
		}


	}
	return true;
}

