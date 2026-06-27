#include<stdio.h>
#include<stdlib.h>
int * smallerNumbersThanCurrent(int* nums, int numsSize,int * returnSize);
int main()
{
    int nums[4]={6,5,4,8};
    int numsSize=4,*returnSize;
    int *result = smallerNumbersThanCurrent(nums,numsSize,returnSize);
    for(int i=0;i<*returnSize;i++)
    {
        printf("%d\t",result[i]);
    }

    return 0;
}
int * smallerNumbersThanCurrent(int* nums, int numsSize,int * returnSize)
{
    int count;
    int k=0;
    int * counts = malloc(numsSize * sizeof(int));
    for(int i=0;i<numsSize;i++)
    {
        count=0;
        for(int j=0;j<numsSize;j++)
        {
            if(nums[i]>nums[j] && i!=j)
            {
                count++;
            }
        }
        counts[k++]=count;
        //printf("%d\t",count);
    }
    *returnSize = k;
    return counts;

}
