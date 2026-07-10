char* restoreString(char* s, int* indices, int indicesSize)
{
    char* str1 = (char*)malloc(indicesSize + 1);
    char c;
    int index;
    for(int i=0;i<indicesSize;i++)
    {
        str1[indices[i]]=s[i];
    }
    str1[indicesSize] = '\0';
    return str1;
}