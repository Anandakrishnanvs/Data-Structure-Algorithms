int countConsistentStrings(char * allowed, char ** words, int wordsSize)
{
    int count = 0;
    int flag=0,found=0;
    char *str1 = malloc(wordsSize * sizeof(char));
    int l=0;
    for(int i=0;i<wordsSize;i++)
    {
        flag=1;
        for (int k = 0; words[i][k] != '\0'; k++)
        {
            found=0;
            for(int j=0;allowed[j]!='\0';j++)
            {
                if(words[i][k]==allowed[j])
                {
                   found=1;
                   break;
                }
            }
            if(!found)
            {
                flag=0;
                break;
            }
        }
        if(flag==1)
        {
            count++;
        }
    }
    return count;
}