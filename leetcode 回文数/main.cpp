//
//  main.cpp
//  leetcode 回文数
//
//  Created by 何忆源 on 2020/4/28.
//  Copyright © 2020 何忆源. All rights reserved.
//

#include <iostream>

void Ishuiwen(){
    int x;
    std::cout<<"请输入要检测的数字"<<std::endl;
    std::cin>>x;
    int re,hw=0,ori;
    ori=x;
    if(x<0){
        std::cout<< "false\n";
    }
    if(x==0){
        std::cout<<"true\n";
    }
    if(x>0)
    {
    while(x!=0){
            re=x%10;//计算个位
            hw=hw*10+re;//计算反序的数字
            x=x/10;//把计算好的个位去除
        }//核心算法
        if(ori==hw){
           std::cout<<"true\n";
        }
        else{
            std::cout<< "false\n";
        }
    }

}
int main(){
    int func_ = 0;
    while( 1 )
    {
        printf(" 回文数检测\n");
        printf("|1: 回文数检测\n");
        printf("|2: 退出程序 \n");
        printf("*******************************\n");
        scanf("%d",&func_);
        switch( func_ )
        {
            case 1 :Ishuiwen();break;//输出回文数判断情况
            case 2 :return 1;//终止代码
        }
    }
}

