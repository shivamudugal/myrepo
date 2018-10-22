#include <stdio.h>

int N;				
int P[310];		
int sol;				
int D[310];		

int main(void){
	int i;
	scanf("%d", &N);
	for (i = 0; i < N; i++) scanf("%d", &P[i]);

	D[0] = 0; 
	D[1] = P[0]; 
	D[2] = P[0] + P[1];
	
	for (i = 3; i <= N; i++){
		D[i] = D[i - 2] + P[i-1];		
		if (D[i] < D[i - 3] + P[i - 2] + P[i-1]){
			D[i] = D[i - 3] + P[i - 2] + P[i-1];
		} 
	}
	sol = D[N];		

    printf("%d", sol);	
    return 0;
}