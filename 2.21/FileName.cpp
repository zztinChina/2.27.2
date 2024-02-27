	#include<stdio.h>
	#include<assert.h>
	void my_strncpy(char* arr, const char* arr2, int n)
	{
		assert(arr && arr2);
		while (n>0 && (*arr++ = *arr2++))
		{
			n--;
		}
		while(n)
		{
			*arr = '\0';
			arr++;
			n--;
		}
	}
	int main()
	{
		char arr[112] = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
		char arr2[] = "sssdds";
		int n = 0;
		scanf_s("%d", &n);
		my_strncpy(arr, arr2,n);
		printf("%s", arr);
		return 0;
	}