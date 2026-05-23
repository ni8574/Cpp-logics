#include <iostream>
#include <unordered_set>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
    unordered_set<int>s = {1,12,3,14};
int x;
    vector<int>v(s.begin(),s.end());
    sort(v.begin(),v.end());
    for(int x : v){
        cout << x << " ";
    }
    return 0;
    
}

