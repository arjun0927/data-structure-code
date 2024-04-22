#include <iostream>
using namespace std;

int main()
{
	int nums[] = {1, 2, 2, 1, 0, 1, 1, 0, 0, 0};
	int lo = 0;
	int size = 10;
	int hi = size - 1;
	int mid = 0;
	while (mid <= hi)
	{
		switch (nums[mid])
		{

		// If the element is 0
		case 0:
			swap(nums[lo++], nums[mid++]);
			break;

		// If the element is 1 .
		case 1:
			mid++;
			break;

		// If the element is 2
		case 2:
			swap(nums[mid], nums[hi--]);
			break;
		}
	}
	for (int i = 0; i < size; i++)
	{
		cout << nums[i] << " ";
	}

	return 0;
}