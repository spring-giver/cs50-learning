#include <cs50.h>
#include <ctype.h> // 调用isalpha（）函数，判断是否为字母
#include <math.h> // 调用roud（）函数，四舍五入
#include <stdio.h>
#include <string.h> // 调用strlen（）函数，计算文本字符数（即文本长度）

int judge(string s);

/*我需要一个函数round来实现四舍五入功能；
一个judge函数实现判断年纪水平；
一个if-else来实现16+

*/
int main(void)
{
    string text = get_string("Text:");

    int n = judge(text); // judge返回计算出的年纪水平

    if (n < 1)
    {
        printf("Before Grade 1\n");
    }
    else if (n >= 16)
    {
        printf("Grade 16+\n");
    }
    else
    {
        printf("Grade %d\n", n);
        
    }
}

int judge(string s)
{
    int num_word = 1;
    int num_char = 0;
    int num_sentence = 0;

    int n = strlen(s);

    for (int i = 0; i < n; i++)
    {
        if (isalpha(s[i]))
        {
            num_char += 1;
        }
        else if (s[i] == ' ' && s[i - 1] != ' ' && i > 0)
        /*我通过空格来判断单词个数，但如果遇见连续空格就不行。
        所以设定了当s[i]为空格且s[i-1]为空格时，num_word才加1*/
        {
            num_word += 1;
        }
        else if (s[i] == '.' || s[i] == '!' || s[i] == '?')
        /*
        对于判断句子个数，不要忽略叹号和问号的情况
        */
        {
            num_sentence += 1;
        }
    }

    /*
    计算除法，特别注意num_word是从1开始计数，不能从0开始，
    避免特殊情况造成除以0的错误。
    同时整型相除转换成浮点型计算
    */
    float L = (float) num_char / num_word * 100;
    float S = (float) num_sentence / num_word * 100;

    return round(0.0588 * L - 0.296 * S - 15.8);
}
