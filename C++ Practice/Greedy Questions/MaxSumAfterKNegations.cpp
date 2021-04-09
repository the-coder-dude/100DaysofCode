/*

Time Complexity: O(n*logn) 
Auxiliary Space: O(1)

*/

#include <bits/stdc++.h>

using namespace std;

int sol(int arr[], int n, int k)
{
	int sum = 0;
	int i = 0;

	sort(arr, arr + n);
	while (k > 0)
	{
		if (arr[i] >= 0)
			k = 0;
		else
		{
			arr[i] = (-1) * arr[i];
			k = k - 1;
		}
		i++;
		
	}

	for(int j = 0; j < n; j++)
	{
		sum += arr[j];
	}
	return sum;
}

int main()
{
	int arr[] = { -2, 0, 5, -1, 2 };

	int n = sizeof(arr) / sizeof(arr[0]);
	
	cout << sol(arr, n, 4) << endl;

	return 0;
}

