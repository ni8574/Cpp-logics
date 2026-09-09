#include <iostream>
using namespace std;
int main(){
    int arr[100],n,i,j;
    cout << "Enter the size of array" << endl;
    cin >> n;
    cout << "Enter the elements of the array" << endl;
   int  temp = arr[i];

    for(i = 1;i < n;i++){
        temp = arr[i];

        for(j = i-1;j >= 0;j--){
            if(arr[j] > temp){
            arr[j+1] = arr[j];
        }
    }
    }
        arr[j+1] = temp;


return 0;

}