/*
	Enter the Array's Row: 2

Enter the Array's Column: 2

Enter A's' elements
Element A[0][0] :1
Element A[0][1] :2

Element A[1][0] :3
Element A[1][1] :4


Enter B''s elements
Element B[0][0] :5
Element B[0][1] :6

Element B[1][0] :7
Element B[1][1] :8

1 2
3 4
5 6
7 8
 the answer is :-
6 8
10 12
*/
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
