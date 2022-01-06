// Binary Search: find element in circularly sorted array
#include<iostream>
using namespace std;

int circular(int arr[],int n,int x)
{
    int low=0;
    int high =n-1;
    while(low<=high)
    {
        int mid = low+(high-low)/2;
        if(x==arr[mid])
        return mid;
        if(arr[mid]<=arr[high])
        {
            if(x>arr[mid] && x<=arr[high])
            low=mid+1;
            else
            high=mid-1;
        }
        else if(arr[mid]>=arr[low])
        {
            if(x>=arr[low] && x<arr[mid])
            high=mid-1;
            else
            low=mid+1;
        }
    }
    return -1;
}

int main()
{
    int a[] ={12,14,18,21,3,6,8,9};
    int x = 8;
    int index = circular(a,8,x);
    if(index==-1)
    cout<<"not found";
    else
    cout<<"element found at: "<<index;
    return 0;
}