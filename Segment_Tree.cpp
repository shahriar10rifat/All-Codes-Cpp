#include <bits/stdc++.h>
#define pb push_back
using namespace std;

const int maxn = 4e5;
int tree[maxn];
vector <int> arr;

void build(int node, int l, int r){   ///l-left, r-right;
    if(l==r){
        tree[node] = arr[l];
        return;
    }
    ///1 to n
    int mid = (l + r) / 2;
    int lnode = node * 2;
    int rnode = (node * 2) + 1;

    build(lnode, l, mid);
    build(rnode, mid+1, r);

    tree[node] = tree[lnode] + tree[rnode];
}

void update(int node, int l, int r, int idx, int val){
    if(r<idx || l>idx){
        return;
    }
    if(l==r && l==idx){
        tree[node] = val;
        return;
    }

    int mid = (l + r) / 2;
    int lnode = node * 2;
    int rnode = (node * 2) + 1;

    update(lnode, l, mid, idx, val);
    update(rnode, mid+1, r, idx, val);

    tree[node] = tree[lnode] + tree[rnode];
}

int query(int node, int l, int r, int i, int j){
    if(r<i || l>j){
        return 0;
    }
    if(i<=l || j>=r){
        return tree[node];
    }

    int mid = (l + r) / 2;
    int lnode = node * 2;
    int rnode = (node * 2) + 1;

    return query(lnode, l, mid, i, j) + query(rnode, mid+1, r, i, j);

}

int main(){
    int n, q; ///q-Query
    cin>>n>>q;

    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        arr.pb(x);
    }

    build(1, 1, n);     /// n-node, ar baki 2ta index left ar right;

    for(int i=0; i<q; i++){
        int x, y, z;
        cin>>x>>y>>z;

        if(x==1){
            update(1, 1, n, y, z);
        }
        else{
            cout<<query(1, 1, n, y, z)<<endl;
        }
    }
    ///1st e idx, val;
    ///2nd e range i, j dibe;
    ///

    return 0;
}
