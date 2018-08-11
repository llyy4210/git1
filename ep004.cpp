/*************************************************************************
	> File Name: ep004.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年07月31日 星期二 14时57分39秒
 ************************************************************************/

#include<stdio.h>

bool chack(int a){
    int b = a, x = 0;
    while(a){
        x = x * 10 + a % 10;
        a /= 10;
    }
    return b == x;
}

int main(){
    int ans = 0;
    for(int i = 100; i < 1000; i++){
        for(int j = 100; j < 1000; j++){

            if(chack(i * j) && i * j > ans)ans = i * j;
    }
}
    printf("%d\n",ans);

    return 0;
}
