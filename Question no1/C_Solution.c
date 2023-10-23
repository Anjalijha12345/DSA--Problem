<<<<<<< C_solution
#include <stdio.h>
#include <stdlib.h>

int* findDuplicates(int* nums, int numsSize, int* returnSize) {
    int* result = (int*)malloc(numsSize * sizeof(int));
    *returnSize = 0;
    int i;
    for (i = 0; i < numsSize; i++) {
        int index = abs(nums[i]);
        
        if (nums[index] < 0) {
            result[(*returnSize)++] = index;
        } else {
            nums[index] = -nums[index];
        }
    }
    
    if (*returnSize == 0) {
        result[(*returnSize)++] = -1;
    }
    
    return result;
}

int main() {
    int nums[] = {4, 3, 2, 7, 8, 2, 6, 6, 1, 5};
    int numsSize = sizeof(nums) / sizeof(nums[0]);
    int returnSize;
    
    int* duplicates = findDuplicates(nums, numsSize, &returnSize);
    
    printf("Duplicate elements in ascending order: ");
    int i;
    for (i = 0; i < returnSize; i++) {
        printf("%d ", duplicates[i]);
    }
    printf("\n");
    
    free(duplicates); 
    return 0;
}

=======
#include <stdio.h>
#include <stdlib.h>

int* findDuplicates(int* nums, int numsSize, int* returnSize) {
    int* result = (int*)malloc(numsSize * sizeof(int));
    *returnSize = 0;
    int i;
    for (i = 0; i < numsSize; i++) {
        int index = abs(nums[i]);
        
        if (nums[index] < 0) {
            result[(*returnSize)++] = index;
        } else {
            nums[index] = -nums[index];
        }
    }
    
    if (*returnSize == 0) {
        result[(*returnSize)++] = -1;
    }
    
    return result;
}

int main() {
    int nums[] = {4, 3, 2, 7, 8, 2, 6, 6, 1, 5};
    int numsSize = sizeof(nums) / sizeof(nums[0]);
    int returnSize;
    
    int* duplicates = findDuplicates(nums, numsSize, &returnSize);
    
    printf("Duplicate elements in ascending order: ");
    int i;
    for (i = 0; i < returnSize; i++) {
        printf("%d ", duplicates[i]);
    }
    printf("\n");
    
    free(duplicates); 
    return 0;
}

>>>>>>> main
