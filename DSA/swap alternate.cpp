#include<iostream>
using namespace std;

void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
       
    }
     cout<<endl;
}

void salt(int arr[],int size){
    for(int i=0;i<size;i =i+2){
        if(i+1<size){
            swap(arr[i],arr[i+1]);
        }
    }
}

int main()
{
    int even[8] = {5,2,9,4,7,6,1,0};
    int odd[5] = {11,33,9,76,43};

    salt(even,8);
    printArray(even,8);

    return 0;
}