/**
 * @file inherit2.h
 * @brief Defines the personType class.
 */

#ifndef H_PersonType
#define H_PersonType

#include <string>

using namespace std;

/**
 * @class personType
 * @brief Stores a person's first and last name.
 */
class personType
{
public:

    /**
     * @brief Prints the person's full name.
     */
    void print() const;

    /**
     * @brief Sets the first and last name.
     *
     * @param first The first name.
     * @param last The last name.
     */
    void setName(string first, string last);

    /**
     * @brief Gets the first and last name.
     *
     * @param first Returns the first name.
     * @param last Returns the last name.
     */
    void getName(string& first, string& last);

    /**
     * @brief Creates a person with a first and last name.
     *
     * @param first The first name.
     * @param last The last name.
     */
    personType(string first, string last);

    /**
     * @brief Creates an empty person.
     */
    personType();

private:

    string firstName;
    string lastName;
};

#endif