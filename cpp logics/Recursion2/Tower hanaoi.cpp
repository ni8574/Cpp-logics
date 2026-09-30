#include <iostream>
using namespace std;
void TOHanoi(int n,char source,char helper,char des){
    if(n == 1){
cout << source << " -> " << des << endl ;
return;
    }
    TOHanoi(n-1,source,des,helper);
    cout  << n << " from  " << source << " -> " << des << endl;
    TOHanoi(n-1,helper,source,des);
}
int main(){
    int n;
    cin >> n;
    TOHanoi(n,'A',' B','C');
    return 0;
}



