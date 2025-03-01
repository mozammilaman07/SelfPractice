#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int target)
{
    int start = 0;
    int end = size - 1;
    int mid = (start + end) / 2;

    while (start <= end)
    {
        if (arr[mid] == target)
        {
            return mid;
        }
        if (arr[mid] > target)
        {
            end = mid - 1;
        }
        if (arr[mid] < target)
        {
            start = mid + 1;
        }
        mid = (start + end) / 2;
    }
    return -1;
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50, 60, 70, 80};
    int size = 8;
    int target = 70;

    int ansIndex = binarySearch(arr, size, target);
    if (ansIndex == -1)
    {
        cout << "Target not found" << endl;
    }
    else
    {
        cout << "target found at index : " << ansIndex << endl;
    }
}

// #include <iostream>
// using namespace std;

// int main()
// {

//     int arr[] = {1, 5, 6, 1, 7, 5};
//     int n = 6;

//     // precompute
//     int hash[13] = {0};
//     for (int i = 0; i < n; i++)
//     {
//         hash[arr[i]] += 1;
//     }
//     int q;
//     cin >> q;
//     while (q--)
//     {
//         int number;
//         cin >> number;
//         cout << hash[number] << endl;
//     }
// }