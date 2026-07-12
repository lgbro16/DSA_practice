#include<bits/stdc++.h>
using namespace std ;
class node{
public:
    int data;
    node* next;

    node(int data1){
        data = data1;
        next = nullptr;
    }

    node(int data1, node* next1){
        data = data1;
        next = next1;
    }
};

node* conarr2LL(const vector<int>& arr){
    if(arr.size() == 0) return nullptr;

    node* head = new node(arr[0]);
    node* mover = head;

    for(int i = 1; i < arr.size(); i++){
        node* temp = new node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}

node* insertHead(node* head, int value){
    node* temp = new node(value, head);
    return temp;
}
int main(){
vector<int> arr={12,3,4,1,5};
node*head = conarr2LL(arr);
//cout<<head->data;
node* temp = insertHead(head,1134);
while (temp)
{
    cout<<temp->data<<endl;
  temp =temp->next;
}

return 0;
}