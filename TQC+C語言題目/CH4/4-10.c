#include<stdio.h>
#include<stdlib.h>
int Max(int *,int x,int y);
int main(){
	int arr[2][3];
	int max,i,j;
	for(i=0;i<2;i++){
		for(j=0;j<3;j++){
			printf("請輸入arr[%d][%d]:",i,j);
			scanf("%d",&arr[i][j]);
		}
	}
	max = Max(arr,2,3);
	printf("此陣列的最大值為%d",max);
}
int Max(int *p,int x,int y){
	int Max_temp = *p;
	int i,j;
	for(i=0;i<x;i++){
		for(j=0;j<y;j++){
			if(Max_temp<*(p+i*y+j)){
	  		  Max_temp=*(p+i*y+j); 
			}
		}
	}
	return Max_temp;
}
