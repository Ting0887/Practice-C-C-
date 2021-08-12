#include<stdio.h>
#include<stdlib.h>
int sum(int *,int n,int m);

int main(){
	int arr[2][3];
	int *pointer = arr[0];
	int i,j,total;
	for(i=0;i<2;i++){
		for(j=0;j<3;j++){
			printf("請輸入arr[%d][%d]:",i,j);
			scanf("%d",&arr[i][j]);
		}
	}
	total = sum(pointer,2,3);
	printf("此陣列的總和為%d",total);
}

int sum(int *p,int n,int m){
	int i,j,tot=0;
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			tot += *(p+i*m+j);
		}
	}
	return tot;
}
