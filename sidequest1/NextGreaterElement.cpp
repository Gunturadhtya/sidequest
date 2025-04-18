#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    deque<int> nums;
    int in;
    for(int i = 0; i < n; i++){
        cin >> in;
        nums.push_back(in);
    }
    
    while(!nums.empty()){
        int num = nums.front();
        int idx = 0;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] > num){
                idx = i;
                break;
            }
        }

        if(nums[idx] > num){
            cout << nums[idx] << " ";
        }else{
            cout << "-1 ";
        }
        nums.pop_front();
    }
}