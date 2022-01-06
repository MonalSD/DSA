// how many times is a sorted array rotated?
#include<iostream>
using namespace std;

int rotation(int arr[],int n)
{
    int low=0;
    int high=n-1;
    while(low<=high)
    {
        if(arr[low]<=arr[high])
        return low;

        int mid = low +(high-low)/2;
        int next = (mid+1)%n;
        int prev = (mid+n-1)%n;

        if(arr[mid]<=arr[next] && arr[mid]<=arr[prev])
        return mid;

        else if(arr[mid]<=arr[high])
        high=mid-1;

        else if(arr[mid]>=arr[low])
        low=mid+1;
    }
    return -1;
}

int main()
{
    int a[] ={15,22,23,28,31,38,5,6,8,10,12};
    int count = rotation(a,11);
    cout<<"Array is rotated: "<<count<<" times.";
    return 0;
}