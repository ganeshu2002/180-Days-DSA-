// Print n’th Fibonacci number.
#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter n";
    cin>>n;

    int first =0,second=1,curr;

    for(int i=1;i<=n-2;i++){
        curr=first+second;
        first=second;
        second=curr;
    }
    cout<<curr;
}