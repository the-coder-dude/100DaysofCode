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


bool ispalindromeRecursive(char str[],  
              int s, int e) 
{ 
      
    
    if (s == e) 
    return true; 
  
    if (str[s] != str[e]) 
    return false; 
  
    if (s < e + 1) 
    return ispalindromeRecursive(str, s + 1, e - 1); 
  
    return true; 
} 
  
bool isPalindrome(char str[]) 
{ 
    int n = strlen(str); 
   
    if (n == 0) 
        return true; 
      
    return ispalindromeRecursive(str, 0, n - 1); 
} 
  

int main() 
{ 
    char str[40];

    cin>>str;

    if (isPalindrome(str)) 
        cout << "Yes"; 
    else
        cout << "No"; 
  
    return 0; 
} 