#include <iostream>
#include <cstdlib>
#include "asortSearch.h"

using namespace std;

int main()
{
        int listSize = 0;;
	unsigned int randShift = 0;
	unsigned int listRange = 0;
	int key = 0;

	cout << "Please enter size of the random list: ";
	cin >> listSize;

	cout << "Please enter the starting position of the list: ";
	cin >> randShift;

	cout << "Please enter maximum value of list: ";
	cin >> listRange;

	int *randPtr = new int[listSize];
	
	for (int i = 0; i < listSize; i++)
		randPtr[i] = randShift + (rand() % (listRange - randShift));

	sort(randPtr, listSize);
	
	cout << "Your list is: " << endl;
	
	for (int i = 0; i < listSize; i++)
		cout << *(randPtr + i) << " ";

	cout << endl;

	cout << "What value are you searching for? ";
	cin >> key;

	search(randPtr, listSize, key);	

return 0;	
}
