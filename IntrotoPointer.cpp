#include<iostream>
using namespace std;

int main () {

    //pointer to int is created, and pointing to some garbage address
    //int *p = 0; 

    //cout << *p << endl;

    /*
    int i = 5;
    int *q = &i;
    cout << q << endl;
    cout << *q << endl;
    int *p = 0;
    p = &i;
    cout << p << endl;
    cout << *p << endl;
    */

//    int num = 5;
//    int a = num;
//    cout << "a before " << num << endl;
//    a++;
//    cout << "a after " << num << endl;


//    int *p  = &num;
//    cout << "before " << num << endl;
//    (*p)++;
//    cout << "after " << num << endl;

    //copying a pointer
//    int *q = p;
//    cout << p <<" - " << q << endl;
//    cout << *p <<" - " << *q << endl;

//    //important concept
//    int i = 3;
//    int *t = &i;
//    //cout <<  (*t)++ << endl;
//    *t = *t +1;
//     cout << *t << endl;
//     cout << " before t " << t << endl;
//     t = t + 1;
//     cout << " after t " << t << endl;

    // float f =10.5;
    // float p =2.5;
    // float*ptr =&f;
    // cout<<*ptr<<endl;
    // (*ptr)++;
    // *ptr =p;
    // cout<<*ptr<<" "<<f<<" "<<p<< endl;

    int *ptr =0;
    int a =10;
    //*ptr =a;
    cout<<*ptr;




    return 0;
}