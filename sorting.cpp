#include <iostream>
using namespace std;

void printArray(int arr[], int n)
{
    cout << "print the array " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void bubbleSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}
int main()
{
    int arr[] = {40, 50, 70, 1, 24, 6, 45, 30};
    int n = 8;

    printArray(arr, n);

    bubbleSort(arr, n);
    printArray(arr, n);
}