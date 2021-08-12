#include<stdio.h>
#include<stdlib.h>
int Max(int *,int n);
int main(){
	int arr[5],max;
	int i;
	for(i=0;i<5;i++){
		printf("請輸入arr[%d]元素值:",i);
		scanf("%d",&arr[i]);
	}
	printf("陣列的元素值分別如下:\n");
	for(i=0;i<5;i++){
		printf("arr[%d]=%d\n",i,arr[i]);
	}
	max = Max(arr,i);
	printf("\n此陣列的最大值為%d",max);
}
int Max(int *p,int n){
	int Max_temp,i;
	Max_temp = *(p+0);
	for(i=1;i<n;i++){
		if(Max_temp < *(p+i)){
			Max_temp = *(p+i);
		}
	}
	return Max_temp;
}
