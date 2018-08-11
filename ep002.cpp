/*************************************************************************
	> File Name: ep002.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年07月31日 星期二 14时06分21秒
 ************************************************************************/

#include<stdio.h>
#include<inttypes.h>
#define MAX_N 4000000
int main(){
    int64_t a = 1,b = 0, sum;
    while(b < MAX_N){
        if(b % 2 == 0)
        sum += b;
        b = a + b;
        a = b - a;
    }
    
printf("%"PRId64"\n",sum);

    return 0;
}
