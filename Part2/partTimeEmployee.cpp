/**
 * @file partTimeEmployee.cpp
 * @brief Implementation of the partTimeEmployee class.
 */

#include <iostream>
#include "inherit2.h"
#include "partTimeEmployee.h"

using namespace std;

/**
 * @brief Prints the employee's name and calculated wages.
 */
void partTimeEmployee::print()
{
    personType::print();
    cout << " wages are : " << calculatePay() << endl;
}

/**
 * @brief Calculates the employee's wages.
 *
 * @return Pay rate multiplied by hours worked.
 */
double partTimeEmployee::calculatePay()
{
    return payRate * hoursWorked;
}

/**
 * @brief Sets the employee's name, pay rate, and hours worked.
 *
 * @param first The employee's first name.
 * @param last The employee's last name.
 * @param rate The employee's pay rate.
 * @param hours The number of hours worked.
 */
void partTimeEmployee::setNameRateHours(string first,
                                         string last,
                                         double rate,
                                         double hours)
{
    personType::setName(first, last);
    payRate = rate;
    hoursWorked = hours;
}

/**
 * @brief Constructs a part-time employee with specified information.
 *
 * @param first The employee's first name.
 * @param last The employee's last name.
 * @param rate The employee's pay rate.
 * @param hours The number of hours worked.
 */
partTimeEmployee::partTimeEmployee(string first,
                                   string last,
                                   double rate,
                                   double hours)
    : personType(first, last)
{
    payRate = rate;
    hoursWorked = hours;
}

/**
 * @brief Default constructor.
 *
 * Sets pay rate and hours worked to zero.
 */
partTimeEmployee::partTimeEmployee()
{
    payRate = 0;
    hoursWorked = 0;
}