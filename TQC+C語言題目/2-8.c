#include<stdio.h>
#include<stdlib.h>

int main(){
	int i,total=0;
	for(i=0;i<=100;i++){
		if(i%2==0){
			total += i;
		}
	}
	printf("1��100�����ƩM: %d\n",total);
	system("PAUSE");
	return 0;
}
