/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* intersection(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize)
{
    int size,freq[1001]={0};
    if (nums1Size > nums2Size)
    {
        size = nums1Size ;
    }
    else
    {
        size = nums2Size ;
    } 
    int * num = malloc(size * sizeof(int));
    int k=0;
    for(int i=0;i<nums1Size;i++)
    {
        for(int j=0;j<nums2Size;j++)
        {
            if(nums1[i]==nums2[j] && !freq[nums1[i]])
            {
                num[k++] = nums1[i];
                freq[nums1[i]]=1;
                break;
            }
        }
    }    
    *returnSize = k;
    return num;
}
