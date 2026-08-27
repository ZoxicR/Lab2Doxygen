/**
 * @file partTimeEmployee.h
 * @brief Defines the partTimeEmployee class.
 */

#ifndef H_PartTimeEmployee
#define H_PartTimeEmployee

#include "inherit2.h"

/**
 * @class partTimeEmployee
 * @brief Represents a part-time employee.
 *
 * This class inherits the first and last name
 * from the personType class.
 */
class partTimeEmployee : public personType
{
public:

    /**
     * @brief Prints the employee's name and wages.
     */
    void print();

    /**
     * @brief Calculates the employee's wages.
     * @return The calculated wages.
     */
    double calculatePay();

    /**
     * @brief Sets the employee's name, pay rate, and hours worked.
     *
     * @param first The employee's first name.
     * @param last The employee's last name.
     * @param rate The employee's pay rate.
     * @param hours The number of hours worked.
     */
    void setNameRateHours(string first, string last,
                          double rate, double hours);

    /**
     * @brief Creates a part-time employee with specified information.
     *
     * @param first The employee's first name.
     * @param last The employee's last name.
     * @param rate The employee's pay rate.
     * @param hours The number of hours worked.
     */
    partTimeEmployee(string first, string last,
                     double rate, double hours);

    /**
     * @brief Creates a part-time employee with default values.
     */
    partTimeEmployee();

private:

    double payRate;
    double hoursWorked;
};

#endif