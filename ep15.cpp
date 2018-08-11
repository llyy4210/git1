/***************************i************************************
	> File Name: ep15.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年07月29日 星期日 11时38分56秒
 ************************************************************************/

#include<stdio.h>
#include<inttypes.h>
#include<stdlib.h>

int main(){
    int64_t ans = 1,n = 20;
    for(int64_t m = 40; m > 20; m--){
        ans *= m;
        while(ans % n == 0 && n != 1){ 
        ans /= n;
        n--;
        }
    }
    printf("%"PRId64"\n", ans);


    return 0;
}
