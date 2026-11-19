#ifndef Reservation_H
#define Reservation_H
#include <string>

class Reservation {
private:
	int Date; //fuel capacity
	std::string UserDL; //miles per gallon
	std::string ReservedVehiclePlate;

public:
	Reservation(int currentDate, int date, std::string userDL, std::string* reservedVehiclePlate);
	Reservation();

	int GetDate();
	std::string GetUserDL();
	std::string GetVehicle();
	
	int SetDate(int currentDate, int newDate);
	int SetUser(std::string newUserDL);
	int SetVehicle(std::string newVehiclePlate);

	std::string ReservationInfo();
};

#endif