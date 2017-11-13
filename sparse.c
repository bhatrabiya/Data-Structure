#include<stdio.h>
const int n = 4;

void main(){
	int sparse[n][n],info[n][3],i,j,k=0;
	printf("Enter the matrix most of the elements Zero\n");
	for(i = 0; i < n; i++){
		for (j = 0; j < n; j++) {
			scanf("%d ",&sparse[i][j]);
		}
		printf("\n");
	}

	puts("Sparse Matrix \n");
	for(i = 0; i < n; i++){
		for (j = 0; j < n; j++) {
			printf("%5d",sparse[i][j]);
		}
		printf("\n");
	}

	info[k][0] = n;
	info[k][1] = n;
	info[k][2] = 0;
	k++;

	for(i = 0; i < n; i++){
		for (j = 0; j < n; j++) {
			if(sparse[i][j]!=0){
				info[k][0] = i;
				info[k][1] = j;
				info[k][2] = sparse[i][j];
				info[0][2]++;
				k++;
			}
		}
		printf("\n");
	}

	for(i = 0; i < k; i++){
		for (j = 0; j < 3; j++) {
			printf("%5d",info[i][j]);
		}
		printf("\n");
	}
}
