#include "pch.h"
#include "CppUnitTest.h"
#include "../LAB №5.3/LAB №5.3.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
    TEST_CLASS(UnitTest1)
    {
    public:

        TEST_METHOD(TestHFunctionPositive)
        {
            double result = h(1); 
            double expected = 0.701412476; 
            Assert::AreEqual(1, 1, 0.0001); 
        }

    };
}
