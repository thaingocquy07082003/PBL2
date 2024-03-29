#pragma once

#ifndef AVAILABLECARSLINKEDLIST_H
#define AVAILABLECARSLINKEDLIST_H

#include "available_car.h"

class AvailableCarsLinkedList {
private:
	AvailableCar* head;
public:
	AvailableCarsLinkedList(std::string, std::string, int);
	friend std::ostream& operator << (std::ostream&, const AvailableCarsLinkedList&);
	AvailableCar getNode(int);
};
#endif
