#include <bits/stdc++.h>
using namespace std;

int main(){
    string in;
    cin >> in;

    deque<char> parentheses;

    for(char c: in){
        parentheses.push_back(c);
    }

    int count = 0;
    int size = parentheses.size();
    int idx = 0;
    while(!parentheses.empty()){
        if(parentheses.front() == '['){
            for(int i = 0; i < parentheses.size(); i++){
                if(parentheses[i] == ']'){
                    parentheses.pop_front();
                    count++;
                    idx = i-1;
                    break;
                }
            }
            if(parentheses[idx] != ']'){
                parentheses.pop_front();
            }
        }else if(parentheses.front() == '{'){
            for(int i = 0; i < parentheses.size(); i++){
                if(parentheses[i] == '}'){
                    parentheses.pop_front();
                    count++;
                    idx = i -1;
                    break;
                }
            }
            if(parentheses[idx] != '}'){
                parentheses.pop_front();
            }
        }else if(parentheses.front() == '('){
            for(int i = 0; i < parentheses.size(); i++){
                if(parentheses[i] == ')'){
                    parentheses.pop_front();
                    count++;
                    idx = i-1;
                    break;
                }
            }
            if(parentheses[idx] != ')'){
                parentheses.pop_front();
            }
        }else{
            parentheses.pop_front();
        }
    }

    if(count == size/2 || (count == 1 & parentheses.size() == 2)){
        cout << "true";
    }else{
        cout << "false";
    }
    
}