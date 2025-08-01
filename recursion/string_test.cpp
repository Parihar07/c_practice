#include<iostream>
#include<string>
using namespace std;

int main(){
    cout<<"Hello string experiments ..\n";

    string str = "something randon shitt";
    cout<<str<<endl;

    cout<<str.substr(1)<<endl;
    cout<<str.substr(1,5)<<endl;
    return 0;
}