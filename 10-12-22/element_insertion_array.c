// C Program to Insert an element at a specific position in an Array

#include <stdio.h>

int main()
{
	int arr[10] = { 12,13,14,15,16,17,18,19,20,21 };
	int i, x, pos, size= 10;
	// print the original array
	for (i = 0; i < size; i++)
		printf("%d ", arr[i]);
	printf("\n");
   // element to be inserted
	x = 50;
	pos = 5;	
	size++;
// shift elements forward
	for (i = size- 1; i >= pos; i--)
		arr[i] = arr[i - 1];

	// insert x at pos
	arr[pos - 1] = x;

	for (i = 0; i < size; i++)
		printf("%d ", arr[i]);
	printf("\n");

	return 0;
}
