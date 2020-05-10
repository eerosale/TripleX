// Triplex.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include<string>
#include <iostream>
#include <ctime>
using namespace std;
//What the above line said.


void PrintIntroduction(int Difficulty) {

	cout << "                                  ..',;;::;;,'...                       \n";
	cout << "                              .l0XNWMMMMMMMMWWNXKOxl'                     \n";
	cout << "                      .'lO0l.   'oKMMMMMMMMMMMMMMMMM0.   .                \n";
	cout << "                   .;xKWMMMMXx,   .:ONMMMMMMMMMMMMMMK,  'OOl.              \n";
	cout << "                 .l0WMMMMMMMMMW0c.   'oXMMMMMMMMMMMMX:  .OWMXx;           \n";
	cout << "               'xNMMMMMMMMMMMMMMMXx,   .:kNMMMMMMMMMNc  .xWMMMW0:          \n";
	cout << "             .oXMMMMMMMMMMMMMMMMMMMWO:.   'oXMMMMMMMWo.  lNMMMMMWO,         \n";
	cout << "            :KMMMMMMMMMMMMMMMMMMWWWNXKOl.   .:kNMMMMWx.  :NMMMMMMMNx.       \n";
	cout << "          .oNMMMMWNXKK0Okxdocc:;,'.....        .dXWMWO.  ;XMMMMMMMMWO'      \n";
	cout << "          .;;,''....                             .:ONK'  '0MMMMMMMMMMK;       \n";
	cout << "                ....',;:cl;.                        ,l'  .OWMMMMMMMMMWO.       \n";
	cout << "        cxOOKXXNNNNWWWWWXl.                              .xWMMMMMMMMXo.        \n";
	cout << "       ;NMMMMMMMMMMMMMWk'                                .oWMMMMMMWk'   .      \n";
	cout << "      .xWMMMMMMMMMMMWO,                                   cNMMMMWO,   'kK;     \n";
	cout << "      '0MMMMMMMMMMMXc.                                    :XMMMXc.  .oXMNl     \n";
	cout << "      :NMMMMMMMMMKo.                                      ,KWXo.  .lXMMMWx.     \n";
	cout << "      lNMMMMMMMNx.                                        'Od.   :0WMMMMWO.      \n";
	cout << "      lNMMMMMWO,   ,kl                                     .   'OWMMMMMMWO.      \n";
	cout << "      cNMMMW0:   .dNWx.                                      .dXMMMMMMMMWx.      \n";
	cout << "      ,KMWKl.  .oXMMWk.                                    .oXMMMMMMMMMMWo       \n";
	cout << "      .xXd.   :0WMMMM0'                                   :0WMMMMMMMMMMMX;       \n";
	cout << "       ..   ;OWMMMMMMX,                                 ;0WMMMMMMMMMMMMWx.       \n";
	cout << "          'xWMMMMMMMMN:                               'xWMMMMMMWWWWNNXX0'       \n";
	cout << "         :XMMMMMMMMMMNl   ;:.                        ;xxxdolc:;;''....           \n";
	cout << "         .kWMMMMMMMMMWd.  lNKo'                                  .....           \n";
	cout << "          .xWMMMMMMMMWk.  :XMMWO;.              ....',;:clodxkO0KXXN0;          \n";
	cout << "           .lXMMMMMMMMK'  ,KMMMMW0o'    .cxO0KKXXNNNWWMMMMMMMMMMMMWO'            \n";
	cout << "             'xNMMMMMMN;  '0MMMMMMMNk;.   ,dXMMMMMMMMMMMMMMMMMMMWKc              \n";
	cout << "               ;0WMMMMN:  .kWMMMMMMMMWKo.   .l0WMMMMMMMMMMMMMMMXl.               \n";
	cout << "                 ,xXMMWo  .xWMMMMMMMMMMMNk:.   ,xXMMMMMMMMMMW0c.               \n";
	cout << "                   .lOXx   lWMMMMMMMMMMMMMWKo.   .l0WMMMMWKx,                    \n";
	cout << "                      ..   cNMMMMMMMMMMMMMMMMNk;.   ;xKOl'.                      \n";
	cout << "                           .ok0XNWWMMMMMMMMMMMWNk:                              \n";
	cout << "                               ..',;cclllllc:;'..                             \n";

	//beginning of the game
	std::cout << "You are standing in front of a level " << Difficulty;
	std::cout << " secure server room... \nYou need to enter the correct 3 numbers to open it...\n";

}


bool PlayGame(int Difficulty)
{

	PrintIntroduction(Difficulty);




	//initializes 3 ints
	const int CodeA = rand() % Difficulty + 1;
	const int CodeB = rand() % Difficulty + 1;
	const int CodeC = rand() % Difficulty + 1;


	//Hints

	const int CodeSum = CodeA + CodeB + CodeC;
	const int CodeProduct = CodeA * CodeB * CodeC;


	std::cout << "The codes add up to: " << CodeSum << std::endl;
	std::cout << "The product of the codes are: " << CodeProduct << std::endl;


	//User input 
	int GuessA, GuessB, GuessC;
	std::cout << "Enter your guess: " << std::endl;
	std::cin >> GuessA >> GuessB >> GuessC;


	int GuessSum = GuessA + GuessB + GuessC;
	int GuessProduct = GuessA * GuessB * GuessC;

	if (GuessSum == CodeSum && GuessProduct == CodeProduct)
	{
		std::cout << "you win!\n";
		return true;
	}
	else
	{
		std::cout << "you lose :(\n";
		return false;
	}

}

int main()
{

	srand(time(NULL));

	int LevelDifficulty = 1;
	const int MaxLevel = 10;

	while (LevelDifficulty <= MaxLevel) {
		bool bLevelComplete = PlayGame(LevelDifficulty);

		std::cin.clear();
		std::cin.ignore();

		if (bLevelComplete)
		{
			std::cout << "Excellent work Agent, keep going! /n";
			//increase the level difficulty
			++LevelDifficulty;

		}
	}
	std::cout << "Great work Secret Agent. You received all the files. /n";
	return 0;
}

