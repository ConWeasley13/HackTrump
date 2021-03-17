#pragma once
#include <iostream>
#include <stdlib.h>
#include <cmath>
#include <ctime>

extern int CodeA, CodeB, CodeC, CodeD, CodeE;
extern int GuessA, GuessB, GuessC, GuessD, GuessE;
extern int LevelDifficulty;
extern int MaxDifficulty;

int Sum(int CodeA, int CodeB, int CodeC);
int Sum(int CodeA, int CodeB, int CodeC, int CodeD);
int Sum(int CodeA, int CodeB, int CodeC, int CodeD, int CodeE);
int Product(int CodeA, int CodeB, int CodeC);
int Product(int CodeA, int CodeB, int CodeC, int CodeD);
int Product(int CodeA, int CodeB, int CodeC, int CodeD, int CodeE);

int GuessSum(int GuessA, int GuessB, int GuessC);
int GuessSum(int GuessA, int GuessB, int GuessC, int GuessD);
int GuessSum(int GuessA, int GuessB, int GuessC, int GuessD, int GuessE);
int GuessProduct(int GuessA, int GuessB, int GuessC);
int GuessProduct(int GuessA, int GuessB, int GuessC, int GuessD);
int GuessProduct(int GuessA, int GuessB, int GuessC, int GuessD, int GuessE);


void Introduction();
bool LevelOne(int LevelDifficulty = 1);

//bool PlayGame();