
#include<stdio.h>
#include<Windows.h>
int main()
{
	int nums[] = { 2, 7, 11, 15 };
	int target;
	scanf("%d",&target);
	int n = sizeof(nums) / sizeof(nums[0]);
	int i = 0;
	for (i = 0; i<n; i++)
	{
 
		if (nums[i] < target)
		{
			int temp = nums[i];
 
 
			for (int j = i+1; j < n; j++)
			{
				if (temp + nums[j] == target)
					printf("[%d %d]\n", i, j);
			}
		}
	}
	
	system("pause");
	return 0;
}
