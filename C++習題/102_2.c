#include <stdio.h>
typedef enum
    {red, black=2, yellow, green}
color_t;

int test01(int x){
    int r=1;
    if(x>10){
        r = test01(x%5) + test01(x-5);
    }
    return r;
}

int test02(int p[]){
    int i=1;
    p[0] = 5;
    while(i < 5){
        p[i++] = p[i-1] + 2*i;
    }
    return p[i-2];
}

int test05(int q(int *), int *p){
    return (p[0] + q(p));
}

int test03(){
    int i=0,j=0,k=0;
    for(i=7,j=-1;(i>0)&&(j<5);i--){
        switch(i%4){
            case 0: k=k+(i--);
            case 1: k=k+(i--);break;
            case 2: k=k+(j++);break;
            default: k=k+(i--);break;
        }
    }
    return k;
}

int test04(int A[3][3]){
    int i;
    A[0][2] = A[0][1];
    for(int i=0;i<3;i++){
        A[i][1] = A[A[i][i]][i] + A[i][1];
    }
    return A[1][2];
}

int test06(color_t coco[]){
    int i=0;
    for(int i=0;i<4;i++)
        if(coco[i]==3) return i;
}

int main(){
    int p[5], r[] = {1,2,3,4,5};

    int w[3][3] = {{0,1,1},{1,0,1},{0,1,2}};
    printf("%d\n",test05(test02,r));
    printf("%d\n",test04(w));
    printf("%d\n",test02(p[5]));
    printf("%d\n",test03());
    printf("%d\n",test01(5));
    char color[][7] = {"red","black","yellow","green"};
    color_t co[] = {red,black,yellow,green};
    printf("%s\n",color[test06(co)]);
}
