#include "pch.h"
#include "CppUnitTest.h"
#include "../lab_6.3(2)/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace lab622ut
{
	TEST_CLASS(lab622ut)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int arr[] = { 1, 2, 3, 4, 5 };
			int size = 5;
			int result = sumOfSquares(arr, size, 0);
			Assert::AreEqual(55, result);
		}
	};
}
