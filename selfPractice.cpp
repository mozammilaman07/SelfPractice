#include <iostream>
using namespace std;

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{

    int arr[] = {10, 20, 30, 40, 50, 60, 70};
    int n = 7;

    printArray(arr, n);

    return 0;
}