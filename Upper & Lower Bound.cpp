#include <bits/stdc++.h>
using namespace std;

//Upper Bound and Lower Bound
//CF EDU Binary Search Step 2

int first(int arr[], int x, int n)
{
	int low = 0, high = n - 1, res = -1;
	while (low <= high)
	{
		int mid = (low + high) / 2;
		
		if (arr[mid] >= x)
			high = mid - 1,res=mid;
		else
			low = mid + 1;
	}
	return res;
}


int last(int arr[], int x, int n)
{
	int low = 0, high = n - 1, res = -1;
	while (low <= high)
	{
		int mid = (low + high) / 2;
		
		if (arr[mid] <= x)
			res=mid,low = mid + 1;
		else
			high = mid - 1;
	}
	return res;
}

int main()
{
	int arr[] = { 1, 2, 2, 2, 2, 3, 4, 7, 8, 8 };
	int n = sizeof(arr) / sizeof(int);

	int x = 8;
	cout <<"First Occurrence = " << first(arr, x, n);
	cout <<"ast Occurrence = "<< last(arr, x, n);

	return 0;
}
