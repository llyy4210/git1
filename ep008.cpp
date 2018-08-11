/*************************************************************************
	> File Name: ep008.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年07月31日 星期二 17时02分46秒
 ************************************************************************/

#include<stdio.h>
#include<inttypes.h>
#include<string.h>

char num[1005] = {0}, temp[1005] = {0};

int main(){
    while(scanf("%s",temp) != EOF){
        strcat(num,temp);
    }
    int64_t p = 1, ans = 0, zero = 0;
    for(int64_t i = 1; num[i]; i++){
        if(num[i] == '0'){
            zero++;
        }else{
            p *= (num[i] - '0');
        }
        if(i >= 13){
            if(num[i - 13] == 0){
                zero++;
            }else{
                p /= (num[i - 13] - '0');
            }
        }
        if(zero == 0 && p > ans)ans = p;
    }
    printf("%"PRId64"\n",ans);



    return 0;
}
