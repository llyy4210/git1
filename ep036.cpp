/*************************************************************************
	> File Name: ep036.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年07月31日 星期二 15时47分49秒
 ************************************************************************/

#include<stdio.h>
#define MAX_N 128

int zhuan(int a,int base){
    int n = 0,b = a;
    while(a){
        n = a % base + n * base;
        a /= base;
    }
    return b == n;
}

int main(){
    int sum = 0;
    for(int i = 1; i < 1000000; i++){
        if(!zhuan(i,2))continue;    
        if(!zhuan(i,10))continue; 
        sum += i;
    }
    printf("%d\n",sum);
    return 0;
}
