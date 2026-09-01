#include <stdio.h>

int main(void) {
  int nums[] = {10, 1, 2, 3, 5, 6};
  size_t num_size = sizeof(nums) / sizeof(nums[0]);
  int sum = 0;
  for (size_t i = 0; i < num_size; i++) {
    sum += nums[i];
    printf("The number is %d\n", nums[i]);
  }
  printf("The sum of nums is: %d", sum);
  return 0;
}
