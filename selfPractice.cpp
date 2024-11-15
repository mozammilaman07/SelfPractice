#include <iostream>
using namespace std;

// void moveNeg(int arr[], int n)
// {
//     int j = 0;
//     for (int i = 0; i < n; i++)
//     {

//         if (arr[i] < 0)
//         {
//             swap(arr[i], arr[j]);
//             j++;
//         }
//     }
// }

// int main()
// {

//     int arr[] = {23, -5, 54, -64, -12, 60, 11};
//     int n = 7;
//     cout << "Before" << endl;
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }

//     moveNeg(arr, n);
//     cout << "After" << endl;
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
// }

void rotate(int arr[], int n, int k)
{
    int ans[k];

    for (int i = 0; i < n; i++)
    {
        int j = (i + k) % n;
        ans[j] = arr[i];
    }
    ans = arr;
}

int main()
{

    int arr[] = {10, 20, 30, 40, 50, 60};
    int n = 6;
    int k = 3;

    rotate(arr, n, k);
}