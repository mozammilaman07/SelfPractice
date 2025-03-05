#include <iostream>
using namespace std;

int firstOccurence(int arr[], int size, int target)
{
    int s = 0;
    int e = size - 1;
    int mid = (s + e) / 2;
    int ans = -1;

    while (s <= e)
    {
        if (arr[mid] == target)
        {
            ans = mid;
            e = mid - 1;
        }
        else if (arr[mid] > target)
        {
            e = mid - 1;
        }
        else if (arr[mid] < target)
        {
            s = mid + 1;
        }
        mid = (s + e) / 2;
    }
    return ans;
}

int main()
{
    int arr[] = {4, 6, 20, 25, 45, 25, 88, 90};
    int size = 8;
    int target = 25;

    int finalAns = firstOccurence(arr, size, target);
    cout << "Element found at : " << finalAns << endl;
}

// #include <iostream>
// using namespace std;

// void firstRepeat(int arr[], int n)
// {
//     bool isRepeat = false;
//     int index = -1;
//     for (int i = 0; i < n; i++)
//     {

//         for (int j = i + 1; j < n; j++)
//         {
//             if (arr[i] == arr[j])
//             {
//                 isRepeat = true;
//                 index = i;
//             }
//         }
//     }

//     cout << "Repeated or not : " << isRepeat << endl;
//     cout << "at index : " << index;
// }

// int main()
// {
//     int arr[] = {1, 5, 6, 5, 4, 2, 6, 8};
//     int n = 8;

//     firstRepeat(arr, n);
// }