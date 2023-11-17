#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab5.5/Lab_05_5.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double z;
			z = St(5.0, 4, 4);
			Assert::AreEqual(z, 625, 0.00000001);
		}
	};
}
