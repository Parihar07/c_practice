#include<iostream>
#include<string>
#include<vector>
using namespace std;

void subseq(string ip, string op, vector<string> &res)
{
    if(ip.size()==0){
        res.push_back(op);
        return;
    }
    //take the character
    subseq(ip.substr(1),op+ip[0],res);
    //leav the character
    subseq(ip.substr(1),op,res);
}

int main(){
    cout<<"Hello collecting subsequence method 2.\n";
    vector<string> ans;
    subseq("abc","",ans);
    for(auto i:ans){
        cout<<i<<endl;
    }
    return 0;
}