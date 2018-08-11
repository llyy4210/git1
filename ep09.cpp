/*************************************************************************
    > File Name: ep09.cpp
    > Author: 
    > Mail: 
    > Created Time: 2018年07月30日 星期一 14时56分28秒
 ************************************************************************/

#include<stdio.h>

int main(){
    int a, b, c;
    for(int n = 2; n <= 30; ++n){
        for(int m = n + 1; m <= 35; ++m){
            a = 2 * m * n;
            b = m * m - n * n;
            c = m * m + n * n;
        if((a + b + c) == 1000) 
            printf("%d",a * b * c);   
        
        }
    }
    return 0;
}
