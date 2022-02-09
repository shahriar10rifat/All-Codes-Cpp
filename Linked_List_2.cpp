#include <bits/stdc++.h>
using namespace std;

struct nod{
    int val;
    nod *nxt;
};

    nod *root = NULL;

/// pushing value...........

void push(int data){
    if(root==NULL){
        root = new nod();
        root->val = data;
        root->nxt = NULL;
        return ;
    }
    nod *current = root;

    while(current->nxt!=NULL){   /// traversing
        current = current->nxt;
    }

    nod *newnod = new nod();
    newnod->val = data;
    newnod->nxt = NULL;
    current->nxt = newnod;
}


/// deleting node........

void delete_nod(int idx){
    if(idx==1){
        nod *temp = root;
        root = temp->nxt;
        delete temp;
        return ;
    }
    nod *current = root;
    int cnt = 1;
    while(cnt!=idx-1){
        current = current->nxt;
        cnt++;
    }
    nod *temp = current->nxt;
    current->nxt = temp->nxt;
    delete temp;
}

/// Searching value..........

void search_value(int data){
    nod *current = root;
    while(current->nxt!=NULL){
        if(current->val==data){
            cout<<"Value Found"<<endl;
            return ;
        }
        current = current->nxt;
    }
    if(current->val==data){      /// for the last value....
       cout<<"Value Found"<<endl;
       return ;
    }
    cout<<"Value Not Found"<<endl;
}

void print(){
     nod *current = root;
    while(current->nxt != NULL){
        cout<<current->val<<endl;
        current = current->nxt;
    }
    cout<<current->val<<endl;
}

int main(){
    cout<<"Enter the number of elements: ";
    int x; cin>>x;
    cout<<"Enter elements: "<<endl;
    while(x--){
        int a; cin>>a;
        push(a);
    }
    cout<<"Following values are: "<<endl;
    print();

    cout<<endl<<"I to insert -- D to delete -- S to search"<<endl;
    char mr;
    while(scanf("%c", &mr)){

        if(mr == 'I'){
            cout<<"Enter a value: ";
                    int pos, val; cin>>val;
                    push(val);
                    print();
                    cout<<endl<<"I to insert -- D to delete -- S to search"<<endl;
        }
        else if(mr == 'D'){
            cout<<"Enter a index to delete: ";
                int idx; cin>>idx;
                delete_nod(idx);
                print();
                cout<<endl<<"I to insert -- D to delete -- S to search"<<endl;
        }
        else if(mr == 'S'){
            cout<<"Enter a value to search: ";
                int data; cin>>data;
                search_value(data);
                cout<<endl<<"I to insert -- D to delete -- S to search"<<endl;
        }
    }
    return 0;
}
