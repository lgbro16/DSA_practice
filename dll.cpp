#include<bits/stdc++.h>
using namespace std ;

class node{
public:
int data;
node* next;
node* back;

public:
node(int data1){
data=data1;
next=nullptr;
back=nullptr;
}
node(int data1,node* next1,node* back1){
    data=data1;
    next=next1;
    back=back1;
}
};
node* arr2DLL(vector<int> &arr){
node* head = new node(arr[0]);
node*prev=head;
for (int i = 1; i < arr.size(); i++)
{ 
  node* temp = new node(arr[i]);
  temp->back=prev;
  prev->next=temp;
  prev=temp;  
}
return head;
}
void printDLL(node* head){
    
    while(head!=NULL){
     cout<<head->data<<endl;
     head=head->next;
    }
}

node* delHead(node*head){
    if(head==NULL || head->next==nullptr){
        return NULL;
    }
node*temp=head;
head=head->next;
head->back=nullptr;
temp->next=nullptr;
delete(temp);
return head;
}

node* delele(node* head,int k){
    if(head==NULL){
        return NULL;
    }
node* temp= head;
int cnt=0;
while(temp!=NULL){
    cnt++;
    if(cnt==k){
        break;
    }
    temp=temp->next;
}
node* prev=temp->back;
node* front = temp->next;
if(prev==NULL && front==NULL){
    return NULL;
}
else if(prev==NULL){
    return delHead(head);
}
else{prev->next=front;
front->back=prev;
temp->back=nullptr;
temp->next=nullptr;
delete(temp);
return head;}
}
int main(){
vector<int> arr={12,4,3,1,5};
printDLL(delele(arr2DLL(arr),5));
return 0;
}