#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int length(char * s);
int main()
{
    char word[] = "abcabcd";
    printf("%d",length(word));
    return 0;
}
int length(char * s)
{
    int lastindex[256];
    int start=0;
    int max=0;
    memset(lastindex,-1,sizeof(lastindex));
    for(int i=0;s[i]!='\0';i++)
    {
        unsigned char c = (unsigned char)s[i] ;
        if (lastindex[c] >= start)
        {
            start = lastindex[c] + 1;
        }
        int cur = i - start + 1;
        if(cur > max)
        {
            max=cur;
        }
        lastindex[c] = i;
        
    }
    
    return max;
}
