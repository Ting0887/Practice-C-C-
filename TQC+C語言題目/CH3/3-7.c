#include<stdio.h>
#include<stdlib.h>
int main(){
	double arr[2][3],total=0.0;
	int i,j;
	for(i=0;i<2;i++){
		for(j=0;j<3;j++){
			printf("請輸入arr[%d][%d]的值:",i,j);
			scanf("%lf",&arr[i][j]);
			total += arr[i][j];
		}
	}
	printf("總合為%.2f",total);
}
