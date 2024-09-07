#include <iostream>
using namespace std;

void reverse(int arr[], int n)
{
}

void print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "array : " << arr[i] << endl;
    }
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50, 60};
    int n = 6;

    reverse(arr, n);
}