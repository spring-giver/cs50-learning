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
    for(int i=0;s[i]!='\0';i++)
    {
        s[i]=toupper(s[i]);
    }

    int sum=0;
    int length=strlen(s);

    string ls[]={"A1","B3","C3","D2","E1","F4","G2","H4","I1","J8","K5","L1","M3","N1","O1","P3","Q10","R1","S1","T1","U1","V4","W4","X8","Y4","Z10"};

    for(int i=0;i<length;i++)
    {
        for(int j=0;j<26;j++)
        {
            if(s[i]==ls[j][0])
            {
                if(s[i]=='Q')
                {
                    sum+=10;
                    break;
                }
                else
                {
                    sum+=ls[j][1]-'0';
                    break;
                }

            }
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
