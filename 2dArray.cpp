#include <iostream>
using namespace std;

int main()
{
    int arr[2][4] = {
        {10, 20, 30, 40},
        {11, 12, 13, 14}};

    int row = 2;
    int col = 4;

    for (int i = 0; i < col; i++)
    {
        for (int j = 0; j < row; j++)
        {
            cout << arr[j][i] << " ";
        }
        cout << endl;
    }
}