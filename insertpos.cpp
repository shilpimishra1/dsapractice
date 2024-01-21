int searchInsert(int* nums, int numsSize, int target) {
    int i;
    for(i=0;i<numsSize;i++)
    if(nums[i]==target)
    {
    printf("%d",i);
    return i;
    }
    else if(target > nums[i] && (i == numsSize - 1 || target < nums[i + 1]))
    {
        printf("%d",i+1);
        return i+1;
    }
    else if(target < nums[i])
    {
        printf("%d",i);
        return i;
    }
    else
    printf("%d",numsSize);
    return numsSize;
}
