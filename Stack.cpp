#include <bits/stdc++.h>
using namespace std;



const int mx = 101;
int arr[mx];    //taking a initial size of stack (any size can be defined)
int top = -1;   //top is -1 initially (when no values are in stack)
void push(int data){
    if(top==mx-1){   //checking if there have space to insert a value or not
        cout<<"Jayga nai re bhai/bon"<<endl;  //if no space, then a alert message of OverFlow
        return;
    }
    arr[++top] = data;  //otherwise inserting value
}

int pop(){
    if(top==-1){  //checking if there exists even a single value or not
        cout<<"R kisu nai re bhai/bon"<<endl;  //if not then alert message of UnderFlow
        return 0;
    }
    int temp = arr[top];  //taking a temp variable to return value..
    top--;  //popping / deleting top index
    return temp;  //returning top value which is stored at temp

}


void print(){  //just printing the stack
    for(int i=top; i>=0; i--){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int n; cin>>n;  //taking the number of inputs
    for(int i=0; i<n; i++){  //taking values as input
        int x; cin>>x;
        push(x);  //making a stack by passing the values to push function
    }
    print();   //printing values
    cout<<pop()<<endl;   //printing top element
    print();  //again printing values..

    return 0;
}
