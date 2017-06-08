#include <iostream>
#include <cstdlib>

using namespace std;

void sort(int [], int);
void swap(int [], int, int);
void search(int [], int, int);

int main()
{
	const int arraySize = 20;
	int key = 0;
	int randArray[arraySize] = {0};

	for (int i = 0; i < arraySize; i++)
		randArray[i] = 1 + (rand() % 100);

	sort(randArray, arraySize);

	for (int i = 0; i < arraySize; i++)
		cout << randArray[i] << endl;

	cout << "What value do you want to search for? ";
	cin >> key;

	search(randArray, arraySize, key);

return 0;
}

void sort(int a[], int arraySize)
{
	for (int i = 0; i < arraySize; i++)
	{
		int smallest = a[i];
		int small_pos = i;
		
		for (int j = i + 1; j < arraySize; j++)
		{
			if (a[j] < smallest)
			{
				smallest = a[j];
				small_pos = j;
			}
		}
	swap(a, i, small_pos);
	}
}

void swap(int a[], int i, int j)
{
	int temp = a[i];
	a[i] = a[j];
	a[j] = temp;
}

void search(int a[], int arraySize, int key)
{
	int flag = 0;
	for (int i = 0; i < arraySize; i++)
	{
		if (a[i] == key)
		{
			cout << "The value " << key << " is at Position " << i + 1 << endl;
			flag = 1;
		}
	}

	if (flag == 0)
		cout << "Value not found.";
}
