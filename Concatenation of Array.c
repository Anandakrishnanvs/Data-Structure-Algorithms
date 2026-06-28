/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* getConcatenation(int* nums, int numsSize, int* returnSize)
{
    int *n = malloc((2 * numsSize) *sizeof(int));
    int k=0;
    for(int i=0;i<numsSize;i++)
    {
        n[k++]=nums[i];
    }
    for(int i=0;i<numsSize;i++)
    {
        n[k++]=nums[i];
    }
    *returnSize = k;
    return n;
}
