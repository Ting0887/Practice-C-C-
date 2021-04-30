#include<stdio.h>
#include<stdlib.h>

int x,y;
int callTotal();
int main(){
	printf("½Ð¿é¤Jx,yªº­È: ");
	scanf("%d %d",&x,&y);
	int tot = callTotal();
	printf("%d+%d=%d\n",x,y,tot);
	system("PAUSE");
	return 0;
}
int callTotal(){
	x+y;
	return x+y;	
}
 
