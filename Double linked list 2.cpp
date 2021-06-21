#include <bits/stdc++.h>
using namespace std;

struct nod{
    int val;
    nod *nxt, *pre;
};

nod *tail, *root = NULL;
int sizee;
void push(int data)
{

    if(root==NULL){
        root = new nod();
        root->val = data;
        root->pre = NULL;

        root->nxt = NULL;
        tail = root;
        sizee = 1;
        return ;
    }

    nod *newNod = new nod();
    newNod->val = data;
    newNod->nxt = NULL;

    newNod->pre = tail;
    tail->nxt = newNod;
    tail = newNod;
    sizee++;
}


void forward_print(){
    nod *crnt = root;

    while (crnt->nxt != NULL){
        cout<<crnt->val<<endl;
        crnt = crnt->nxt;
    }
    cout<<crnt->val<<endl;
}

void reverse_print(){
    nod *crnt = tail;

    while(crnt->pre != NULL){
        cout<<crnt->val<<endl;
        crnt = crnt->pre;
    }

    cout<<crnt->val<<endl;
}

void add_nod(int pos, int data){

    if(pos==1){
        nod *update = new nod();
        root->pre = update;
        update->pre  = NULL;

        update->val = data;
        update->nxt = root;
        root = update;
        return ;
    }

    if(pos==sizee){
        nod *newNod = new nod();
        nod *temp = tail->pre;
        newNod->val = data;

        temp->nxt = newNod;
        newNod->pre = temp;
        newNod->nxt = tail;
        tail->pre = newNod;
        return ;
    }
    int cnt = 1;
    nod *crnt = root;
    while(cnt != pos-1){
        crnt = crnt->nxt;
        ++cnt;
    }
    nod *update = new nod();
    update->val = data;
    update->pre = crnt;

    crnt->nxt->pre = update;
    update->nxt = crnt->nxt;
    crnt->nxt = update;
}

void delete_nod(int data){
    nod *crnt = root;
    while(crnt->nxt != NULL){
        if(crnt->val==data){

                if(crnt==root){
                    nod *temp = root;
                    root = crnt->nxt;
                    crnt = crnt->nxt;
                    delete temp;
                    continue;
                }

            nod *preTemp = crnt->pre;
            nod *nxtTemp = crnt->nxt;
            nod *temp = crnt;
            preTemp->nxt = nxtTemp;
            nxtTemp->pre = preTemp;
            crnt = nxtTemp;
            delete temp;
            continue;
        }
        crnt = crnt->nxt;
    }

        if(crnt->val==data){
            nod *preTemp = crnt->pre;
            preTemp->nxt = NULL;
            delete crnt;
        }
}

int main(){
    cout<<"Enter num of values: ";
    int x; cin>>x;
    cout<<"Values: "<<endl;
    while(x--){
        int a; cin>>a;
        push(a);
    }
    cout<<"Printing values: "<<endl;
    forward_print();
    cout<<endl<<"Printing values in reverse order: "<<endl;
    reverse_print();


    cout<<endl<<"Enter 'I' to insert value ---- enter 'D' to delete value --- enter 'P' to push value"<<endl;
    char tap;
    while(scanf("%c", &tap)){

            if(tap=='I'){
                    cout<<"Enter index and value: ";
                    int pos, val; cin>>pos>>val;
                    add_nod(pos, val);
                    forward_print();
                    cout<<endl<<"Enter 'I' to insert value ---- enter 'D' to delete value --- enter 'P' to push value"<<endl;

                }
            else if(tap =='D'){
                    cout<<"Enter a value to delete: ";
                    int data; cin>>data;
                    delete_nod(data);
                    forward_print();
                    cout<<endl<<"Enter 'I' to insert value ---- enter 'D' to delete value --- enter 'P' to push value"<<endl;

            }
            else if(tap =='P'){
                    cout<<"Enter a value to push: ";
                    int value; cin>>value;
                    push(value);
                    forward_print();
                    cout<<endl<<"Enter 'I' to insert value ---- enter 'D' to delete value --- enter 'P' to push value"<<endl;

            }
    }
    return 0;
}
