/* Lab: Modern Data Structures and Dynamic Vectors */
#include <iostream>
#include <vector>
#include <iomanip>

struct stEmployee {
    std::string Name;
    float Salary;
};

int main() {
    // 2D Arrays
    int matrix[2][3] = {{1, 2, 3}, {4, 5, 6}};

    // Vectors Initialization and Manipulation
    std::vector<int> numbers = {10, 20, 30};
    numbers.push_back(40);
    numbers.pop_back();

    // Vector of Structure
    std::vector<stEmployee> employees;
    employees.push_back({"Hazem", 5000});
    employees.push_back({"Emara", 6000});

    // Using Iterators and Ranged Loop
    for (const auto& emp : employees) {
        std::cout << emp.Name << " : " << emp.Salary << "\n";
    }

    std::vector<int>::iterator it;
    for (it = numbers.begin(); it != numbers.end(); ++it) {
        std::cout << *it << " ";
    }

    return 0;
}