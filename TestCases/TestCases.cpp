#include "pch.h"
#include "CppUnitTest.h"

extern "C" const char* PickWinner(char Array1[], char Array2[]);

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TestCases
{
	TEST_CLASS(TestCases)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			const char* expected_result = "Player1";
			const char* actual_result = PickWinner("rock", "scissors");
			Assert::AreSame(expected_result, actual_result);
		}
	};
}
