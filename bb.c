#include <stdio.h>
void tyf();
int main(void)
{
    int num;
    printf("Hi,babe!\n");
    printf("How do you feel today?\n");
    printf("Pleas enter 1 to 10\n");
    printf("I fell ");
    scanf("%d",&num);

    if(num == 10)
    {
        printf("I know you are the best! :) \n");
    }
    
    else if(num == 9)
    {
        printf("Life always like that,right? ^_^ \n");
    }

    else if(num == 8)
    {
        printf("I think you are so tired now,and you need a big hug.\n");
    }

    else if(num == 7)
    {
        printf("7 is a wonderful number,isn't it?\n");
        printf("but the only deferent is, you are perfect.\n");
    }

    else if(num == 6)
    {
        printf("I like 6,is for a good maining\n");
        printf("Hope you will have an better day tomorrow. ^_^ \n");
    }

    else if(num == 5)
    {
        printf("Don't be afarid babe,you know I'm here,just talk to me.\n");
    }

    else if(num == 4)
    {
        printf("Is a bad day huh? \n");
        printf("Tell me what's happend?\n");
    }

    else if(num == 3)
    {
        printf("Oh...My poor lady, I think my babe need a big huge\n");
        printf("Remember whatever is happened,I love you\n");
    }

    else if(num == 2)
    {
        printf("Call me now,babe.\n");
        printf("You need me now.\n");
    }

    else
    {
        printf("I love you.\n");
        tyf();
    }
}
void tyf()
{
    int i, j, k, n = 0, x = 0, y = 50;
 
        printf("\n\n\n\n\n");
        printf("         lovelove                   lovelove\n");
        printf("       lovelovelove               lovelovelove\n");
        printf("     lovelovelovelove           lovelovelovelove\n");
        printf("   lovelovelovelovelove       lovelovelovelovelove\n");
        printf("  lovelovelovelovelovelo     lovelovelovelovelovelo\n");
        printf(" lovelovelovelovelovelove   lovelovelovelovelovelov\n");
        for (i = 0; i < 2; i++)
        {
                printf("lovelovelovelovelovelovelovelovelovelovelovelovelove\n");
 
        }
 
        for(i=0;i<5;i++)
        {
                y = 50;
                y = y - i*2;
                n++;
                for (k = 0; k < n; k++)
                {
                        printf(" ");
                }
                        while(1)
                        {
                                if (x < y)
                                {
                                        printf("l");
                                        y--;
                                }
                                else
                                        break;
                                if (x < y)
                                {
                                        printf("o");
                                        y--;
                                }
                                else
                                        break; if (x < y)
                                {
                                        printf("v");
                                        y--;
                                }
                                        else
                                        break; if (x < y)
                                {
                                        printf("e");
                                        y--;
                                }
                                        else
                                        break;
                        }
                printf("\n");
        }
 
 
        for (i = 0,n=3; i < 10; i++)
        {
                y = 37;
                y = y - i * 4;
                n++;
                for (k = 0; k < n; k++)
                {
                        printf("  ");
                }
                while (1)
                {
                        if (x < y)
                        {
                                printf("l");
                                y--;
                        }
                        else
                                break;
                        if (x < y)
                        {
                                printf("o");
                                y--;
                        }
                        else
                                break; if (x < y)
                        {
                                printf("v");
                                y--;
                        }
                                else
                                break; if (x < y)
                        {
                                printf("e");
                                y--;
                        }
                                else
                                break;
                }
                printf("\n");
        }
 
        printf("\n\n\n\n\n\n\n\n\n\n\n\n");
}