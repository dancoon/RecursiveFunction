#include "main.hpp"
/**
 * swap - swap to int
 * @a: first int
 * @b: second int
 * Return: void
 */
void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
/**
 * reverseArray - reverses an array
 * @arr: array
 * @l: first index
 * @r: last index
 * Return: void
 */
void reverseArray(int arr[], int l, int r)
{
	if (r > l)
	{
		swap(&arr[l], &arr[r]);
		reverseArray(arr, l + 1, r - 1);
	}
}

