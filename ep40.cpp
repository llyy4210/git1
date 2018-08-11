/*************************************************************************
	> File Name: ep40.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年08月05日 星期日 09时31分28秒
 ************************************************************************/

#include<stdio.h>
#define MAX_N 1000000

int a[MAX_N + 5] = 0;


int solve(int x){
    if(x < 10)return x;
    if(x > 10){
    int digit;
    for(int i = 1; i < 10; i++){
    digit = pow(10,i) - pow(10,i - 1);
    ret += digit * i;
    if(x > ret + 9)continue;
        x - 9 % pow(10,i) % i
    }
