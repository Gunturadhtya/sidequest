#include <bits/stdc++.h>
using namespace std;

deque<int> simul;
deque<string> out;

void add(int x, int y){
    for(int i = 0; i < y; i++){
        simul.push_back(x);
    }

    out.push_back(to_string(simul.size())+'\n');
}

void del(int y){
    for(int i = 0; i < y; i++){
        if(i == 0){
            out.push_back(to_string(simul.front())+'\n');
        }
        simul.pop_front();
    }
}

void rev(){
    reverse(simul.begin(), simul.end());
}

int main(){
    int n; 
    cin >> n;

    for(int i = 0; i<n; i++){
        string in;
        cin >> in;

        if(in == "add"){
            int x, y;
            cin >> x >> y;
            add(x, y);
        }else if(in == "del"){
            int y;
            cin >> y;
            del(y);
        }else if(in == "rev"){
            rev();
        }
    }

    while(!out.empty()){
        cout << out.front();
        out.pop_front();
    }
}