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


int firstIndex(int input[], int size, int x, int currIndex){
    if(size==currIndex){
        return -1;
    }

    if(input[currIndex] == x){
        return currIndex;
    }

    return firstIndex(input,size,x,currIndex+1);
    
}

int main(){
    OJ;
    FIO;

    int input[10];
    int x ;
    int size;
    cin>>size;
    
    for(int i = 0; i<size;i++){
        cin>>i[input];
    }
    
    cin>>x;

    cout<<firstIndex(input,size,x,0);

    return 0;
}
