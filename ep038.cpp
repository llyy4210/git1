/*************************************************************************
	> File Name: ep038.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年08月01日 星期三 16时29分45秒
 ************************************************************************/


#include<stdio.h>
#include<math.h>
#include<inttypes.h>

bool shu(int64_t n,int64_t *result){
    int64_t a[10] = {0},num = 0;
    int64_t i = 1,ret = 0,x = n;
    while(num < 9){
        x = i * n;
        while(x){
            if(x % 10 == 0)return false;
            if(a[x % 10])return false;
            a[x % 10] = (++i);
            x /= 10;
        }
        ret *=(int64_t)pow(10,floor(log10(n * i)) + 1);
        ret += n * i;
        i++;
    }
    (*result) = ret;
    return true;
}

int main(){
    bool flag;
    int64_t num,max_num = 0;
    for(int64_t i = 1; i < 10000; i++){
        if(!shu(i,&num))continue;
        if(num > max_num)max_num = num;
    }
    printf("%"PRId64"\n",max_num);
    return 0;
}
