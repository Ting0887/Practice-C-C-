#include<stdio.h>
#include<stdlib.h>

int max(int a[],int n);
int main(){
	int arr[5],t,i;
	for(i=0;i<5;i++){
		printf("�п�J�}�Carr[%d]������: ",i);
		scanf("%d",&arr[i]);
	}
	for(i=0;i<5;i++){
		printf("arr[%d]=%d\n",i,arr[i]);
		t = max(arr,i);
	}
	printf("���}�C�̤j�Ȭ�%d",t);
} 

int max(int a[], int n){
	int k,M;
	M = a[0];  
	for(k=1;k<5;k++){
		if (a[k] > M)
		   M = a[k];
	}
	return M;
}


