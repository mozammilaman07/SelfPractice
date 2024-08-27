#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 6; i <= n; i++)
    {
        cout << "Table of " << i << endl;
        for (int j = 1; j <= 10; j++)
        {
            int value = i * j;
            cout << i << " * " << j << " = " << value << endl;
        }
        cout << endl;
    }
}
