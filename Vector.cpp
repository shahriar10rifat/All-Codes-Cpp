///.........Vector basic.........
/*
#include<bits/stdc++.h>
using namespace std;

int main(){
    vector< int > v;    /// <data type>;
    v.push_back( 1 );   ///pushing value in vector...;
    v.push_back( 2 );
    v.push_back( 3 );
    v.push_back( 4 );

    for(int i=0; i<v.size(); i++)   ///using loop to print all outputs;
        cout << v[i] << endl;

    return 0;
}
*/

///..........User input.................
/*
#include <bits/stdc++.h>
using namespace std;

int main(){
    vector <int> v;
    int n; cin>>n;
    for(int i=0; i<n; i++){
        int x; cin>>x;
        v.push_back(x);
    }
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<endl;
    }



return 0;
}
*/

///..........Sorting in vector..............
/*
#include <bits/stdc++.h>
using namespace std;

int main(){
    vector <int> v;   /// <data type>;
    int n; cin>>n;

    for(int i=0; i<n; i++){   ///test case;
        int x; cin>>x;     ///for taking input;
        v.push_back(x);    ///to push value in vector;
    }

    sort (v.begin(), v.end());  ///built in sorting function;
        for(int i=0; i<v.size(); i++){  ///using loop to print the value stored in vector
            cout<<v[i]<<" ";
    }
    return 0;
}
*/
///......Printing size of vector.................
/*
#include <bits/stdc++.h>
using namespace std;

int main(){
    vector <int> v;
    v.push_back(5);  ///it works to push the value in vector.
    v.push_back(6);

    ///v.size() is used to know the size of the vector.
    cout<<v.size()<<endl;
    cout<<v[0]<<" "<<v[1]<<endl;  ///to see the value in vector of no 1


return 0;
}
*/
///.........Sum of vecror..........

#include <bits/stdc++.h>
using namespace std;

int main() {
   vector<int> v = {2,7,6,10};
   cout<<"Sum of all the elements are:"<<endl;
   cout<<accumulate(v.begin(),v.end(),0);  /// Built in sum function;
}


/**
    push_back();  to push a value
    pop_back();   to delete a value
    size();       measuring size of vector
    begin();
    end();
    r.begin();
    r.end()
    front();
    back();
    sort();
    reverse();
    accumulate()
    insert();
    clear();
    erase();
    swap();
*/
