#include <stdio.h>

int N, M;
int TV[100000 + 10];    
int sold[100000 + 10];  
int score[100000 + 10]; 

int same[100000 + 10];  

int main(void)
{
	int i, max;
	int cnt;

	scanf("%d %d", &N, &M);
	for (i = 0; i < N; i++) {
		scanf("%d", &TV[i]);
	}

	for (i = 0; i < N; i++) {
		sold[TV[i]]++;
	}

	cnt = 1;
	same[TV[0]] = 1;
	for (i = 1; i < N; i++) {
		if (TV[i] == TV[i - 1]) cnt++;
		else cnt = 1;
		if (same[TV[i]] < cnt) same[TV[i]] = cnt;
	}

	for (i = 1; i <= M; i++) {
		score[i] = sold[i] * same[i];
	}

	max = 1;
	for (i = 2; i <= M; i++) {
		if(score[i] > score[max]) max = i;
	}

	printf("%d", max);

	return 0;
}
