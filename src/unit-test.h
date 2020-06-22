// Defines a test case.
// Return the return value of fun_ptr.
// Function referenced by fun_ptr should return 0 on failure.
int test(char *name, int (*fun_ptr)());

// Compares actual and expected value.
// If the two values are different,
// print the error message and
// return 0.
// Otherwise, return non-zero integer (truthy).
int expect(int actual, int expected);