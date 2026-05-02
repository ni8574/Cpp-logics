#include <iostream>
using namespace std;
struct node{
    int data;
    node *next;

    node(int value){
        data = value;
        next =NULL;

    }
};

node *createdLL(int arr[],int index,int size){
    if(index==size)
        return NULL;
        node  *temp = new node(arr[index]);
        temp -> next = createdLL(arr,index+1,size);
        return temp;

}

int main(){
    node *head;
    head =NULL;
    int arr[]={2,4,6,8,3};
    head = createdLL(arr,1,5);

    if(head != NULL){
        node *temp = head;
        head = head -> next;

    
    while(temp){
        cout << temp->data << endl;
        temp = temp->next;

    }
}
    return 0;
}
