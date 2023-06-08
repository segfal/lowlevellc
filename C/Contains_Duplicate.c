#include <stdalign.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


bool containsDuplicate(int* nums, int numsSize) {
    int i, j;
    for (i = 0; i < numsSize; i++) {
        for (j = i + 1; j < numsSize; j++) {
            if (nums[i] == nums[j]) {
                return true;
            }
        }
    }
    return false;
}

//O(n) solution
bool containsDuplicate(int* nums, int numsSize) {
    int i;
    int *hash = (int *)malloc(sizeof(int) * numsSize);
    memset(hash, 0, sizeof(int) * numsSize);
    for (i = 0; i < numsSize; i++) {
        if (hash[nums[i]] == 1) {
            return true;
        }
        hash[nums[i]] = 1;
    }
    return false;
}
