#include<stdio.h>
#include<stdlib.h>
int main(){
	double arr[2][3],total=0.0;
	int i,j;
	for(i=0;i<2;i++){
		for(j=0;j<3;j++){
			printf("�п�Jarr[%d][%d]����:",i,j);
			scanf("%lf",&arr[i][j]);
			total += arr[i][j];
		}
	}
	printf("�`�X��%.2f",total);
}
