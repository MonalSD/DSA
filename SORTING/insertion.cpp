// insertion sort
#include<iostream>
using namespace std;

void insertion(int a[],int n)
{
    for(int i=1;i<n;i++)
    {
        int key =a[i];
        int j =i-1;

        while(key<a[j] && j>=0)
        {
            a[j+1] =a[j];
            --j;
        }

        a[j+1] =key;
    }
}

void printArray(int array[], int size) {
  for (int i = 0; i < size; ++i) {
    cout << "  " << array[i];
  }
  cout << "\n";
}

int main() {
  int data[] = {9, 5, 1, 4, 3};
  
  // find array's length
  int size = sizeof(data) / sizeof(data[0]);
  
  insertion(data, size);
  
  cout << "Sorted Array in Ascending Order:\n";  
  printArray(data, size);
}