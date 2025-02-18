#include <iostream>
#include <limits.h>
using namespace std;

int findMin(int arr[], int n)
{
    int minAns = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < minAns)
        {
            minAns = arr[i];
        }
    }
    return minAns;
}

int main()
{
    int arr[] = {7, 18, 64, 20, 4, 02, 98, 15};
    int n = 8;

    int ans = findMin(arr, n);
    cout << "minimum number in array is : " << ans << endl;
}