#include "pch.h"
#include "CppUnitTest.h"
#include "../Laba 8.1 rec/Laba 8.1 rec.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			char str[] = "dwgfuonfwihf";
			bool t = Find(str, 0);
			Assert::AreEqual(true, t);
		}
	};
}
