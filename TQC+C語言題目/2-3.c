#include<stdio.h>
#include<stdlib.h>

int main(){
	int floor;
	printf("�аݱz����@�h��(1-4): ");
	scanf("%d",&floor);
	switch(floor)
	{
		case 1:printf("�z��b�@��\n"); //"case:"�᭱�n��"break;"������
		break;
		case 2:printf("�z��b�G��\n");
		break;
		case 3:printf("�z��b�T��\n");
		break;
		case 4:printf("�z��b�|��\n");
		break;
		default:printf("�z��J���Ӽh�����T"); //default�᭱�n�[�_��":"
	}
	system("PAUSE");
	return 0;
}
