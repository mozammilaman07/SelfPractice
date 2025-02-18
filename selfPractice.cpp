#include <iostream>
using namespace std;

void reverseArray(int arr[], int n)
{
    int left = 0;
    int right = n - 1;
    while (left <= right)
    {
        swap(arr[left], arr[right]);
        left++;
        right--;
    }
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{

    int arr[] = {10, 20, 30, 40, 50, 60};
    int n = 6;

    printArray(arr, n);
    reverseArray(arr, n);
    printArray(arr, n);
}