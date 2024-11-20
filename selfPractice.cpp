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

// void rotate(int arr[], int n, int k)
// {
//     // int ans[k];

//     // for (int i = 0; i < n; i++)
//     // {
//     //     int j = (i + k) % n;
//     //     ans[j] = arr[i];
//     // }
//     // arr = ans;

//     k = k % n;

//     int ans[k];
//     for (int i = 0; i < k; i++)
//     {
//         ans[i] = arr[i];
//     }

//     for (int i = k; i < n; i++)
//     {
//         arr[i - k] = arr[i];
//     }

//     for (int i = n - k; i < n; i++)
//     {
//         arr[i] = ans[i - (n - k)];
//     }
// }

// int main()
// {

//     int arr[] = {10, 20, 30, 40, 50, 60};
//     int n = 6;
//     int k = 8;

//     rotate(arr, n, k);

//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
// }