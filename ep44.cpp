/*************************************************************************
	> File Name: ep44.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年07月27日 星期五 15时55分02秒
 ************************************************************************/

#include<stdio.h>

int pen(int n){
    return n * (3 * n - 1)/2;
}

int is_pen(int x){
    int head = 1, tail = 10000, mid;
    while(head <= tail){
        mid = (head + tail) >> 1;
        if(pen(mid) == x) return 1;
        if(pen(mid) > x) tail = mid - 1;
        else head = mid + 1;
    }
    return 0;
}

int main(){
    int i = 1,j = 1; ans = INT32_MAX;




    return 0;
}
