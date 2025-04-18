#include <bits/stdc++.h>
using namespace std;

int main(){
    stack<int> rpn;

    string in;

    while(cin >> in){
        if(in == "+" || in == "-" || in == "/" || in == "*"){
            if(in == "+"){
                int op = rpn.top();
                rpn.pop();
                op += rpn.top();
                rpn.pop();
                rpn.push(op);
            }else if(in == "-"){
                int op = rpn.top();
                rpn.pop();
                op -= rpn.top();
                rpn.pop();
                rpn.push(op);
            }else if(in == "/"){
                int op1 = rpn.top();
                rpn.pop();
                int op2 = rpn.top();
                rpn.pop();
                rpn.push(floor(op2/op1));
            }else if(in == "*"){
                int op = rpn.top();
                rpn.pop();
                op *= rpn.top();
                rpn.pop();
                rpn.push(op);
            }
        }else{
            rpn.push(stoi(in));
        }
    }

    cout << rpn.top();

    return 0;
}