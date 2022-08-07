#include<iostream>
using namespace std;

int main(){
    int arr[5] = {1,2,3,4,5};
    char ch[6] ="abcde";

    cout<<arr<<endl;
    cout<<ch<<endl;

    char *ptr = &ch[0];
    
    cout<<ptr<<endl;

    char temp = 'z';
    char *a = &temp;
    cout<<a<<endl;


    return 0;
}
