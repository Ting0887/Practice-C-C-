#include<stdio.h>
#include<stdlib.h>

int max(int a[],int n);
int main(){
	int arr[5],t,i;
	for(i=0;i<5;i++){
		printf("請輸入陣列arr[%d]元素值: ",i);
		scanf("%d",&arr[i]);
	}
	for(i=0;i<5;i++){
		printf("arr[%d]=%d\n",i,arr[i]);
		t = max(arr,i);
	}
	printf("此陣列最大值為%d",t);
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


