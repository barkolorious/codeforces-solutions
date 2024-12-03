#include<iostream>
#include<math.h>
#include<algorithm>
#include<stdio.h>
#include<map>
#include<vector>
#include<set>
#include<iomanip>
#define F first
#define S second
#define P system("PAUSE");
#define H return 0;
#define pb push_back
using namespace std;
const long long A=100000000000000LL,N=228228;
 
char e[21];
vector<string> ot;
pair<int,pair<int,string> > a[N];
long long o,p[3]={-1,-1,-1};
int i,j,l,r,n,m;
 
int main(){
	cin>>n>>m;
	for(i=0;i<n;++i){
	    scanf("%d%d",&a[i].F,&a[i].S.F);
	    a[i].S.S=e;
	}
	sort(a,a+n);
	for(l=0;l<n;o-=a[l].S.F,++l){
		while(r<n && abs(a[l].F-a[r].F)<m)o+=a[r].S.F,++r;
		if(o>=p[0])p[0]=o,p[1]=l,p[2]=r;
	}
	for(i=p[1];i<p[2];++i)ot.pb(a[i].S.S);
	cout<<p[0]<<"\n";
}