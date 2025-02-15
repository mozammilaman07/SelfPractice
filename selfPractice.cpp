#include <iostream>
using namespace std;

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int findTarget(int arr[], int n, int target)
{

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == target)
        {
            return i;
        }
    }
    return false;
}
int sumArray(int arr[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }
    return sum;
}

int main()
{

    int arr[] = {10, 20, 30, 40, 50, 60, 70};
    int n = 7;
    int target = 50;
    // int ans = findTarget(arr, n, target);
    printArray(arr, n);
    int ans = sumArray(arr, n);
    cout << "sum of array are: " << ans << endl;

    // if (findTarget == false)
    // {
    //     cout << "target not found" << endl;
    // }
    // else
    // {
    //     cout << "target found at index : " << ans << endl;
    // }
    return 0;
}