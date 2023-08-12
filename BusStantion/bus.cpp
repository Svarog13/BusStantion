#include "bus.h"

Bus::Bus() : busNumber(0),driverName(""),routeNumber(0),seatCount(0){}

Bus::Bus(int number, const std::string& name, int route, int seats) : busNumber(number),driverName(name),routeNumber(route),seatCount(seats){}

std::ostream& operator<<(std::ostream& os, const Bus& bus) 
{
	os << "Bus Number: " bus.busNumber << ", Driver: " << bus.driverName << ", Route: " << bus.routeNumber ", Seats: " << bus.seatCount;
	return os;
}