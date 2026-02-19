#include <stdlib.h>
int* productExceptSelf(int* nums, int numsSize, int* returnSize)
 {
    *returnSize = numsSize;
    int *ans = (int*)malloc(sizeof(int) * numsSize);
    if (!ans) return NULL;
    int prefix = 1;
    for (int i = 0; i < numsSize; i++) 
    {
        ans[i] = prefix;        
        prefix *= nums[i];
    }
    int suffix = 1;
    for (int i = numsSize - 1; i >= 0; i--)
     {
        ans[i] *= suffix;       
        suffix *= nums[i];
    }
    return ans;
}
