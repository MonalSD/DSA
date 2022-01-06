// Binary Search: Find count of an element
#include<iostream>
using namespace std;

int binary(int arr[],int n, int x,bool searchFirst)
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
            if(searchFirst)
              high = mid-1;
            else
              low =mid+1;
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
    int array[] = {1,1,3,3,5,5,5,5,5,9,9,11};
  int x = 5;
  int n = sizeof(array) / sizeof(array[0]);
  int firstIndex = binary(array,n,x,true);
  if(firstIndex == -1) 
  {
      cout<<"Count of "<<x<<" is "<< 0;
  }
  else
  {
      int lastIndex = binary(array,n,x,false);
      cout<<"count of "<<x<<" is "<<lastIndex - firstIndex +1;
  }
  

}