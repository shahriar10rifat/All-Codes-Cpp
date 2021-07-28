#include <bits/stdc++.h>
using namespace std;

int const mx = 5;
int arr[mx];
int Rear = -1;
int Front = -1;

void enqueue(int data){
    if(Rear==mx-1){
        cout<<"Queue is Full"<<endl;
        return;
    }
    if(Front==-1){
        Front = 0;
    }
    arr[++Rear] = data;
}

int dequeue(){
    if(Front==-1 && Rear==-1){
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
    int n; cin>>n;
    while(n--){
        int x; cin>>x;
        enqueue(x);
    }
    print();
    cout<<dequeue()<<endl;
    cout<<dequeue()<<endl;


    return 0;

}
