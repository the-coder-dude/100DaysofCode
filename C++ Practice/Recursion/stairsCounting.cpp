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



class Stairs { 

public: 
	int findStep(int n) 
	{ 
		if (n == 1 || n == 0) 
			return 1; 
		else if (n == 2) 
			return 2; 

		else
			return findStep(n - 3) + findStep(n - 2) + findStep(n - 1); 
	} 
}; 


int main() 
{
    OJ; // For Input and Output File
    FIO; // Fast IO

	Stairs g; 
	int n;
    cin>>n; 
	cout << g.findStep(n); 
	return 0; 
} 


