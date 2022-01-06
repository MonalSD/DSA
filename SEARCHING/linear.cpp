// linear search
#include<iostream>
using namespace std;

int search(int arr[],int size,int x)
{
    for(int i=0;i<size;i++)
    {
        if(arr[i]==x)
        return i;
    }
    return -1;
}

int main()
{
  int array[] = {2, 4, 0, 1,1, 9};
  int x = 1;
  int n = sizeof(array) / sizeof(array[0]);

  int result = search(array, n, x);

  (result == -1) ? cout << "Element not found" : cout << "Element found at index: " << result;
}
