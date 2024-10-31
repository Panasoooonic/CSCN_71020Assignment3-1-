#include "pch.h"
#include "CppUnitTest.h"

extern "C" const char* PickWinner(char Array1[], char Array2[]);

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TestCases
{
	TEST_CLASS(TestCases)
	{
	public:
		
		TEST_METHOD(Player1_Winning_Test)
		{
			const char* expected_result = "Player1";
			const char* actual_result = PickWinner("rock", "scissors");
			Assert::AreSame(expected_result, actual_result);
		}
		TEST_METHOD(Player2_Wining_Test)
		{
			const char* expected_result = "Player2";
			const char* actual_result = PickWinner("scissors", "paper");
			Assert::AreSame(expected_result, actual_result);
		}
		TEST_METHOD(Draw_Test)
		{
			const char* expected_result = "Draw";
			const char* actual_result = PickWinner("paper", "paper");
			Assert::AreSame(expected_result, actual_result);
		}
		TEST_METHOD(Invalid_Test)
		{
			const char* expected_result = "Invalid";
			const char* actual_result = PickWinner("steve", "paper");
			Assert::AreSame(expected_result, actual_result);
		}
		TEST_METHOD(Invalid_Test2)
		{
			const char* expected_result = "Invalid";
			const char* actual_result = PickWinner("ROCK", "paper");
			Assert::AreSame(expected_result, actual_result);
		}
	};
}
