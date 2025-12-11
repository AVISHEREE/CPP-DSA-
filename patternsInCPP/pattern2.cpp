#include<iostream>
using namespace std;
int main(){
    //Pattern task 1:
    for(int row = 1;row <= 5;row++){
        for(int col = row;col >= 1;col--){
            cout << col << " ";
        }
        cout<<endl;
    }

    cout<<endl;

    //Pattern task 2:
    int a = 96;
    for(int row = 1;row <= 5;row++){
        for(int col = row;col >= 1;col--){
            cout << char(a+row) << " ";
        }
        cout<<endl;
    }

    cout<<endl;

    //Pattern task 3:
    for(int row = 1;row <= 5;row++){
        for(int col = 5;col >= 5-row+1;col--){
            cout << col << " ";
        }
        cout<<endl;
    }
}
