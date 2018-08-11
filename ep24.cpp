/*************************************************************************
	> File Name: ep24.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年08月01日 星期三 12时15分57秒
 ************************************************************************/

#include<stdio.h>

#define MAX_N 10

int dnum[MAX_N] = {0};
int jnum[MAX_N] = {0};

void init(){
    dnum[0] = jnum[0] = 1;
    for(int i = 1; i<= MAX_N; i++){
        dnum[i] = 1;
        jnum[i] = i * jnum[i - 1];
    }
    return ;
}

int get_num(int n, int k){
    int ind = (k / jnum[n]) + 1, i = -1;
    while(ind > 0){
        i++;
        ind -= dnum[i];
    }
    dnum[i] = 0;
    return i;
}

int main(){
    init();
    int n, k;
    scanf("%d%d",&n,&k);
    k--;
    for(int i = n - 1; i >= 0; i--){
        int num = get_num(i,k);
        printf("%d",num);
        k %= jnum[i];
    }
    printf("\n");
    return 0;
}
