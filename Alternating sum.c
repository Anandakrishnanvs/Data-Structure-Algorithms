int alternatingSum(int* nums, int numsSize)
{
    int oddsum=0,evensum=0;
    for(int i=0;i<numsSize;i++)
    {
        if(i%2==0)
        {
            evensum += nums[i];
        }
        else
        {
            oddsum += nums[i];
        }
    }    
    int result = evensum-oddsum;
    return result;
}
