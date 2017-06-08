#include "asortSearch.h"

void swap(int *ptr, int current_pos, int switch_pos)
{
	int temp = *(ptr + current_pos);
	*(ptr + current_pos) = *(ptr + switch_pos);
	*(ptr + switch_pos) = temp;
}
