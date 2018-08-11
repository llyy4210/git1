/*************************************************************************
	> File Name: ep16.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年07月26日 星期四 17时14分48秒
 ************************************************************************/


#include<stdio.h>

int main(){
    int sum,sum1,sum2,sum3,sum4,sum5,sum6,sum7,sum8;
    sum = 3 + 3 + 5 + 4 + 5 + 3 + 5 + 5 + 4;
    sum1 = sum * 4 + 6 * 40; 
    sum2 = sum * 3 + 5 * 30; 
    sum3 = sum + 4 * 10; 
    sum4 = 70;
    sum5 = 13 * 300 + (sum + sum1 + sum2 + sum3 + sum4) * 3;
    sum6 = 14 * 200 + (sum + sum1 + sum2 + sum3 + sum4) * 2;
    sum7 = 15 * 400 + (sum + sum1 + sum2 + sum3 + sum4) * 4;
    sum8 = 110;
printf("%d\n",sum + sum1 + sum2 + sum3 + sum4 + sum5 + sum6 + sum7 + sum8 - 16);



    return 0;
}
