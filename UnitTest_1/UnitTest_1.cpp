#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_2_2/point.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest)
	{
	public:
		
		TEST_METHOD(CreateEmptyPoint)
		{
			Point p;
			float x, y;
			std::tie(x, y) = p.get_point();
			Assert::AreEqual(y, .0f);
			Assert::AreEqual(x, .0f);
		}


		TEST_METHOD(CreatePoint)
		{
			Point p(10, -10);
			float x, y;
			std::tie(x, y) = p.get_point();
			Assert::AreEqual(y, -10.0f);
			Assert::AreEqual(x, 10.0f);
		}


		TEST_METHOD(ShiftX)
		{
			Point p;
			float x, y;
			p.shift_x(500);
			std::tie(x, y) = p.get_point();
			Assert::AreEqual(x, 500.0f);
			Assert::AreEqual(y, .0f);
		}


		TEST_METHOD(ShiftY)
		{
			Point p;
			float x, y;
			p.shift_y(500);
			std::tie(x, y) = p.get_point();
			Assert::AreEqual(y, 500.0f);
			Assert::AreEqual(x, .0f);
		}


		TEST_METHOD(DistanceBetweenPoints)
		{
			Point p1;
			Point p2(3, 4);
			Assert::AreEqual(p1.distance_to(p2), 5.0f);
		}


		TEST_METHOD(SetPoint)
		{
			Point p;
			float x, y;
			std::tie(x, y) = p.get_point();
			Assert::AreEqual(x, .0f);
			Assert::AreEqual(y, .0f);
			
			p.set_point(1.5, -52.3);
			std::tie(x, y) = p.get_point();
			Assert::AreEqual(x, 1.5f);
			Assert::AreEqual(y, -52.3f);
		}


		TEST_METHOD(Add)
		{
			Point p1(3, 4);
			Point p2(12, 9);
			p1.add(p2);

			float x, y;
			std::tie(x, y) = p1.get_point();
			Assert::AreEqual(x, 15.0f);
			Assert::AreEqual(y, 13.0f);
		}


		TEST_METHOD(PointsSum)
		{
			Point p1(3, 4);
			Point p2(12, 9);
			Point p3 = add(p1, p2);

			float x, y;
			std::tie(x, y) = p3.get_point();
			Assert::AreEqual(x, 15.0f);
			Assert::AreEqual(y, 13.0f);
		}
	};
}
