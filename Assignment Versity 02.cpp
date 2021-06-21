///Assignment 01................
/*
#include <bits/stdc++.h>
using namespace std;

int main(){
    int m=29, *pnt;

    pnt = &m;
    cout<<"Index of 'm' is: "<<pnt<<endl;
    cout<<"Value of 'm' is: "<<*pnt<<endl;

    int *ab;
    ab = &m;
    cout<<"Index of 'ab' is: "<<ab<<endl;
    cout<<"Value of 'ab' is: "<<*ab<<endl;

    m = 34;
    cout<<"Index of 'ab' is: "<<ab<<endl;
    cout<<"Value of 'ab' is: "<<*ab<<endl;

    *ab = 7;
    cout<<"Index of 'm' is: "<<&m<<endl;
    cout<<"The Value of 'm' is: "<<m<<endl;

    return 0;
}
*/

///Assignment 02................
/*
#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, b, *p, *q;

    p = &a;
    q = &b;

    cin>>a>>b;
    cout<<(*p + *q)<<endl;
    return 0;
}
*/

///Assignment 03.................
/*
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n;
    int arr[n];

    for(int i=0; i<n; i++){
        scanf("%d", (arr+i));
    }

    for(int i =0; i<n; i++){
        printf("The element of  - %d: %d\a", i, *(arr+i));
    }
    return 0;
}
*/

///Assignment 4...........
#include <bits/stdc++.h>
using namespace std;

struct stdnt{
    string name;
    int Id;
};

int main(){
    stdnt *ptr;
    int n; cin>>n;
    ptr = (stdnt*)malloc(n*sizeof(stdnt));  ///eta just datdtype er pointer bujhachhe
    cout<<"Enter Student Name and Id : ";
    for (int i=0; i<n; i++){
        scanf("%s", (ptr+i)->name);   ///to access any address we use " -> "
        scanf("%d", &(ptr+i)->Id);


    }
    cout<<"The Elements are : "<<endl;
    for (int i=0; i<n; i++){
        printf("%s\n",(ptr+i)->name);
        printf("%d\n",(ptr+i)->Id);
    }

return 0;
}

///Assignment 5............
/*
#include <bits/stdc++.h>
using namespace std;

struct student{   ///stdnt ekta datatype
    string name;
    int ID;
    double cgpa;
};

int main(){

    int n; cin>>n;
    student s[n];

    for(int i=0; i<n; i++){
        cin>>s[i].name>>s[i].ID>>s[i].cgpa;
    }

    for(int i=0; i<n; i++){
        cout<<s[i].name<<" "<<setprecision(2)<<s[i].cgpa<<" "<<s[i].ID<<endl;
    }
    return 0;
}
*/

