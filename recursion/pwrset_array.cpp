#include<iostream>
#include<vector>
using namespace std;

void generate(vector<int> A, int ind, vector<int> op){
    if(ind==A.size()){
        for(auto i:op){
            cout << i << " ";
        }
        cout << endl;
        return;
    }
    //take it
    op.push_back(A[ind]);
    generate(A, ind + 1, op);
    op.pop_back(); // when you want to do dont take it thing you should be removing inserted data
    //dont take it
    generate(A, ind + 1, op);
}

int main(){
    cout << "powerset of given array, is nothing but all the subsequences of the given array i.e. 2^n" << endl;
    vector<int> A{1, 2, 3};
    vector<int> op;
    generate(A, 0, op);
    return 0;
}