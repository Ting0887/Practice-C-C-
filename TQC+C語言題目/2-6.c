#include<stdio.h>
#include<stdlib.h>

int main(){
	int i=1,total=0;
	while(i<=100){
		total += i;
		i+=1;//�]��i�q1�}�l�A�ҥH�n���[��total�A�A��i++�A�_�h�|��1
	}
	printf("1�[��100���`�X:%d\n",total);
	system("PAUSE");
	return 0;
}
