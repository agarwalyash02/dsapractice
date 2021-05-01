#include<iostream>
using namespace std;


void reversearr(int arr[],int end)
{
	int start = 0;
	while(start<end)
	{
		int temp = arr[start];
		arr[start] = arr[end];
		arr[end] = temp;
		start++;
		end--;
	}
}

void printarr(int *arr,int n){
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";	
	}
}

int main()
{
	int arr[]={1,6,2,4,7,9,3,1};
	int n = sizeof(arr)/sizeof(arr[0]);
	cout<<endl<<"Original array: ";
	printarr(arr,n);
	cout<<endl<<"Reversed array: ";
	reversearr(arr,n-1);
	printarr(arr,n);
	return 0;

}