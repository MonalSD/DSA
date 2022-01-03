// selectionsort
#include<iostream>
using namespace std;

void selection(int a[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        int min = i;
        for(int j=i+1;j<n;j++)
        {
            if(a[j]<a[min])
            min  = j;
        }

        int temp = a[i];
        a[i] = a[min];
        a[min] = temp;
    }
}

void printArray(int array[], int size) {
  for (int i = 0; i < size; ++i) {
    cout << "  " << array[i];
  }
  cout << "\n";
}

int main() {
  int data[] = {-2, 45, 0, 11, -9};
  
  // find array's length
  int size = sizeof(data) / sizeof(data[0]);
  
  selection(data, size);
  
  cout << "Sorted Array in Ascending Order:\n";  
  printArray(data, size);
}