#include<iostream>
using namespace std;

// void Q(int z){
//     z +=z;
//     cout<<z<<" ";
// }

// void P(int *y){
//     int x =*y+2;
//     Q(x);
//     *y =x-1;
//     cout<<x<<" ";
// }

// int f(int x,int *py,int **ppz ){
//     int y,z;
//     **ppz +=1;
//     z = **ppz;
//     *py +=2;
//     x +=3;
//     return x+y+z;


// }

void increment(int **p){
    (**p)++;
}

int main ()
{
    //int arr[10]={23,122,41,67};
    // cout<<"address of first memory block"<<&arr[0]<<endl;
     
    // cout<<"4th "<<*arr<<endl;
    // cout<<"5th "<<*arr+1<<endl;
    // cout<<"1st "<<*(arr+1)<<endl;
    // cout<<"8th "<<arr[2]<<endl;
    // cout<<"9th "<<*(arr+2)<<endl;
    // int i=3;
    // cout<<i[arr]<<endl;

    // int temp[10] ={1,2};
    // cout<<sizeof(temp)<<endl;
    // cout<<sizeof(*temp)<<endl;
    // cout<<sizeof(& temp)<<endl;

    // int *ptr = &temp[0]; 
    // cout<<sizeof(ptr)<<endl;
    // cout<<sizeof(*ptr)<<endl;
    // cout<<sizeof(&ptr)<<endl;

    // int a[20] ={1,2,3,5};
    // cout<<&a[0]<<endl;
    // cout<<&a<<endl;
    // cout<<a<<endl;

    // int *p =&a[0];
    // cout<<p<<endl;
    
    // cout<<*p<<endl;
    // cout<<&p<<endl;

    // int a[] ={1,2,3,4};
    // int *p = a++;
    // //p =p+1;
    // cout<<*p<<endl;

    // char s[] = "hello";
    // char *p =s;
    // cout<<s[0]<<" "<<p[0];

    // char *ptr;
    // char Str[] ="abcdefg";
    // ptr = Str;
    // //ptr +=5;
    // cout<<ptr;

    // char st[] = "ABCD";
    // for(int i=0; st[i] !='\0';i++){
    //     cout<<st[i]<<*(st)+i<<*(i+st)<<i[st];
    // }

    // int a[] ={1,2,3,4};
    // changeSign(a+1);
    // cout<<a[0];

    // int x =5;
    // P(&x);
    // cout<<x;

    // int c, *b,**a;
    // c=4;
    // b = &c;
    // a = &b;
    // cout<< f(c,b,a);

    // int ***r,**q,*p,i=8;
    // p =&i;
    // (*p)++;
    // q =&p;
    // (**q)++;
    // r =&q;

    // cout<<*p<<" "<<**q<<" "<<***r;

    int num =10;
    int *ptr = &num;
    increment(&ptr);
    cout<<num<<endl;




    




    return 0;
}