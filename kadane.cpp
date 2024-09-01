#include <iostream>
using namespace std;

int main()
{
    int arr[] = {5, 4, -1, 7, 8};
    int n = 5;

    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            cout << "sub Arrays are : " << arr[j] << "," << endl;
        }
        cout << endl;
    }
}