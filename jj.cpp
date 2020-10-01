#include <iostream>
#include <t;stdlib.h>
using namespace std;
int main() {
   int n;
   cout << "Enter the array size: "<<endl;
   cin >> n;

   int arr[n], arr1[n], index_arr[n];
   int index;
   cout << "Enter the array elements: "<<endl;
   for (int i = 0; i < n; i++)
   cin >> arr[i];
   for (int i = 0; i < n; i++)
   index_arr[i] = 0;
   for (int i = 0; i < n; i++) {
      do {
         index = rand() % n;
      }
      while (index_arr[index] != 0);
      index_arr[index] = 1;
      arr1[i] = arr[index];
   }
   cout<<"The shuffled array is: ";

   for (int i = 0; i < n; i++)
   cout << arr1[i] << " ";
   return 0;
}