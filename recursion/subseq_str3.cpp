#include<iostream>
#include<vector>
#include<string>
using namespace std;

int subseq(string ip, string op[])
{
    if(ip.size()==0){
        cout<<op[0]<<endl;
        return 1;
    }
    int smallersize = subseq(ip.substr(1),op);
    for(int i=0;i<smallersize;i++){
        op[i+smallersize] = ip[0]+op[i];
    }
    return smallersize*2;
}

int main(){
    cout<<"Hello.. Subsequence method zero...!\n";
    string *op = new string[10000];
    string ip = "parihar naresh singh";
    int cnt = subseq(ip,op);
    for (int i = 0; i < cnt; i++)
    {
        cout<<op[i]<<endl;
    }
    
    return 0;
}