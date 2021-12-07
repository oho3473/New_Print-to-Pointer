#include<iostream>

int main()
{
	int array[2][3]{
		{1,2,3},
		{4,5,6}
	};
	//메모리의 선형구조를 이용 123456..

	int *p = &array[0][0];

	for (int i = 0; i < 2; ++i)
	{
		for (int j = 0; j < 3; ++j)
		{
			std::cout << *p++ << " ";
		}

		std::cout << std::endl;
	}
}