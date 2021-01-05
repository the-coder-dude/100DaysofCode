# include <iostream>

using namespace std;
#define OJ \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);

inline int max(int a, int b){

    return (a>b)? a:b;
}

int main(){

    OJ;

    int a, b;
    cin>>a>>b;

    int c = max(a,b);

    int x,y;

    x = 12;
    y = 34; 

    int z = max(x,y);
    cout<<z;

 }