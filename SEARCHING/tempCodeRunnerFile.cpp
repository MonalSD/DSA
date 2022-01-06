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