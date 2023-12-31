#include <stdio.h>
int count=0;
void merge(int nums1[], int nums2[], int m, int n, int merged[])
 {
    int i = m - 1, j = n - 1, k = m + n - 1;
    	count++;
    while (i >= 0 && j >= 0)
	 {
    	count++;
    	count++;
        if (nums1[i] >= nums2[j]) 
		{
            merged[k] = nums1[i];
            i--;
            count++;
        } else {
            merged[k] = nums2[j];
            j--;
            count++;
        }
        count++;
        k--;
    }
    count++;
    while (i >= 0) {
    	count++;
        merged[k] = nums1[i];
        i--;
        count++;
        k--;
        count++;
    }
    count++;
    while (j >= 0) {
    	count++;
        merged[k] = nums2[j];
        j--;
        count++;
        k--;
        count++;
    }
}
int main() 
{
    int nums1[] = {6, 4, 2};
    int nums2[] = {5, 8, 1};
    int count=0;
    int m = 3, n = 3;
    int merged[m + n];

    merge(nums1, nums2, m, n, merged);

    printf("Merged array: ");
    count++;
    count++;
    for (int i = 0; i < m + n; i++) {
    	count++;
    	count++;
        printf("%d ", merged[i]);
        count++;
    }
    count++;
    printf("\n");
    count++;
    
    printf("Time complexity is %d\n",count);
}
