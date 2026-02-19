int maxSubarraySumCircular(int* nums, int numsSize)
 {
    int totalSum = 0;
    int currMax = 0, maxSum = nums[0];
    int currMin = 0, minSum = nums[0];
    for (int i = 0; i < numsSize; i++)
     {
        int x = nums[i];
        totalSum += x;
        currMax = (currMax + x > x) ? currMax + x : x;
        maxSum = (maxSum > currMax) ? maxSum : currMax;
        currMin = (currMin + x < x) ? currMin + x : x;
        minSum = (minSum < currMin) ? minSum : currMin;
    }
    if (maxSum < 0) return maxSum;
    int circularMax = totalSum - minSum;
    return (maxSum > circularMax) ? maxSum : circularMax;
}