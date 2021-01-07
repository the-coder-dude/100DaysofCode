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


int lastIndex(int input[], int size, int x)
{
    if (size == 0)
    {
      return -1;
    }

    int answer = lastIndex(input + 1, size - 1, x);

    if (answer != -1)
    {
      return answer + 1;
    }

    if (input[0] == x)
    {
      return 0;
    }
    else
    {
      return -1;
    }
}

int main()
{
    int input[10];
    int x ;
    int size;
    cin>>size;
    
    for(int i = 0; i<size;i++){
        cin>>i[input];
    }

    cin>>x;

    cout << lastIndex(input, size, x);
    
    return 0;
}