#include<stdio.h>

int main(){

	int m,n;
	printf("Moi nhap so hang va cot: ");
	scanf("%d %d",&m, &n);

	int arr[m][n];

	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			printf("Nhap phan tu trong hang thu %d, cot %d: ",i+1,j+1);
			scanf("%d",&arr[i][j]);
		}
	}

	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			printf(" %d",arr[i][j]);
		}
	printf("\n");	
	}
return 0;	
}
