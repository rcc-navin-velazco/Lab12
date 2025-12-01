#include <iostream>
#include <limits>
#include "exercises.hpp"

static void print_menu()
{
    std::cout << "\n=== Chapter 9 Pointer Exercises ===\n"
              << "1) Exercise 1 - Addresses & sizeof\n"
              << "2) Exercise 2 - Pointer basics\n"
              << "3) Exercise 3 - Arrays & pointer arithmetic\n"
              << "4) Exercise 4 - Pointer arithmetic & comparison\n"
              << "5) Exercise 5 - Pointers as parameters\n"
              << "6) Exercise 6 - Const pointers & pointers to const\n"
              << "0) Exit\n"
              << "Select an exercise to run (0-6): ";
}

int main()
{
    while (true) {
        print_menu();
        int choice = -1;
        if (!(std::cin >> choice)) {
            std::cout << "Invalid input. Exiting.\n";
            return 0;
        }
        // clear trailing newline
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

        switch (choice) {
            case 0:
                std::cout << "Goodbye.\n";
                return 0;

            case 1:
                exercise1_print_address_and_size();
                break;

            case 2:
                exercise2_pointer_basics();
                break;

            case 3:
            {
                // demo for exercise 3
                const int SIZE = 5;
                int numbers[SIZE] = {1,2,3,4,5};
                int sum = exercise3_sum_with_pointer(numbers, SIZE);
                std::cout << "Sum returned: " << sum << " (expected 15 if implemented)\n";
            }
            break;

            case 4:
            {
                const int SIZE = 6;
                int data[SIZE] = {4,7,2,9,9,3};
                const int* pmax = exercise4_find_max(data, SIZE);
                if (pmax != nullptr) {
                    std::cout << "find_max returned value: " << *pmax << "\n";
                } else {
                    std::cout << "find_max returned nullptr\n";
                }
                int dist = exercise4_distance_between(&data[1], &data[4]);
                std::cout << "distance_between(&data[1], &data[4]) returned: " << dist << " (expected 3)\n";
            }
            break;

            case 5:
            {
                int x = 5, y = 10;
                exercise5_swap_ptrs(&x, &y);
                std::cout << "After swap: x y = " << x << " " << y << " (expected 10 5 if implemented)\n";

                exercise5_double_value(&x);
                std::cout << "After double_value(&x): x = " << x << " (expected 20 if implemented)\n";

                int value = 0;
                exercise5_get_integer_from_user(&value);
                std::cout << "You entered (from exercise): " << value << "\n";
            }
            break;

            case 6:
            {
                float arr[] = {10.0, 20.0, 30.0};
                float avg = exercise6_average(arr, 3);
                std::cout << "average returned: " << avg << " (expected 20 if implemented)\n";
                exercise6_try_modify(arr, 3);
                exercise6_use_const_pointer();
            }
            break;

            default:
                std::cout << "Unknown choice. Try again.\n";
                break;
        } // switch
    } // while

    return 0;
}
