long long sumAndMultiply(int n)
{
    
    int *num  = malloc(12 * sizeof(int));
    int *num1 = malloc(12 * sizeof(int));
    int rem=0,k=0; 
    while(n>0)
    {
        rem = n % 10;
        if(rem==0)
        {
            n=n/10;
            continue;
        }
        num[k++]=rem;
        n=n/10;
    }
    int l=0,m=0;
    int tens;
    for(int i=k-1;i>=0;i--)
    {
        num1[l++]=num[i];
       
    }
    int sums=0;
    tens = 1;
    for (int i = 0; i < k-1; i++) tens *= 10;
    for(int i=0;i<l;i++)
    {
        sums+=num1[i]*tens;
        tens=tens/10;
       
    }
    int sum=0;
    for(int i=0;i<l;i++)
    {
        sum+=num1[i];
    }
    
    long long s = (long long)sums*sum;
    free(num);
    free(num1);
    return s;
    
    
}