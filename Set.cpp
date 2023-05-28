#include<bits/stdc++.h>
using namespace std;

int main(){
    cout<<"Enter number of elements: ";
    set<int>st;         /// Declaring set

    int t;
    cin>>t;
    cout<<"Enter elements for Set 1: ";
    for(int i=0; i<t; i++){
        int x;
        cin>>x;
        st.insert(x);
    }

    set< int > :: iterator it;
    cout<<"Printing values in order: ";
    for(it=st.begin(); it!=st.end(); it++) {
        cout<<*it<<" ";        ///printing values using position
    }
        cout<<endl<<endl;

    // erasing a particular value
    cout<<"Enter a value to delete: ";
    int er; cin>>er;
    st.erase(er);
    for (it = st.begin(); it != st.end(); it++) {
        cout <<*it<<" ";
    }
        cout<<endl<<endl;

    // remove all elements up to 30 in s2
    cout<<"Enter a number to delete all lower values: ";
    int fd; cin>>fd;
    st.erase(st.begin(), st.find(fd));
    for (it = st.begin(); it != st.end(); it++) {
        cout <<*it<<" ";
    }
        cout<<endl<<endl;


    /// Printing values in reverse order--
    set<int, greater<int> > st2;
    cout<<"Enter elements for Set 2: ";
    for(int i=0; i<t; i++){
        int x;
        cin>>x;
        st2.insert(x);
    }

    set<int, greater<int> >::iterator it2;
    cout<<"Printing values in reverse order: ";
    for(it2=st2.begin(); it2!=st2.end(); it2++){
        cout<<*it2<<" ";
    }
        cout<<endl;

    return 0;
}

/*
    0.The time complexities for doing various operations on sets are:
            ->Insertion of Elements – O(log N)
            ->Deletion of Elements – O(log N)
    1.Storing order – The set stores the elements in sorted order.
    2.Values Characteristics – All the elements in a set have unique values.
    3.Values Nature – The value of the element cannot be modified once it is added to the set,
      though it is possible to remove and then add the modified value of that element. Thus, the values are immutable.
    4.Search Technique – Sets follow the Binary search tree implementation.
    5.Arranging order – The values in a set are unindexed.
    6.set can't keep track of it's values located in memory so we use iterator to access those values

*/
