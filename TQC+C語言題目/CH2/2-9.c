#include<stdio.h>
#include<stdlib.h>

int main(){
	int i,total=0;
	/*
	for(i=0;i<=100;i++){
		if(i%2!=0){
			total += i;
		}
	}
	*/
	do{
		if(i%2==1)
		total += i;
		i++;
	}while(i<=100); 
	printf("1到100的奇數和: %d\n",total);
	system("PAUSE");
	return 0;
}
