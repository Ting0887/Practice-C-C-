#include<stdio.h>
#include<stdlib.h>

int main(){
	int a,b,c;
	printf("�п�J�ܼ�a����: ");
	scanf("%d",&a);
	printf("�п�J�ܼ�b����: ");
	scanf("%d",&b);
	printf("�п�J�ܼ�c����: ");
	scanf("%d",&c);
	/*
	if(a>=60&&a<100){
        printf("1\n");
	} 
	else{
		printf("0\n");
	}
	
	printf("%f\n",(b+1)/10.0);
	
	if(a>c){
		printf("%d\n",a);
	}
	else{
		printf("%d\n",c);
	}
	*/
	 //�P�_a�O�_�j�󵥩�60�B�p��100�A�Y�O�A�h��X1, �_�h�A��X0
	 printf("%d\n", 60<=a && a<100);//"�B"���Ÿ���"&&"�AC�y�����Atrue�O1�Afalse�O0
	 //���Nb�[1��A�A���H10.
	 printf("%f\n", (b+1)/10.);
	 //�P�_a�O�_�j��c�A�Y�O�A�h�L�Xa�A�_�h�A�L�X
	 printf("%d\n", a>c?a:c);//�P�_��?�O:�_�C�P�_���p�G���ߡA�h���"�O"�A�_�h���"�_"
	 system("PAUSE");
	 return 0;
}
