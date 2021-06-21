#include <bits/stdc++.h>
using namespace std;


struct node{
    int val;
    node *next,*last;
};
node *root = NULL;

void push(int data){
    if(root == NULL){
        root = new node();
        root->val = data;
        root->next = NULL;
    }
    else {
        node *current = root;
        while(current->next!= NULL){
            current = current->next;
        }
        node *newNode = new node();
        newNode->val = data;
        newNode->next = NULL;
        current ->next = newNode;
    }
}

void printList(){
    node *current = root;
    while(current->next!=NULL){
        cout<<current->val<<endl;
        current = current->next;
    }
    cout<<current->val<<endl;
}
int main(){
    push(5);
    push(7);
    push(10);
    push(11);
    push(3);
    push(8);
    printList();
}

