#include<stdio.h>
#include<stdlib.h>

int main(){
	int i=1,total=0;
	while(i<=100){
		total += i;
		i+=1;//因為i從1開始，所以要先加到total，再做i++，否則會少1
	}
	printf("1加到100的總合:%d\n",total);
	system("PAUSE");
	return 0;
}
