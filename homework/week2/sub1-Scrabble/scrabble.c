#include<stdio.h>
#include<cs50.h>
#include<string.h>
#include<ctype.h>

int judge_s(string s);
void compare(int n1,int n2);

int main(void)
{
    string s1=get_string("Player 1:");
    string s2=get_string("Player 2:");

    int n1=judge_s(s1);
    int n2=judge_s(s2);

    compare(n1,n2);
}

int judge_s(string s)
{
    int sum = 0;

    int values[] = {1,3,3,2,1,4,2,4,1,8,5,1,3,1,1,3,10,1,1,1,1,4,4,8,4,10};
    int n=strlen(s);

    for (int i = 0; i < n; i++)
    {
        char c = toupper(s[i]);

        if (isalpha(c))
        {
            sum += values[c - 'A'];
        }
    }
    return sum;

}

void compare(int n1,int n2)
{
    if(n1>n2)
    {
        printf("Player 1 wins!\n");
    }
    else if(n1<n2)
    {
        printf("Player 2 wins!\n");
    }
    else
    {
        printf("Tie!\n");
    }
}
