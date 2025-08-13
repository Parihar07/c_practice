#include<string>
#include<iostream>
using namespace std;

void generate(string res, int first, int second){
    if(first==0 && second ==0){
        cout << res << endl;
        return;
    }
    if(first>0){
        res.push_back('a');
        generate(res, first - 1, second);
        res.pop_back();
    }
    if(second>0){
        res.push_back('b');
        generate(res, first, second - 1);
        res.pop_back();
    }
}

int main(){
    cout << "generating equal number of inputs,....\n";
    generate("", 2, 2);
    return 0;
}