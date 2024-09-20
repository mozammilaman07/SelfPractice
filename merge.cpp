#include <iostream>
using namespace std;

int main()
{
    int arr1[5] = {1, 5, 6, 7, 9};
    int arr2[3] = {2, 4, 8};
    int arr3[8] = {0};

    merge(arr1, 5, arr2, 3, arr3);
}