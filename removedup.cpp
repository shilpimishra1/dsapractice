int removeDuplicates(int* nums, int numsSize) {
    if (numsSize == 0) {
        return 0;
    }
    int k = 1, i;
    for (i = 0; i < numsSize - 1; i++) {
        if (nums[i] != nums[i + 1]) {
            nums[k] = nums[i + 1];
            k++;
        }
    }
    printf("%d", k);
    return k;
}
