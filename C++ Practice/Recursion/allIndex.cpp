#include<bits/stdc++.h>
using namespace std;

typedef vector <int> vi;
typedef pair< int ,int > pii;
#define endl "\n"
#define sd(val) scanf("%d",&val)
#define ss(val) scanf("%s",&val)
#define sl(val) scanf("%lld",&val)
#define debug(val) printf("check%d\n",val)
#define all(v) v.begin(),v.end()
#define PB push_back
#define MP make_pair
#define FF first
#define SS second
#define ll long long
#define MOD 1000000007
#define clr(val) memset(val,0,sizeof(val))
#define what_is(x) cerr << #x << " is " << x << endl; 
#define OJ \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);
#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);


int AllIndexesRecursive(int input[], int size, int x, int output[]) 
{ 
	
	if (size == 0) { 
		return 0; 
	} 

	
	int smallAns = AllIndexesRecursive(input + 1, size - 1, x, output); 

	
	if (input[0] == x) { 
		for (int i = smallAns - 1; i >= 0; i--) { 
			output[i + 1] = output[i] + 1; 
		} 

		output[0] = 0; 
		smallAns++; 
	} 
	else { 
		
		for (int i = smallAns - 1; i >= 0; i--) { 
			output[i] = output[i] + 1; 
		} 
	} 
	return smallAns; 
} 

void AllIndexes(int input[], int n, int x) 
{ 
	int output[n]; 
	int size = AllIndexesRecursive(input, n, 
								x, output); 
	for (int i = 0; i < size; i++) { 
		cout << output[i] << " "; 
	} 
} 

int main() 
{ 
	 int arr[100];
    int x ;
    int size;
    cin>>size;
    
    for(int i = 0; i<size;i++){
        cin>>i[arr];
    }

    cin>>x;
	
	
	AllIndexes(arr, size, x); 
	
	return 0; 
} 
