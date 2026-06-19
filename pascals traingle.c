/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
int** generate(int numRows, int* returnSize, int** returnColumnSizes)
{
    *returnSize = numRows;
    int **ret = malloc(numRows * sizeof(int*));
    *returnColumnSizes = malloc(numRows * sizeof(int)); 
    for(int i=0;i<numRows;i++)
    {
        ret[i] = malloc((i+1) * sizeof(int)); 
        (*returnColumnSizes)[i] = i+1;
        for(int j=0;j<=i;j++)
        {
            if(i==j || j==0)
            {
                ret[i][j]=1;
            }
            else
            {
                ret[i][j] = ret[i-1][j-1] + ret[i-1][j];
            }
            
        }
    }   
    return ret; 
}
