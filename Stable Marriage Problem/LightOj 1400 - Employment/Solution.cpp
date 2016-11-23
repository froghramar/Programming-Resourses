#include <stdio.h>
#include <bits/stdc++.h>

using namespace std;
const int N = 205;

int n, c[N][N], p[N][N], m[N], ind[N];

void init(){
	int T;
	scanf("%d",&T);
	for(int t=1; t<=T; t++){
		scanf("%d",&n);
		memset(m,-1,sizeof(m));
		queue < int > q;
		for(int i = 1; i <= n; i++){
			for(int j = 1; j <= n; j++){
				scanf("%d",&c[i][j]);
			}
			q.push(i);
			ind[i] = 1;
		}
		for(int i = 1; i <= n; i++){
			for(int j = 1; j <= n; j++){
				int v;
				scanf("%d",&v);
				p[n + i][v] = j;
			}
		}
		while(!q.empty()){
			int m1 = q.front();
			q.pop();
			int i = m1, j = ind[i], w1 = c[i][j];
			if(m[w1] == -1){
				m[w1] = i;
				m[i] = w1;
				ind[i]++;
			}
			else{
				if(p[w1][i] < p[w1][m[w1]]){
					q.push(m[w1]);
					ind[i]++;
					m[w1] = i;
					m[i] = w1;
				}
				else{
					q.push(i);
					ind[i]++;
				}
			}	
		}
		printf("Case %d:",t);
		for(int i = 1; i <= n; i++){
			printf(" (%d %d)",i,m[i]);
		}
		printf("\n");
	}
}

int main(){
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
	init();
	return 0;
}

