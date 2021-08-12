#include<stdio.h>
#include<stdlib.h>

int main(){
	int num=100, *pointer;
	pointer = &num; //把指標位址存進去,補上"&"
	printf("num=%d, *pointer=%d\n",num,*pointer);
	system("PAUSE");
	return 0;
}
