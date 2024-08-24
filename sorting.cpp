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
int main()
{
    int arr[] = {40, 50, 70, 1, 24, 6, 45, 30};
    int n = 8;

    printArray(arr, n);
}