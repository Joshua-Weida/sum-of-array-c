/* BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE PERFORMED ALL OF THE WORK TO CREATE THIS FILE AND/OR
DETERMINE THE ANSWERS FOUND WITHIN THIS FILE MYSELF WITH NO ASSISTANCE FROM ANY PERSON (OTHER THAN THE
INSTRUCTOR OR GRADERS OF THIS COURSE) AND I HAVE STRICTLY ADHERED TO THE TENURES OF THE OHIO STATE
UNIVERSITY’S ACADEMIC INTEGRITY POLICY */


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
