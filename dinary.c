#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define NO  -1

int binary(int arr[], int num,int sz);

int main()
{ 
	int arr[10] = {1,2,3,4,5,6,7,8,9,0};
	int search = 7;
	int check = 0;
	int sz = sizeof(arr) / sizeof(arr[0])-1;

	
	printf("please input a number :\n");

	check = binary(arr, search,sz);

	if (check == NO)
	{
		printf("it is not exist");
	}
	else
	{
		printf("this number is in the arr[%d]", check);
	}

	
	return 0;
}

int binary(int arr[], int num,int sz)
{
	int left = 0;
	int right = 0;
	int middle = 0;

	right = sz;

	while (left<=right)
	{
		middle = (left + right)/2;

		if (arr[middle] == num)
		{
			return middle;
		}
		else if (arr[middle] > num)
		{
			right = middle - 1;
		}
		else
		{
			left = middle + 1;
		}
	}

	return NO;
}
