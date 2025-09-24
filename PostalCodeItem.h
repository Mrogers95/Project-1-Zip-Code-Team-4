**
* @file PostalCodeItem.h
* @brief Definition of the PostalCodeItem class representing a postal code entry.
* @author 
*   Asfaw, Abel,
*   Farah, Mahad,
* 	Kariniemi, Carson,
* 	Rogers, Mitchell
*   Tran, Minh Quan
* @version 1.0
* @date 2025-9-23
*/

#pragma once
#ifndef POSTAL_CODE_ITEM
#define POSTAL_CODE_ITEM

using namespace std;
/**
* @class PostalCodeItem
* @brief Represents a postal code entry with associated details.
* This class encapsulates information about a postal code, including its ZIP code, place name, state, county, latitude, and longitude.
* It provides methods to access and modify these details, as well as a method to print the information in a readable format.
* @note This class is designed to be used in conjunction with a PostalList class for managing collections of postal code entries.
* @see PostalList
*/
class PostalCodeItem
{
private:
    int zip;
    string place;
    string state;
    string county;
    double latitude;
    double longitude;

public:
    PostalCodeItem();
    PostalCodeItem(int z, const string& p, const string& s, const string& c, double lat, double lon);

    int getZip() const;
    string getPlace() const;
    string getState() const;
    string getCounty() const;
    double getLatitude() const;
    double getLongitude() const;

    void setZip(int newZip);
    void setPlace(const string& newPlace);
    void setState(const string& newState);
    void setCounty(const string& newCounty);
    void setLatitude(double newLat);
    void setLongitude(double newLon);

    void printInfo() const;
};
/**
* @brief Include the implementation file for PostalCodeItem class.
* This inclusion is necessary to provide the definitions of the member functions declared in the PostalCodeItem class.
* @note Ensure that the implementation file is correctly located in the project structure.
* @see PostalCodeItem.cpp
*/
#include "PostalCodeItem.cpp"
#endif
