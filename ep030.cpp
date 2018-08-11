/*************************************************************************
	> File Name: ep030.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年07月31日 星期二 15时24分26秒
 ************************************************************************/

#include<stdio.h>
#include<math.h>
#define MAX_N 354294
int is_he(int a){
    int b = a, n = 0;
    while(a){
        n +=(int) pow(a % 10 , 5);
        a /= 10;
    }
    return n == b;
}

int main(){
    int ans = 0;
    for(int i = 2; i <= MAX_N; i++){
        if(is_he(i))ans += i;

    }
    printf("%d\n",ans);
    return 0;
}
