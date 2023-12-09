#include<stdio.h>
void main(){
	int r,c,i,j,rc;
	float total=0;
	float avg;
	printf("Enter the Array's Row: ");
	scanf("%d",&r);
	printf("\nEnter the Array's Column: ");
	scanf("%d",&c);
	int a[r][c];
	printf("\nEnter Array's elements\n");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("Element A[%d][%d] :",i,j);
			scanf("%d",&a[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("%d\n",a[i][j]);
			total+=a[i][j];
		}
		printf("\n");
	}
	rc=r+c;
	avg=total/rc;
	printf("\nAverage of The Array is: %f",avg);
	
}
