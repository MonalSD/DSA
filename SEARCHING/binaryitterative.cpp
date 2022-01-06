// binarysearchiterative
#include<iostream>
using namespace std;

int binarysearch(int arr[],int n,int x)
{
    int low=0;
    int high =n-1;
    

    while(low<=high)
    {
      int mid= low+ (high-low)/2;
        if(x==arr[mid])
        return mid;
        else if(x<arr[mid])
        high = mid -1;
        else
        low=mid+1;
    }
    return -1;

}

int main()
{
  int array[] = {3, 4, 5, 6, 7, 8, 9};
  int x = 2;
  int n = sizeof(array) / sizeof(array[0]);
  int result = binarysearch(array,n,x);
  if (result == -1)
    cout<<"Not found";
  else
    cout<<"Element is found at index: "<<result;

}