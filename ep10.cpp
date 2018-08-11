/*************************************************************************
	> File Name: ep10.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年07月26日 星期四 16时51分10秒
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<inttypes.h>
#define MAX_N 2000000

int32_t prime[MAX_N + 5] = {0};

int main(){
    int64_t sum = 0;
    for(int32_t i = 2; i <= MAX_N; i++){
        if(!prime[i]){
        prime[++prime[0]] = i;
        sum += i;    
    }
        for(int32_t j = 1; j <= prime[0] && i * prime[j] <= MAX_N; j++){
            prime[i * prime[j]] = 1;
            if(i % prime[j] == 0)break;
        }
    }
    printf("%"PRId64"\n",sum);

    return 0;
}
