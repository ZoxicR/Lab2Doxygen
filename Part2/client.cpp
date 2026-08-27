/**
 * @file client.cpp
 * @brief Tests the personType and partTimeEmployee classes.
 */

#include <iostream>
#include "inherit2.h"
#include "partTimeEmployee.h"

using namespace std;

/**
 * @brief Main function for testing the employee classes.
 *
 * @return 0 if the program finishes successfully.
 */
int main()
{
    personType newPerson;

    partTimeEmployee newEmployee("John", "Smith", 7.50, 56);

    partTimeEmployee employee;

    newEmployee.print();

    employee.setNameRateHours("Rachel", "Moore", 9.75, 45);

    employee.print();

    return 0;
}