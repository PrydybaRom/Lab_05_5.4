#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_05.4.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest3
{
	TEST_CLASS(UnitTest3)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int K = 12;
			double S = S0(K, 20);
			Assert::AreEqual(S, 2.11, 0.01);
		}
	};
}
