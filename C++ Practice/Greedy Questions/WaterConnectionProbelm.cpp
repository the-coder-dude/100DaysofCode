#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cassert>
#include <cstring>
using namespace std; 
const int nmax=100000+10;
typedef long long ll;
pair<int,int>a[nmax];

bool cmp(const pair<int,int> &a,const pair<int,int> &b){
	 return a.first*b.second < b.first*a.second;  
} 
int main(int argc, char** argv) {
	int n;
	while(cin>>n){
		for(int i=0;i<n;i++){
			 cin>>a[i].first>>a[i].second;
			if(a[i].first==0||a[i].second==0){
				i--;
				n--;
			}
		}
		sort(a,a+n,cmp);

		ll z=0,s=0;
		for(int i=0;i<n;i++){
			s+=a[i].first;
			z+=s*a[i].second;
		}		
		printf("%lld\n",z);
	}
	return 0;
}