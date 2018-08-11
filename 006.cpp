/*************************************************************************
	> File Name: ep006.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年07月31日 星期二 15时08分00秒
 ************************************************************************/

#include<stdio.h>
int main(){
    int sum1 = 0,sum2 = 0;
    for(int i = 1; i <= 100; i++){
        sum1 += i;
        sum2 += i * i;
    }
    printf("%d\n",sum1 * sum1 - sum2);


    return 0;
}
