/*************************************************************************
	> File Name: ep037.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年08月01日 星期三 15时25分39秒
 ************************************************************************/

#include<stdio.h>
#include<inttypes.h>
#include<math.h>
#define MAX_N 5000000

int prime[MAX_N] = {0};

void initPrime(){
    for(int64_t i = 2; i <= MAX_N; i++){
        if(!prime[i])prime[++prime[0]] = i;
        for(int64_t j = 1; j <= prime[0] && prime[j] * i < MAX_N; j++){
            prime[prime[j] * i] = 1;
            if(i % prime[j] == 0) break;
    }
}
}

bool Z(int64_t n){
    if(prime[n])return false;
    int64_t a = n;

    while(a){
       a = a / 10;
        printf("%"PRId64"\n",a);
        if(prime[a]) return false;
    }
    a = n;
    int64_t p =  (int64_t)pow(10,floor(log10(a)));
    while(a){    
    a = a - (a / p) * p;
        if(prime[a])return false;
    }
    return true;
}

int main(){
    initPrime();
    int64_t ans = 0;
    for(int64_t i = 1; i <= prime[0]; i++){
        if(prime[i] < 10)continue;
        if(!Z(prime[i]))ans += prime[i]; 

    }
    printf("%"PRId64"\n",ans);
    return 0;
}
