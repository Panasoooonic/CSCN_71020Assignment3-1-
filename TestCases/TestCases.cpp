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
			const char* expected_result = "Rock";
			const char* actual_result = PickWinner("Rock", "Paper");
			Assert::AreEqual(expected_result, actual_result);
		}
	};
}
