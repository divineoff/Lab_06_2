#include "pch.h"
#include "CppUnitTest.h"
#include "..\Lab_06_2 REC.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest062REC
{
	TEST_CLASS(UnitTest062REC)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			const int size = 5;
			int a[size] = { 5, 0, -10, 3, -2 };
			int expected[size] = { 5, 3, 0, -2, -10 };

			SORT(a, size, 0);
			for (int i = 0; i < size; i++)
			{
				Assert::AreEqual(expected[i], a[i]);
			}
		}
	};
}
