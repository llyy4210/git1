/*************************************************************************
	> File Name: ep45.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年07月27日 星期五 15时54分41秒
 ************************************************************************/

#include<stdio.h>
#include<inttypes.h>

int64_t san(int64_t n){
    return n * (n + 1) / 2;
}

int64_t wu(int64_t n){
    return n * (3 * n - 1) / 2;
}

int64_t liu(int64_t n){
    return n * (2 * n - 1);
}

int64_t binary_search(int64_t (*num)(int64_t), int64_t n, int64_t x){
    int64_t head = 0,tail = n - 1, mid;
    while(head <= tail){
        mid = (head + tail) >> 1;
        if(num(mid) == x)return 1;
        if(num(mid) > x) tail = mid - 1;
        else head = mid + 1;
    }
    return -1;
}

int main(){
    int64_t n = 144;
    while(binary_search(wu,2 * n, liu(n)) != 1)n++;
    printf("%"PRId64"\n",liu(n));
    return 0;
}
