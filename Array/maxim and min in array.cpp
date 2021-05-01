#include<iostream>
using namespace std;

struct Pair{
	int min;
	int max;
};

struct Pair find_min_max(int *arr, int n)
{
	struct Pair val;
	if(n==1)
	{
		val.max = val.min = arr[0];
		return val;
	}
	if(arr[0]>arr[1])
	{
		val.max = arr[0];
		val.min = arr[1];
	}
	else{
		val.min = arr[0];
		val.max = arr[1];
	}
	for(int i=2;i<n;i++)
	{
		if(arr[i]<val.min)
		{
			val.min = arr[i];
		}
		else if(arr[i]>val.max)
		{
			val.max = arr[i];
		}
	}
	return val;
}

int main()
{
	int arr[] = { 1000, 11, 445, 1, 330, 3000 };
    int n = sizeof(arr)/sizeof(arr[0]);
    struct Pair value = find_min_max(arr,n);
    cout<<"Max = "<<value.max<<" | Min = "<<value.min;
    return 0;

}