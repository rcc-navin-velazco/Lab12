#include "exercises.hpp"
#include <iostream>
#include <limits>

// --------------------
// Exercise 1
// --------------------
void exercise1_print_address_and_size()
{
    // TODO: Implement this function for Exercise 1
    // Goal:
    //   - Create and initialize three variables:
    //       char letter = 'A';
    //       int number = 12345;
    //       double amount = 3.14159;
    //   - Print each variable's value, its address, and its size in bytes.
    //   - Use: &variable and sizeof(variable)
    //
    // Example expected output (addresses will vary):
    // Value: A  Address: 0x7ff...  Size: 1
    // Value: 12345  Address: 0x7ff...  Size: 4
    // Value: 3.14159  Address: 0x7ff...  Size: 8

    std::cout << "[Exercise 1 - NOT IMPLEMENTED] print_address_and_size\n";
}

// --------------------
// Exercise 2
// --------------------
void exercise2_pointer_basics()
{
    // TODO: Implement this function for Exercise 2
    // Steps:
    //   1. Create two ints: int a = 10; int b = 20;
    //   2. Create int* ptr = nullptr;
    //   3. Make ptr point to a; add 5 using *ptr (so a becomes 15). Print a.
    //   4. Make ptr point to b; multiply *ptr by 3 (so b becomes 60). Print b.
    // Expected printed values:
    // 15
    // 60

    std::cout << "[Exercise 2 - NOT IMPLEMENTED] pointer_basics\n";
}

// --------------------
// Exercise 3
// --------------------
int exercise3_sum_with_pointer(const int* arr, int size)
{
    // TODO: Implement this function for Exercise 3
    // Requirements:
    //   - Compute and return the sum of the array elements
    //   - Do NOT use array indexing arr[i]; use pointer arithmetic only:
    //       const int* p = arr; sum += *p; ++p;
    //   - Return 0 if arr == nullptr or size <= 0

    std::cout << "[Exercise 3 - NOT IMPLEMENTED] sum_with_pointer\n";
    return 0;
}

// --------------------
// Exercise 4
// --------------------
const int* exercise4_find_max(const int* arr, int size)
{
    // TODO: Implement this function for Exercise 4
    // Requirements:
    //   - Return pointer to the first maximum element found in arr.
    //   - Return nullptr if arr == nullptr or size <= 0
    //
    // Example: {4,7,2,9,9,3} -> pointer to element with value 9 (index 3)

    std::cout << "[Exercise 4 - NOT IMPLEMENTED] find_max\n";
    return nullptr;
}

int exercise4_distance_between(const int* a, const int* b)
{
    // TODO: Implement this function for Exercise 4
    // Requirements:
    //   - Return number of elements from a to b (i.e., b - a)
    //   - Behavior undefined if pointers are not from same array — assume caller uses valid values.

    std::cout << "[Exercise 4 - NOT IMPLEMENTED] distance_between\n";
    return 0;
}

// --------------------
// Exercise 5
// --------------------
void exercise5_swap_ptrs(int* a, int* b)
{
    // TODO: Implement swap of pointed-to values
    // Requirements:
    //  - If a==nullptr or b==nullptr, do nothing.
    //  - Otherwise swap *a and *b using a temporary variable.

    std::cout << "[Exercise 5 - NOT IMPLEMENTED] swap_ptrs\n";
}

void exercise5_double_value(int* v)
{
    // TODO: Double the value at v (if v != nullptr)
    std::cout << "[Exercise 5 - NOT IMPLEMENTED] double_value\n";
}

void exercise5_get_integer_from_user(int* out)
{
    // TODO: Prompt "Enter an integer: " and read into *out using std::cin >> *out
    //       Validate input; if invalid, re-prompt.
    //       If out == nullptr, do nothing.
    std::cout << "[Exercise 5 - NOT IMPLEMENTED] get_integer_from_user\n";
}

// --------------------
// Exercise 6
// --------------------
float exercise6_average(const float* values, int size)
{
    // TODO: Compute average of values (do not modify values). Return 0.0 if size <= 0 or values==nullptr.
    std::cout << "[Exercise 6 - NOT IMPLEMENTED] average\n";
    return 0.0;
}

void exercise6_try_modify(const float* values, int size)
{
    // TODO: This function should illustrate that modifying through a pointer-to-const is invalid:
    //       - Leave a commented-out line such as:
    //           // values[0] = 100.0; // not allowed: values is const double*
    //       - Print a short explanation message to the console.
    std::cout << "[Exercise 6 - NOT IMPLEMENTED] try_modify\n";
}

void exercise6_use_const_pointer()
{
    // TODO: Demonstrate a const pointer:
    //   - int value = 7;
    //   - int * const ptr = &value; // pointer is constant, pointee can be modified
    //   - Print *ptr, then change *ptr to 20 and print again.
    //   - Leave a commented-out line showing ptr = nullptr; // should not compile
    std::cout << "[Exercise 6 - NOT IMPLEMENTED] use_const_pointer\n";
}
