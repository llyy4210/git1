/*************************************************************************
	> File Name: ep032.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年08月01日 星期三 12时27分43秒
 ************************************************************************/

#include<stdio.h>
#include<math.h>
int get_digit(int x){
    return log10(x) + 1;
}


int is_p(int x, int y, int z){
    int a[10] = {0};
    if(digit(x) == 0)return 0;
    if(digit(y) == 0)return 0;
    if(digit(z) == 0)return 0;
    
    return 1;
}

int main(){
    int ans = 0;
    for(int i = 2; digit(i) + digit(i) + digit(i * i) <= 9; i++){
        for(int j = i + 1; digit(i) + digit(j) + digit(i * j);j++){
            if(digit(i) + digit(j) + digit(i * j) < 9)continue;
            ans += i * j;
            
        }
    }
    printf("%d",ans);
    return 0;
}
