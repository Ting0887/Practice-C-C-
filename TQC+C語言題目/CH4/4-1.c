#include<stdio.h>
#include<stdlib.h>

int main(){
	int num=100, *pointer;
	pointer = &num; //����Ц�}�s�i�h,�ɤW"&"
	printf("num=%d, *pointer=%d\n",num,*pointer);
	system("PAUSE");
	return 0;
}
