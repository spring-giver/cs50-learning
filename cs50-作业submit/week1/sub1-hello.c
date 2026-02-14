#include <cs50.h>
#include <stdio.h>

//#include和<cs50.h>中间空格（奇怪的语言规范）

int main(void)
{
    string name = get_string("What's your name?\n");
  
    //创建变量等号左右两端还要有空格
  
    printf("hello, %s\n", name);
    
    //这个逗号','后面也要有空格
}
