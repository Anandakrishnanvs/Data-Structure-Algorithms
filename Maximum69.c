int maximum69Number (int num)
{
    if(num==9999||num==999||num==99||num==9) return num;
    int *n = malloc(4 * sizeof(int));
    int *nums = malloc(4 * sizeof(int));
    int k=0;
    while(num>0)
    {
        int rem = num%10;
        n[k++]=rem;
        num=num/10;
    } 
    int l=0;
    for(int i=k-1;i>=0;i--)
    {
        nums[l++]=n[i];
    } 
    for(int i=0;i<l;i++)
    {
        printf("%d\t",nums[i]);
    }  
    printf("\n");
    int max=0;
    
        
        for(int j=0;j<k;j++)
        {
            int sum=0;
            int n;
            if(k==4)
            {
                n=1000;
            }
            else if(k==3)
            {
                n=100;
            }
            else if(k==2)
            {
                n=10;
            }
            else
            {
                n=1;
            }
            if(nums[j]==9)
            {
                nums[j]=6;
            }
            else
            {
                nums[j]=9;
            }
            for(int l=0;l<k;l++)
            {
                printf("%d\t",nums[l]);
            }
            printf("\n");
            for(int a=0;a<k;a++)
            {
                sum = sum + (nums[a]*n);
                n = n / 10;
            }
            
            if(max<sum) max = sum;
            if(nums[j]==9)
            {
                nums[j]=6;
            }
            else
            {
                nums[j]=9;
            }
        } 
    return max;
}
