#include "stdafx.h"
#include "CppUnitTest.h"
#include "..\DataStructures\Stack.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace DataStructuresTest
{		
	TEST_CLASS(StackTest)
	{
	public:
		
		TEST_METHOD(Stack_TestPush)
		{
			Stack<int> *intStack = new Stack<int>();
			for (int i = 0; i < 100; i++) {
				intStack->Push(i);
				int x = intStack->Pop();
				Assert::AreEqual(i, x);
			}
			delete intStack;
		}

		TEST_METHOD(Stack_TestPushPop)
		{
			Stack<int> *intStack = new Stack<int>();
			for (int i = 0; i < 100; i++) {
				intStack->Push(i);
			}
			for (int i = 99; i >= 0; i--) {
				int x = intStack->Pop();
				Assert::AreEqual(i, x);
			}
			delete intStack;
		}
	};
}