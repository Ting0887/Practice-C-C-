#include<stdio.h>
#include<stdlib.h>

int main(){
	int floor;
	printf("叫拜眤糷加(1-4): ");
	scanf("%d",&floor);
	switch(floor)
	{
		case 1:printf("眤加\n"); //"case:"璶ノ"break;"暗挡Ю
		break;
		case 2:printf("眤加\n");
		break;
		case 3:printf("眤加\n");
		break;
		case 4:printf("眤加\n");
		break;
		default:printf("眤块加糷ぃタ絋"); //default璶玙腹":"
	}
	system("PAUSE");
	return 0;
}
