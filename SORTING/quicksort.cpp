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

int partition(int a[],int r,int p)
{
    int pivot =a[p];
    int i=r-1;

    for(int j=r;j<p;j++)
    {
        if(a[j]<=pivot)
        {
            i++;
            swap(&a[i],&a[j]);
        }

    }

    swap(&a[i+1],&a[p]);

    return (i+1);
}

void quicksort(int a[],int r,int p)
{
    if(r<p)
    {
        int pi=partition(a,r,p);
        quicksort(a,r,pi-1);

        quicksort(a,pi+1,p);
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