#include<stdio.h>
#include<stdlib.h>
int Max(int *,int n);
int main(){
	int arr[5],max;
	int i;
	for(i=0;i<5;i++){
		printf("�п�Jarr[%d]������:",i);
		scanf("%d",&arr[i]);
	}
	printf("�}�C�������Ȥ��O�p�U:\n");
	for(i=0;i<5;i++){
		printf("arr[%d]=%d\n",i,arr[i]);
	}
	max = Max(arr,i);
	printf("\n���}�C���̤j�Ȭ�%d",max);
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
