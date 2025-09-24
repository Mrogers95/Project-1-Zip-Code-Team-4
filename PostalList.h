/**
* @file PostalList.h
* @brief Definition of the PostalList class for managing a collection of PostalCodeItem objects.
* @author
*  Asfaw, Abel,
*  Farah, Mahad,
*  Kariniemi, Carson,
*  Rogers, Mitchell
*  Tran, Minh Quan
* @version 1.0
* @date 2025-9-23
*/

#pragma once
#ifndef POSTAL_LIST_H
#define POSTAL_LIST_H

#include "PostalCodeItem.h"
#include <vector>

using namespace std;
/**
* @class PostalList
* @brief Manages a collection of PostalCodeItem objects.
* This class provides methods to add, retrieve, and search for postal code items,
* as well as methods to print the items in various sorted orders.
* @see PostalCodeItem
* @note The class uses a vector to store the items, allowing dynamic resizing and efficient access.
*/
class PostalList
{
private:
    vector<PostalCodeItem> items;

public:
    // Constructors
    PostalList() = default;

    // Add an item
    void addItem(const PostalCodeItem& item);

    // Get item by index
    PostalCodeItem getItem(int index) const;

    // Find item by ZIP code (returns pointer or nullptr)
    const PostalCodeItem* findByZip(int zip) const;

    // Get number of items
    int size() const;

    // Print all postal codes
    void printAll() const;

    // Print items sorted by ZIP
    void printSortedByZip() const;

    // Print items sorted by state
    void printSortedByState() const;
};
/**
* @brief Include the implementation file for PostalList class.
* This inclusion is necessary to provide the definitions of the member functions declared in the PostalList class.
* @note Ensure that the implementation file is correctly located in the project structure.
*/
#include "PostalList.cpp"
#endif
