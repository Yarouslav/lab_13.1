#include "pch.h"
#include "CppUnitTest.h"
#include "../lab_13.1/var.h"
#include "../lab_13.1/sum.h"
#include "../lab_13.1/dod.h"
#include "../lab_13.1/var.cpp"
#include "../lab_13.1/sum.cpp"
#include "../lab_13.1/dod.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			nsVar::x = 1;
			nsVar::e = 0.00000001;

			nsSum::sum();

			Assert::AreEqual(20.3842, nsVar::s, 0.0001);
		}
	};
}
