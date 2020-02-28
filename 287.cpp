int findDuplicate(int* nums, int numsSize){
    int p = nums[0], q = nums[0];
    do{
        p = nums[p];
        q = nums[nums[nums[q]]];
    }while(p != q);
    int cnt = 0;
    do{
        cnt++;
        p = nums[p];
    }while(p != q);
    p = nums[0], q = nums[0];
    while(cnt--) q = nums[q];
    while(p != q){
        p = nums[p];
        q = nums[q];
    }
    return p;
}
