/**
 * @file inherit2.cpp
 * @brief Implementation of the personType class.
 */

#include <iostream>
#include "inherit2.h"

using namespace std;

/**
 * @brief Prints the person's first and last name.
 */
void personType::print() const
{
    cout << firstName << " " << lastName;
}

/**
 * @brief Sets the person's first and last name.
 *
 * @param first The first name.
 * @param last The last name.
 */
void personType::setName(string first, string last)
{
    firstName = first;
    lastName = last;
}

void personType::getName(string& first, string& last)
{
    first = firstName;
    last = lastName;
}

/**
 * @brief Constructs a person with a specified name.
 *
 * @param first The first name.
 * @param last The last name.
 */
personType::personType(string first, string last)
{
    firstName = first;
    lastName = last;
}

/**
 * @brief Default constructor.
 *
 * Initializes the first and last name to empty strings.
 */
personType::personType()
{
    firstName = "";
    lastName = "";
}