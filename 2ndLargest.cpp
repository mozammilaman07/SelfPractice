#include <iostream>
using namespace std;

int largest(int arr[], int n)
{
    int largest = 0;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > arr[largest])
        {
            largest = i;
        }
        }
    return largest;
}

int main()
{
    int arr[] = {10, 54, 21, 6, 41, 14};
    int n = 6;
}