#include "available_car.h"
#include<iomanip>
#include<iostream>
using namespace std;

AvailableCar::AvailableCar(string carID, int departureTime, string departureDate, int bookedSeats, int capacity, long long price) :Car(), Schedule() {
	this->Schedule::carID = carID;
	this->Schedule::departureTime = departureTime;
	this->Schedule::departureDate = departureDate;
	this->bookedSeats = bookedSeats;
	this->capacity = capacity;
	this->price = price;
	this->next = NULL;
	//cout << ". bien so xe: " << Schedule::carID
	//	<< ", gio xuat phat: " << Schedule::departureTime << ", so luong ve da dat: "
	//	<< bookedSeats << '/' << capacity << ", gia tien: " << price << endl;
}

ostream& operator << (ostream& out, const AvailableCar& availableCar) {
	out << availableCar.order << ". " << setiosflags(ios::left) << setw(15) << availableCar.Schedule::carID
		<< setiosflags(ios::left) << setw(10) << availableCar.Schedule::departureTime << setiosflags(ios::left) << setw(2)
		<< availableCar.bookedSeats << setiosflags(ios::left) << setw(2) << '/' << setiosflags(ios::left) << setw(2) << availableCar.capacity << "         " << availableCar.price << endl;
	return out;
}

string AvailableCar::getCarID() {
	return this->Schedule::carID;
}
int AvailableCar::getTime() {
	return this->Schedule::departureTime;
}

