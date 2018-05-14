#include <iostream>
#include <vector>
#include <string>
#include <array>
#include <memory>
#include "Stack.h"
#include <initializer_list>
#include "Quene.h"
//template <class ... T>
//bool isInRadius(T ... & points)
//{
//	int r = 5;
//	for (
//		auto && point : std::initializer_list<Example>({ points... })
//		)
//	{
//		if (
//			point.x * point.x +
//			point.y * point.y <= r * r
//			)
//		{
//			std::cout <<
//				point.x << ' ' << point.y << std::endl;
//			return true;
//		}
//	}
//	return false;
//}
void sample()
{
	//std::array<std::array<int, 5>, 5> a;
	/*std::cout << isInRadius(
	Example{ 7, 7 }, Example{ 9, 9 },
	Example{ 1, 2 }, Example{ 2, 3 }
	);
	std::vector<int> x;
	print(1, '2', "vfndk", 4, 2.4, 100L);*/
}
//template <class T1, class ... T2>
//void print(T1 t1, T2 ... t2)
//{
//	std::cout << t1 << std::endl;
//	print(t2...);
//}
//void print() {}

void main()
{
	Stack <int> a(std::initializer_list<int> {10, 21,1});
	//a.push(6);
	//a.pop();
	//a.peek();
	/*for (int i = 0; i < a.count(); i++)
	{
		std::cout << a.data[i] << std::endl;
	}
	std::cout << a.count();*/

	Quene <int> b(std::initializer_list<int> {5,6,1});
	std::cout<<b[2];
	//b.enquene(9);
	//b.dequene();
	//b.dequene();
	//std::cout <<b.first_element;
	/*for (int i = 0; i < b.count(); i++)
	{
		std::cout << b.data[i] << std::endl;
	}*/
	system("pause");
}