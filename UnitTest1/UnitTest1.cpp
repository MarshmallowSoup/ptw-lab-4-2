#include "pch.h"
#include "CppUnitTest.h"
#include "../lab4.2/lab4.2.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:		
		TEST_METHOD(TestMethod1)
		{
			string s = "Lorem ipsum dolor sit amet, consectetur adipiscing elit";
			string result = findLastAWord(s);
			string expected = "adipiscing";
			Assert::AreEqual(expected, result);
		}
	};
}
