#include<stdio.h>
#include<string.h>

/*typedef enum {apple, banana, orange, pineapple,mango}*/

int f1(int a,int b){
    if ((a==b)|(a>b)){
        return a&b;
    }
    else if((a!=b)&&(a<b)){
        return a^b;
    }
    else{
        return a|b;
    }
}

int main(){
    printf("%d\n",f1(3,2));
}
