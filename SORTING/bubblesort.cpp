// bubble sort
#include<iostream>
using namespace std;

void bubblesort(int a[],int size)
{
    for(int step=0;step<size;step++)
    {
        for(int i=0;i<size-step;i++)
        {
            if(a[i]>a[i+1])
            {
                int temp = a[i];
                a[i] =a[i+1];
                a[i+1] =temp;
            }
        }
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
  
  bubblesort(data, size);
  
  cout << "Sorted Array in Ascending Order:\n";  
  printArray(data, size);
}


