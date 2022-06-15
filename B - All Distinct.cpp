#include<bits/stdc++.h>

using namespace std;
const int N=100010;
int a[N],book[N];
int main()
{
	int i,j,n,m,t;
	scanf("%d",&t);
	while(t--)
	{
		memset(book,0,sizeof(book));
		scanf("%d",&n);
		m=0;
		for(i=1;i<=n;i++)
		{
			scanf("%d",&a[i]);
			if(book[a[i]]==0) book[a[i]]=1;
			else m++;
		}
		if(m%2) m++;
		printf("%d\n",n-m);
	}
	return 0;
}
