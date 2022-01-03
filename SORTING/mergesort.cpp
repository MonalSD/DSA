// merge sort
#include<iostream>
using namespace std;
//merge two arrays L & M into arr
void merge(int a[],int p,int q,int r)
{
    int L[100];
    int M[150];
    int n1=q-p+1;
    int n2=r-q;
    L[n1],M[n2];

    for(int i=0;i<n1;i++)
    L[i]=a[p+i];

    for(int j=0;j<n2;j++)
    M[j]=a[q+1+j];

    int i,j,k;
    i=0;
    j=0;
    k=p;

    while(i<n1 && j<n2)
    {
        if(L[i]<=M[j])
        {
            a[k]=L[i];
            i++;
        }

        else{
            a[k]=M[j];
            j++;
        }
        k++;
    }

    while(i<n1){
        a[k] =L[i];
        i++;
        k++;
    }

    while(j<n2){
        a[k]=M[j];
        j++;
        k++;
    }
}

//sort
void mergesort(int a[],int l,int r)
{
    if(l<r){
        int m=1+(r-1)/2;

        mergesort(a,l,m);
        mergesort(a,m+1,r);

        merge(a,l,m,r);
    }
}

// Print the array
void printArray(int a[], int size) {
  for (int i = 0; i < size; i++)
    cout << a[i] << " ";
  cout << endl;
}

int main() {
  int arr[] = {6, 5, 12, 10, 9, 1};
  int size = sizeof(arr) / sizeof(arr[0]);

  mergesort(arr, 0, size - 1);

  cout << "Sorted array: \n";
  printArray(arr, size);
  return 0;
}
