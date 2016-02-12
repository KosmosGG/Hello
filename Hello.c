/*************************************************************************
	> File Name: Hello.c
	> Author: 
	> Mail: 
	> Created Time: 2016年02月12日 星期五 23时57分04秒
 ************************************************************************/

#include<stdio.h>
int main(void)
{
    int i, j;
    for(i = 0;i < 6;i++)
    {
        for(j = 0;j <= i;j++)
            printf("%c",'A'+ j);
            printf("\n");
    }
    return 0;
}
