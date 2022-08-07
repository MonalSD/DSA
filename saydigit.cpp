#include<iostream>
using namespace std;

void saydigit(int n,string s[]){
    if(n==0)
    return ;

    int digit =n%10;
    n =n/10;

    saydigit(n,s);

    cout<<s[digit]<<" ";
} 

int main(){
    string s[10] ={"zero","one","two","three","four","five","size","seven","eight","nine"};
    
    int n;
    cin>>n;
    cout<<endl<<endl<<endl;
    saydigit(n,s);
    cout<<endl<<endl<<endl;

    return 0;
}