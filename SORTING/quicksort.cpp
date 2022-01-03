// QUICK SORT
#include<iostream>
using namespace std;

void swap(int*a, int *b)
{
    int t=*a;
    *a=*b;
    *b=t;
}

void printarr(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

int partition(int a[],int start,int end)
{
    int pivot =a[end];
    int pindex=start;

    for(int i=start;i<end;i++)
    {
        if(a[i]<=pivot)
        {
            swap(&a[i],&a[pindex]);
            pindex++;
        }

    }

    swap(&a[pindex],&a[end]);

    return (pindex);
}

void quicksort(int a[],int start,int end)
{
    if(start<end)
    {
        int pindex = partition(a,start,end);
        quicksort(a,start,pindex-1);
        quicksort(a,pindex+1,end);
    }
}

int main()
{
    int data[] = {8, 7, 6, 1, 0, 9, 2};
  int n = sizeof(data) / sizeof(data[0]);
  
  cout << "Unsorted Array: \n";
  printarr(data, n);
  
  // perform quicksort on data
  quicksort(data, 0, n - 1);
  
  cout << "Sorted array in ascending order: \n";
  printarr(data, n);

  return 0;
}