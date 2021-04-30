#include<stdlib.h>
#include<stdio.h>

int main(){
	int score;
	printf("叫块眤だ计: ");
	scanf("%d",&score);
	if(score>=60){ 
		printf("の\n");
	}
	else{
		printf("ぃの");
	}
	int x;
	printf("叫块x: ");
	scanf("%d",&x);
	if(x%2==0){
		printf("%d琌案计\n",x);
	} 
 	else{
 		printf("%d琌计",x);
	 }
    system("PAUSE");
    return 0;
} 
