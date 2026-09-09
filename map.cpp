#include <iostream>
#include <map>
#include <vector>
using namespace std;
int main(){

vector<int> vec = {12,13,1,2,5};
    map <int,int>myMap;
   
    for(auto i : vec){
        myMap[i] = i*i;

    }
       for(auto p : myMap){
        cout << p.first << " -> " << p.second << endl;
    }

    return 0;
}