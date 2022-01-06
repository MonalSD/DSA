// BinarySearch: Finding First and Last Occurence
#include<iostream>
using namespace std;


int binaryfirst(int arr[],int n, int x)
{
    int low=0;
    int high =n-1;
    int result =-1;

    while(low<=high)
    {
        int mid=low+(high-low)/2;

        if(x==arr[mid])
        {
            result = mid;
            high = mid-1;
        }
        else if(x<arr[mid])
        high = mid-1;

        else
        low=mid+1;
    }
    return result;
}

//last occurence
int binarylast(int arr[],int n, int x)
{
    int low=0;
    int high =n-1;
    int result =-1;

    while(low<=high)
    {
        int mid=low+(high-low)/2;

        if(x==arr[mid])
        {
            result = mid;
            low = mid+1;
        }
        else if(x<arr[mid])
        high = mid-1;

        else
        low=mid+1;
    }
    return result;
}

int main()
{
  int array[] = {2, 4, 10, 10, 10, 18, 20};
  int x = 10;
  int n = sizeof(array) / sizeof(array[0]);

  if (binaryfirst(array,n,x) == -1 && binarylast(array,n,x)==-1)
    cout<<"Not found";
  else
    cout<<"Element is found at: "<<endl<<"First Index:"<<binaryfirst(array,n,x)<<endl<<"Last Index: "<<binarylast(array,n,x);

}