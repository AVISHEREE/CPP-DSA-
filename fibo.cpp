#include<iostream>
using namespace std;
int main(){
    int n,last = 0,prev = 1,curr,i;
    cout<<"Enter number to find fibo: ";
    cin>>n;
    if(n==1){
        cout<<last;
        return 0;
    }
    if(n==2){
        cout<<prev;
        return 0;
    }
    for(i = 3;i <= n;i++){
        curr=last+prev;
        last=prev;
        prev=curr;
    }
    cout<<"Fibonacci of "<<n<<" is "<<curr; 
    return 0; 
}