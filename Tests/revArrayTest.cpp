#include "../main.hpp"
/**
 * main - entry point
 * Return: Always 0 (success)
 */
int main(void)
{
	int arr[] = {1,2,3,4,5,6,7};
	int l = 0, i;
	int r = (sizeof(arr) / sizeof(arr[0])) - 1;

	reverseArray(arr, l ,r);
	
	for (i = 0; i <= r; i++)
	{
		cout << arr[i];
		if (i != r)
			cout << ", ";
	}
	cout << endl;
	return (0);
}

