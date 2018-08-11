/*************************************************************************
	> File Name: ep20.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年07月30日 星期一 17时03分25秒
 ************************************************************************/

#include<stdio.h>
#include<inttypes.h>

int64_t ans[500] = {0};

int main(){
    ans[0] = ans[1] = 1;
    for(int64_t i = 2; i <= 100; i++){
        for(int64_t j = 1; j <= ans[0]; j++)
            ans[j] *= i;
        
        for(int64_t j = 1; j <= ans[0]; j++){
            if(ans[j] < 10)continue;
            ans[j + 1] += ans[j] / 10;
            ans[j] %= 10;
            if (j == ans[0]) ans[0] += 1;

        }
    }
int64_t sum = 0;
    for(int64_t i = 1; i <= ans[0]; i++){
        sum += ans[i];
    }
        printf("%"PRId64"\n",sum);
    return 0;

}
