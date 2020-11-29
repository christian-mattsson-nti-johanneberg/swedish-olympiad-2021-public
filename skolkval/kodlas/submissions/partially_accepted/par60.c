#include <stdio.h>

int N,M, p[15];
char map[15][16];

int MLX(int nr) {
	int s,i,j;
	for(j=0;j<M;j++) {
		for(i=0;i<nr;i++) if(map[i][(j+p[i])%M]=='#') break;
		if(i==nr) break; //Hole found
	}
	if(j==M) return 0;
	if(nr==N) return 1;
	s=0;
	for(p[nr]=0;p[nr]<M;p[nr]++) s+=MLX(nr+1);
	return s;
}
		



int main() {
	int i;
	scanf("%d %d", &N, &M);
	for(i=0;i<N;i++) {
		scanf("%s", map[i]);
		p[i]=0;
	}
	printf("%d\n", MLX(0));
	return 0;
}