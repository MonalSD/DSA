#include<iostream>
using namespace std;

int sum(int arr[],int size){
    //base case
    if(size ==0)
    return 0;

    return arr[0] + sum(arr + 1,size-1);
}



int main(){
    int arr[1] ={3};
    int size =1;

    cout<<sum(arr,size);

    return 0;

}