#include <iostream>
using namespace std;

void printArray(int arr[4][3], int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = i; j < col; j++)
        {
            cout << arr[i][j] << ", ";
        }
        cout << endl;
    }
}

int main()
{

    int arr[4][3] = {
        {10, 20, 30},
        {40, 50, 60},
        {70, 80, 90},
        {100, 110, 120},
    };
    int row = 4;
    int col = 3;
    printArray(arr, row, col);
}