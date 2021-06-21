///User Insert idx & value;

#include <bits/stdc++.h>
using namespace std;

int main(){
    int a[5]={1, 2, 3, 4}, b[5];
        for(int i=0; i<5; i++){
            b[i] = a[i];
        }
        cout<<"Enter Position and Value: ";
        int vl, idx;
        cin>>idx>>vl;
            --idx;

            for(int i=4; i>=idx; i--){
                a[i] = a[i-1];
            }

            a[idx] = vl;
            cout<<"Previous Array Is"<<endl;
            for(int x: b){
            if(x==0) break;
            cout<<x<<endl;
            }

            cout<<"Modified Array Is"<<endl;
                for(int x: a){
                cout<<"\t"<<x<<endl;
                }
    return 0;
}
*/


/// Deleting array in given idx;

#include <bits/stdc++.h>
using namespace std;

int main(){
    int a[5]={1, 2, 3, 4}, b[5];
        for(int i=0; i<5; i++){
            b[i] = a[i];
        }
        cout<<"Enter Position To Delete: ";
        int vl, idx;
        cin>>idx;
        --idx;
            for(int i=idx; i<5; i++){
                a[i] = a[i+1];
            }

            cout<<"Previous Array Is: "<<endl;
                for(int x: b){
                if(x==0) break;
                cout<<x<<endl;
                }

                cout<<"Modified Array Is: "<<endl;
                    for(int i=0; i<4; i++){
                    cout<<"\t"<<a[i]<<endl;
                }
    return 0;
}
*/

///Updating Value taken from User;

#include <bits/stdc++.h>
using namespace std;

int main(){
    int a[5]={20, 22, 33, 44, 55}, b[5];
        for(int i=0; i<5; i++){
            b[i] = a[i];
        }
        cout<<"Enter Position & Value To Update: ";
        int pos, vl;
        cin>>pos>>vl;
        --pos;
        a[pos] = vl;
        cout<<"Previous Array: "<<endl;
        for(int x: b){
            cout<<x<<endl;
        }

        cout<<"Updated Array: "<<endl;
        for(int x: a){
            cout<<"\t"<<x<<endl;
        }
    return 0;
}
