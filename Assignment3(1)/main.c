#include <stdio.h>
#include <string.h>


const char* PickWinner(char array1[], char array2[])
{
	char winner[10];
	if ((array1 == "rock" && array2 == "scissors") || (array1 == "scissors" && array2 == "paper") || (array1 == "paper" && array2 == "rock"))
	{
		strcpy_s(winner, 10, "Player1");
	}
	else if ((array1 == "scissors" && array2 == "rock") || (array1 == "paper" && array2 == "scissors") || (array1 == "rock" && array2 == "paper"))
	{
		strcpy_s(winner, 10, "Player2");
	}
	else if ((array1 == "rock" && array2 == "rock") || (array1 == "paper" && array2 == "paper") || (array1 == "scissors" && array2 == "scissors"))
	{
		strcpy_s(winner, 10, "Draw");
	}
	else if (array1 != "rock" || array2 != "rock" || array1 != "paper" || array2 != "paper" || array1 != "scissors"  || array2 != "scissors")
	{
		strcpy_s(winner, 10, "Invalid");
	}

	return winner;
}


int main()
{
	return 0;
}