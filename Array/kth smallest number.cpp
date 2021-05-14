#include <iostream>
using namespace std;
#include <algorithm>

int kthSmallest(int arr[], int n, int k)
{
    sort(arr, arr + n);
    return arr[k - 1];
}
 
int main()
{
    int arr[] = { 5,98,9,2,4,6 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 2;
    cout << "K smallest: " << kthSmallest(arr, n, k);
    return 0;
}