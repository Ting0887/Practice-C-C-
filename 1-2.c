#include<stdio.h>
#include<stdlib.h>

int main(){
    double a,b, total;
    printf("�п�J��ӯB�I��:");//total�ܼƥ��ŧi
    scanf("%lf %lf",&a,&b);
    total = a+b;
    printf("total=%f",total); //�bscanf�ɡA�᭱���ѻݸɤW"&"�Ÿ�
                              //%lf�P%f��X�ɡA���O�B�I�Ƥ��q�A����J�ɡA%lf�N��double�A%f�N��float
    system("PAUSE");
    return 0;
}
