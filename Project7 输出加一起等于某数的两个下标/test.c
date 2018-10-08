#include<stdio.h>
int *twosum(int *nums, int numsSize, int target)
{
	int i = 0;
	int j = numsSize - 1;
	int arr[2] = { 0 };
	while (i < numsSize-1)
	{
		j = numsSize - 1;
		while (i < j)
		{
			if (nums[i] + nums[j] == target)
			{
				arr[0] = i;
				arr[1] = j;
				return (int*)arr;
			}
			j--;
		}
		i++;
	}
	return (int*)arr;
}
int main()
{
	int str[4] = {5,7,2,50};
	
	int len = sizeof(str)/sizeof(str[0]);
	int *arr = twosum(str, len, 9);

}