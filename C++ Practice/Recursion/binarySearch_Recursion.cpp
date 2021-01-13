#include <iostream>

using namespace std;

int BinarySearch(int arr[], int key, int beg, int end)
{
 int mid;
 
 if (beg > end){
  
  cout <<  "number is not found";
  return 0;
  
 } else {
  
  mid = (beg + end) / 2;
  
  if(arr[mid] == key){
   
   cout <<  "number is found at " << mid << " index \n";
   return 0;
  
  } else if  (key > arr[mid]) {
   
   BinarySearch (arr, key, mid+1, end);
   
  } else if  (key < arr[mid]) {
   
   BinarySearch (arr, key, beg , mid-1);
  }
 }
 
 
}
 
int main() {
 
 int arr[100], key, i, n, beg, end;
 
 cin >> n;
 
 for(i=0; i<n; i++) {
  
  cin >> arr[i];
 }
 
 cin >> key;
 
 beg = 0;
 end = n-1;
 
 BinarySearch (arr, key, beg, end);
 
 return 0;
}