#include <iostream>
#include <cstdlib>

using namespace std;

void sort(int *, int);
void swap(int *, int, int);
void search(int *, int, int);

int main()
{
	srand(time(0));
	
	unsigned int listSize = 0;
	unsigned int listMax = 0;
	unsigned int listShift = 0;
	int key = 0;
	
	cout << "What size list do you want? ";
	cin >> listSize;

	cout << "What starting point? ";
	cin >> listShift;

	cout << "What max number? ";
	cin >> listMax;

	int * randPtr = new int[listSize];
	for (int i = 0; i < listSize; i++)
		randPtr[i] = listShift + (rand() % (listMax - listShift));
	
	sort(randPtr, listSize);
	
	for (int i = 0; i < listSize; i++)
		cout << randPtr[i] << " ";

	cout << "What value do you want to search for? ";
	cin >> key;

	search(randPtr, listSize, key);

return 0; 
}

void sort(int *ptr, int size)
{
	for (int i = 0; i < size; i++)
	{
		int smallest = ptr[i];
		int small_pos = i;
		for (int j = i + 1; j < size; j++)
		{
			if (ptr[j] < smallest)
			{
				smallest = ptr[j];
				small_pos = j;
			}
		}
	swap(ptr, i, small_pos);
	}
}

void swap(int *ptr, int current_pos, int new_pos)
{
	int temp = ptr[current_pos];
	ptr[current_pos] = ptr[new_pos];
	ptr[new_pos] = temp;
}

void search(int *ptr, int size, int key)
{
	int high = size;
	int low = 0;
	int mid = (low + high) / 2;

	while (high > low)
	{
		if (ptr[mid] == key)
		{
			cout << "The value " << key << "is at Position " << mid + 1;
			break;
		}
		else if (ptr[mid] < key)
		{
			low = mid + 1;
			mid = (low + high) / 2;
		}
		else
		{
			high = mid - 1;
			mid = (low + high) / 2;
		}
	}
}
