#include "asortSearch.h"

void sort(int *ptr, int listSize)
{
	for (int i = 0; i < listSize; i++)
	{
		int smallest = *(ptr + i);
		int small_pos = i;			

		for (int j = i + 1; j < listSize; j++)
		{
			if (*(ptr + j) < smallest)
			{
				smallest = *(ptr + j);
				small_pos = j;
			}
		}
	swap(ptr, i, small_pos);
	}
}
