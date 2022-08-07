#include<iostream>
using namespace std;

bool linearSearch(int arr[],int size,int key){
    //base case
    if(size ==0 )
     return false;

    if(arr[0] ==key)
    return true;

    else{
        return linearSearch(arr+1,size-1,key);
    }
}



int main(){
    int arr[6] ={1,2,3,4,5};
    int size =6;
    int key =6;

    cout<<linearSearch(arr,size,key);

    return 0;

} 