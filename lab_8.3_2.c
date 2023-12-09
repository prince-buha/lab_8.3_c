#include<stdio.h>
void main(){
	int i,j,r,c;
	printf("Enter the Array's Row: ");
	scanf("%d",&r);
	printf("\nEnter the Array's Column: ");
	scanf("%d",&c);
	int a[r][c];
	printf("\nEnter A's' elements\n");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("Element A[%d][%d] :",i,j);
			scanf("%d",&a[i][j]);
		}
		printf("\n");
	}
	int b[r][c];
	printf("\nEnter B''s elements\n");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("Element B[%d][%d] :",i,j);
			scanf("%d",&b[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("%d ",b[i][j]);
	}
		printf("\n");
	}
	int d[r][c];
	printf(" the answer is :- \n");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			d[i][j]=a[i][j]+b[i][j];
			printf("%d ",d[i][j]);
		}
		printf("\n");
	}
}
