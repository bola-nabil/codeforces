#include<bits/stdc++.h>
using namespace std;
int n,k,L[210],R[210],vis[210],T;
 
void solve(){
	int ans=0;
	cin>>n>>k;
	memset(vis,0,sizeof(vis));
	for(int i=0;i<k;i++){
		cin>>L[i]>>R[i];
		if(L[i]>R[i]) swap(L[i],R[i]);
		vis[L[i]]=vis[R[i]]=1;
	} 
	for(int i=0;i<k;i++){
		for(int j=i+1;j<k;j++){
			int a=(L[j]>L[i]&&L[j]<R[i]);
			int b=(R[j]>L[i]&&R[j]<R[i]);
			ans+=(a!=b);
		}
		int a=0,b=0;
		for(int j=L[i];j<=R[i];j++) a+=(vis[j]==0);
		for(int j=1;j<=L[i];j++) b+=(vis[j]==0);
		for(int j=R[i];j<=(n<<1);j++) b+=(vis[j]==0);
		ans+=min(a,b);
	}
	for(int i=0;i<n-k;i++) ans+=i;
	cout<<ans<<"\n";
}
 
int main(){
	ios::sync_with_stdio(false);
	for(cin>>T;T;T--) solve();
}