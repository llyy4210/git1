/*************************************************************************
	> File Name: ep033.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年08月01日 星期三 13时09分28秒
 ************************************************************************/

#include<stdio.h>
#include<math.h>

int gcd(int x,int y){
    if(!y)return x;
    return gcd(y,x % y);
}

int main(){
    int ans1 = 1, ans2 = 1;
    for(int i = 20.00; i < 100; i++){
        for(int j = i + 1; j < 100; j++){
            if(gcd(i,j) == 1)continue;
            if(i % 10 == 0 || i / 10 == 0 || j % 10 == 0 || j / 10 == 0)continue;
            if((i % 10) == (j /10) && ((i / 10) / (j % 10)) == (i / j)){
                ans1 *= (j % 10);
                ans2 *= (i / 10);
            }
            if((i % 10) == (j % 10) && ((i / 10) / (j / 10)) == (i / j)){
                ans1 *= (j / 10); 
                ans2 *= (i / 10);
            }
            if((i / 10) == (j % 10) && ((i % 10) / (j / 10)) == (i / j)){
                ans1 *= (j / 10);  
                ans2 *= (i % 10);
            }
            if((i / 10) == (j / 10) && ((i % 10) / (j % 10)) == (i / j)){
                ans1 *= (j % 10);  
                ans2 *= (i % 10);
            }
            printf("%d %d\n",i,j);
            continue;
        }
    }
    int ans = 0;
    if(gcd(ans1,ans2) == 1){
        for(int i = ans2; i > 1; i--){
            if(ans1 % i == 0 && ans2 % i == 0){
                ans = ans2 / i;
                printf("%d",ans);
            }
            continue;
        }
    }else{
        printf("%d",ans2);
    }

    return 0;
}
