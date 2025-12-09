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
    for (int row = 1; row <= 5; row++)
    {
        for (int col = 5; col >= 1; col--)
        {
            cout << col << " ";
        }
        cout << endl;
    }
    return 0;
}