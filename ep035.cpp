/*************************************************************************
	> File Name: ep035.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年08月01日 星期三 14时23分30秒
 ************************************************************************/

#include<stdio.h>
#include<math.h>
#include<inttypes.h>
#define MAX_N 1000000
#define MAX_X 10000000
int64_t isprime[MAX_X + 5] = {0};
int64_t prime[MAX_X + 5] = {0};

void initPrime(){
    for(int64_t i = 2; i <= MAX_X; i++){
        if(!isprime[i])prime[++prime[0]] = i;
        for(int64_t j = 1; j <= prime[0] && prime[j] * i < MAX_X; j++){
            isprime[prime[j] * i] = 1;
            if(i % prime[j] == 0) break;
        }
    }
}

bool is_fan(int64_t n){
    if(isprime[n] != 0)return -1;
    int64_t c = n,a,b;
    a = (int64_t)pow(10,floor(log10(c)));
    b = (int64_t)(floor(log10(c))) + 1;
    for(int64_t i = 0; i < b; i++){
        c = c / 10 + (c % 10) * a;
        if(isprime[c])return -1;
        printf("%"PRId64"\n",c);
    }
    return 1;
}



int main(){
    initPrime();
    int64_t ans = 0;
    for(int64_t i = 1; i <= prime[0]; i++){
        if(prime[i] > MAX_N)break;
        if(is_fan(prime[i]))ans += 1;
    }
    printf("%" PRId64 "\n",ans);
    return 0;
}
