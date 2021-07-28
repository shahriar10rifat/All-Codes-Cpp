#include <bits/stdc++.h>
using namespace std;


struct node{
    int val;
    node *left, *right;
};

node *root = NULL;

void Insert(int data){
    if(root==NULL){
        root = new node();
        root->val = data;
        root->left = NULL;
        root->right = NULL;
        return;
    }

    node *parent = NULL;
    node *current = root;

    while(current != NULL){
        if(data < current->val){
            parent = current;
            current = current->left;
        }
        else{
            parent = current;
            current = current->right;
        }
    }
    if(data < parent->val){
        node *newNode = new node();
        newNode->val = data;
        newNode->left = NULL;
        newNode->right = NULL;
        parent->left= newNode;
    }

    else{
        node *newNode = new node();
        newNode->val = data;
        newNode->left = NULL;
        newNode->right = NULL;
        parent->right = newNode;
    }
}

void pre_order(node *current){
    if(current==NULL){
        return;
    }

    cout<<current->val<<" ";
    pre_order(current->left);
    pre_order(current->right);
}

void in_order(node *current){
    if(current==NULL) return;

    in_order(current->left);
    cout<<current->val<<" ";
    in_order(current->right);
}

void post_order(node *current){
    if(current==NULL) return;

    post_order(current->left);
    post_order(current->right);
    cout<<current->val<<" ";
}

void delete_node(int data){
    node *current = root, *parent = NULL;
    while(current->val != data){
        if(data < current->val){
            parent = current;
            current = current->left;
        }
        else{
            parent = current;
            current = current->right;
        }
    }


    if(current->left==NULL && current->right==NULL){
        if(data < parent->val){
            parent->left = NULL;
        }
        else parent->right = NULL;
    }

    else if(current->left!=NULL && current->right!=NULL){
        node *temp_parent = current;
        node *temp = current->right;
            while(temp->left != NULL){
            temp_parent = temp;
            temp = temp->left;
        }
        current = temp;
        temp_parent = NULL;
    }
    else{
        if(current->left == NULL) current = current->right;
        else if(current->right==NULL) current = current->left;

        if(parent->val > current->val) parent->left = current;
        else parent->right = current;
    }
}

int main(){

    cout<<"Enter number of elements: ";
    int n; cin>>n;
    cout<<"Enter values: ";
    while(n--){
        int x; cin>>x;
        Insert(x);
    }
    cout<<"Printing pre-order: "<<endl;
    pre_order(root);
    cout<<endl<<"Printing in-order: "<<endl;
    in_order(root);
    cout<<endl<<"Printing post-order: "<<endl;
    post_order(root);

    return 0;
}
