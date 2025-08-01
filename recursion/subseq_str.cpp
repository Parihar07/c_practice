#include<iostream>
using namespace std;

void printSubSeq1(string ip, string op)
{
    if(ip.size()==0) {
        cout<<op<<endl;
        return;
    }
    //take a character that is first one here
    printSubSeq1(ip.substr(1), op+ip[0]);
    //leaving the first character
    printSubSeq1(ip.substr(1),op);
}
int main()
{
    cout<<"hello subsequence problems\n";
    printSubSeq1("abc","");
    return 0;
}