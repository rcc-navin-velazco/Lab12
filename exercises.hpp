#ifndef EXERCISES_HPP
#define EXERCISES_HPP

// Exercise 1
void exercise1_print_address_and_size();

// Exercise 2
void exercise2_pointer_basics();

// Exercise 3
// Sum array elements using pointer arithmetic (no indexing)
int exercise3_sum_with_pointer(const int* arr, int size);

// Exercise 4
// Return pointer to first maximum element (or nullptr if size<=0)
// Return distance in elements between pointers (b - a)
const int* exercise4_find_max(const int* arr, int size);
int exercise4_distance_between(const int* a, const int* b);

// Exercise 5
// swap values pointed to by a and b (safe with nullptr checks)
// double the value at v (if not nullptr)
// read an integer from user into *out (if not nullptr)
void exercise5_swap_ptrs(int* a, int* b);
void exercise5_double_value(int* v);
void exercise5_get_integer_from_user(int* out);

// Exercise 6
// average reads from const double* and returns average
float exercise6_average(const float* values, int size);
// try_modify should demonstrate (in a commented line) that modifying through
// pointer-to-const is illegal (students will explain in writeup)
void exercise6_try_modify(const float* values, int size);
// demonstrate const pointer behavior
void exercise6_use_const_pointer();

#endif // EXERCISES_HPP
