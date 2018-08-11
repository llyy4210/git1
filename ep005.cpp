/*************************************************************************
	> File Name: ep005.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年07月31日 星期二 16时32分58秒
 ************************************************************************/

#include<stdio.h>
#include<inttypes.h>
#include<stdlib.h>
int64_t gcd(int64_t a, int64_t b){
    if(!b)return a;
    return gcd(b, a % b);
}

int main(){
    int64_t ans = 1;
    for(int64_t i = 1;i <= 20; i++){
        ans *= i / gcd(i,ans);
    }
    printf("%"PRId64"\n",ans);


    return 0;
}
