#pragma once

#ifndef CARLINKEDLIST_H
#define CARLINKEDLIST_H

#include "car.h"
#include <string>
class CustomerLinkedList;
class CarLinkedList {
private:
    Car* head;
public:
    CarLinkedList(std::string);
    friend std::ostream& operator << (std::ostream&, const CarLinkedList&);
    friend std::istream& operator >> (std::istream&, CustomerLinkedList&);
    void printAvailableCars(std::string, std::string);
    friend class AvailableCarsLinkedList;
    //friend std::istream& operator >> (std::istream&, CustomerLinkedList&);
    void writeFile(std::string);
    long long getPrice(std::string);
    void findCar(std::string);
    void editCar(std::string);
};

#endif
