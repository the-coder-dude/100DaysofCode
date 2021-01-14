#include <stdio.h> 

void combinationUtil(int arr[], int n, int r, int index, int data[], int i); 


void printCombination(int arr[], int n, int r) 
{ 
	int data[r]; 

    combinationUtil(arr, n, r, 0, data, 0); 
} 


void combinationUtil(int arr[], int n, int r, int index, 
					int data[], int i) 
{ 
	if (index == r) { 
		for (int j = 0; j < r; j++) 
			printf("%d ", data[j]); 
		printf("\n"); 
		return; 
	} 


	if (i >= n) 
		return; 

	data[index] = arr[i]; 
	combinationUtil(arr, n, r, index + 1, data, i + 1); 
 
	combinationUtil(arr, n, r, index, data, i + 1); 
} 


int main() 
{ 
	int arr[1000];

	int r; 
	int n; 

    cin>>n;

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }


	printCombination(arr, n, r); 
	return 0; 
} 
