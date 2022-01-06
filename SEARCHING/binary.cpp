// binary
#include<iostream>
using namespace std;

int binarysearch(int arr[],int x, int low,int high)
{
    int mid = (low+high)/2;

    if(low>high)
    return -1;

    else
    {
        if(x==arr[mid])
        return mid;

        else if(x>arr[mid])
        return binarysearch(arr,x,mid+1,high);

        else
        return binarysearch(arr,x,low,mid-1);
    } 
}

int main()
{
  int array[] = {3, 4, 5, 6, 7, 8, 9};
  int x = 8;
  int n = sizeof(array) / sizeof(array[0]);
  int result = binarysearch(array, x, 0, n - 1);
  if (result == -1)
    cout<<"Not found";
  else
    cout<<"Element is found at index: "<<result;

}

