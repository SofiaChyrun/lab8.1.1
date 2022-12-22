#include "pch.h"
#include "CppUnitTest.h"
#include "../ChyrunSofia8.1.1/ChyrunSofia8.1.1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest811
{
	TEST_CLASS(UnitTest811)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int t;
			char str[10]= ".abd.hkv.";
			t = Count(str);
			Assert::AreEqual(t,3);
		}
	};
}
