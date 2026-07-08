void reverseString(char* s, int sSize)
{
    int k=0;
    char *str1 = malloc(sSize * sizeof(char));
    for(int i=sSize-1;i>=0;i--)
    {
        str1[k++]=s[i];
    }
    int l=0;
    for(int i=0;i<k;i++)
    {
        s[l++]=str1[i];
    }
    free(str1);
}