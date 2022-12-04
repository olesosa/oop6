#include<iostream>
#include <algorithm>

using namespace std;

template<typename T>
int Double(T a)
{
	return a*2;
}

template <class T, int n>
class Sort
{
private:

	T arr;
	int n;

	void print()
	{
		for (int i = 0; i < 10; i++)
		{
			std::cout << arr[i] << ' ';
		}

	}

public:

	Sort(T arr, int n)
	{ 
		this->arr = arr;
		this->n = n;

	}

	void SortArray()
	{
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n - 1; j++)
			{
				if (arr[j] > arr[j + 1])
				{
					std::swap(arr[j], arr[j + 1]);
				}	
			}	
		}	
		print();
	}
};

int main()
{
	cout << Double(2);
	cout << endl;

	const int n = 10;
	int a[n] = { 5, 3, 7, 6, 1, 2, 8, 9, 4, 0 };

	Sort<int*, n> A(a, n);
	A.SortArray();

	system("pause");
	return 0;
}