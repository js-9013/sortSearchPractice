#include "asortSearch.h"

void search(int *ptr, int size, int key)
{
	int high = size;
	int low = 0;
	int mid = (low + high) / 2;

	while (high >= low)
	{
		if (*(ptr + mid) == key)
		{
			std::cout << "The value " << key << " is at Position " << mid + 1 << std::endl;
			break;
		}
		else if (*(ptr + mid) > key)
		{
			high = mid - 1;
			mid = (low + high) / 2;
		}
		else
		{
			low = mid + 1;
			mid = (low + high) / 2;
		}
	}
}
