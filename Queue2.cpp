#include <bits/stdc++.h>
using namespace std;

int const mxi = 5;
int arr[mxi];
int Front = -1;
int Rear = -1;

void push(int data){ ///Enqueue
    if(Rear==mxi-1){
        cout<<"Queue is Full"<<endl;
        return;
    }
    if(Front==-1){
        Front = 0;
    }
    arr[++Rear] = data;
}

int pop(){     ///Dequeue
    if(Front==-1){     /// or same way if(Front==-1 && Rear==-1)
        cout<<"Queue is Empty"<<endl;
        return -1;
    }
    else{
        if(Front==Rear){
            int temp = arr[Front];
            Front=Rear=-1;
            return temp;
        }

        else{
            int temp = arr[Front];
            ++Front;
            return temp;
        }
    }
}

void print(){
    for(int i=Front; i<=Rear; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    cout<<"Number of Elements: ";
    int n; cin>>n;
    cout<<"Enter Elements: ";
    while(n--){
        int x; cin>>x;
        push(x);
    }
    print();
    cout<<"Deleting value: ";
    cout<<pop()<<" ";
    cout<<pop()<<endl;
    cout<<"Remaining Values are: ";
    print();

    return 0;

}
