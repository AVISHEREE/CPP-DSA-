#include <iostream>
using namespace std;
int main()
{
    // Pattern task 1:
    for (int row = 1; row <= 5; row++)
    {
        for (int col = 1; col <= 5; col++)
        {
            cout << "*" << " ";
        }
        cout << endl;
    }

    cout << endl;
    
    // Pattern task 2:
    int a = 96;
    for (int row = 1; row <= 5; row++)
    {
        for (int col = 1; col <= 5; col++)
        {
            cout << char(a+row) << " ";
        }
        cout << endl;
    }

    cout << endl;

    // Pattern task 3:
    // int a = 1;
    for (int row = 1; row <= 5; row++)
    {
        for (int col = 1; col <= 5; col++)
        {
            // cout << a << " ";
            // a+=1;
            cout << row * col << " ";
        }
        cout << endl;
    }


    return 0;
}