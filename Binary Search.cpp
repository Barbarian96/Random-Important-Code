#include <bits/stdc++.h>
#define EPS 1e-9
using namespace std;

//Upper Bound and Lower Bound
//CF EDU Binary Search Step 2

int binary(int arr[],int x,int n)
{
	int low = 0, high = n - 1;
	while (low <= high)
	{
		int mid = low + ((high - low) / 2);
		
		if(arr[mid] == x)
			return mid;
		else if (arr[mid] > x) 
			high = mid - 1;
		else
			low = mid + 1;
	}
	return -1;
}



int first(int arr[], int x, int n)
{
	int low = 0, high = n - 1, res = -1;
	while (low <= high)
	{
		int mid = low + ((high - low) / 2);
		
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
		int mid = low + ((high - low) / 2);
		
		if (arr[mid] <= x)
			res=mid,low = mid + 1;
		else
			high = mid - 1;
	}
	return res;
}



//Find the last number M that M*M <= x.
int findsqrt(int x)
{
	int low = 0,high =  x,ans=-1;
	while(low<=high)
	{
		int mid = low + (high - low)/2;

		if((long long)mid*mid< x)ans=mid,low=mid+1;
		else high=mid-1;
	}
	return ans;

}

//Find Minimum in a rotated sorted array

int findmin(int arr[],int n)
{
	int low=0,high=n-1,ans=-1;

	while(low<=high)
	{
		int mid = low + (high - low)/2;

		if(arr[mid]<=arr[n-1]) // look for something even smaller on the left
		{
			ans=arr[mid];
			high=mid-1;
		}
		else
		{
			low=mid+1;
		}
	}

	return ans;

}

//Find Value in Rotated Sorted Array




//Find Pick



int main()
{
	int arr[] = { 1, 2, 2, 2, 2, 3, 4, 7, 8, 8 };
	int n = sizeof(arr) / sizeof(int);

	int x = 8;
	cout <<"First Occurrence = " << first(arr, x, n);
	cout <<"ast Occurrence = "<< last(arr, x, n);

	return 0;
}
