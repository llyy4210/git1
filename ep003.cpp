/*************************************************************************
	> File Name: ep003.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年07月31日 星期二 14时26分40秒
 ************************************************************************/


#include<stdio.h>
#include<inttypes.h>
#define MAX_N 600851475143

int main(){
    int64_t ans, sum = MAX_N, a = 2;
    while(a * a < sum){
        if(sum % a == 0)ans = a;
       while(sum % a ==0) sum /= a;
        a += 1;
    }
    if(sum != 1)ans = sum;
    printf("%"PRId64"\n",ans);
    return 0;
}
