#include<iostream>
#include<string>
using namespace std;

void generate(string res, int open, int close){
    if(open==0&&close==0)
    {
        cout << res << endl;
        return;
    }
    if(open>0){
        res.push_back('(');
        generate(res, open - 1, close);
        res.pop_back();
    }
    if(close>0 && open<close){
        res.push_back(')');
        generate(res, open, close - 1);
        res.pop_back();
    }
}
    
int main()
{
    cout << "Generating Parenthesis......\n";
    generate("", 2, 2);
    return 0;
}