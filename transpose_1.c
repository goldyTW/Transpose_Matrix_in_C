#include<stdio.h>
main(){
	int n,m;		//jumlah bilangan
	int i,j;
	int temp;
	
	printf("");
	scanf("%d",&m);
	scanf("%d",&n);
	int baris[n][m];
	
	if (n>=1 && n<=100 && m>=1 && m<=100){
		printf("");
		for (j=0; j<m; j++){
			for (i=0; i<n; i++){
				scanf("%d", &baris[i][j]);
			}
		}
	
		printf("\n");
	
		for (j=0; j<n; j++){
			for (i=0; i<m; i++){
				printf("%d ", baris[j][i]);
			}
			printf("\n");
		}
	}
		
	return 0;
}

