#include "Reservation.h"

Reservation::Reservation(int currentDate, int date, std::string userDL, Vehicle* reservedVehicle) {
	if (!SetDate(currentDate, date)) Date = -1;
	UserDL = userDL;
	ReservedVehicle = reservedVehicle;
}
Reservation::Reservation() {
	Date = -1;
	ReservedVehicle = nullptr;
}

int Reservation::GetDate() {
	return Date;
}
std::string Reservation::GetUserDL() {
	return UserDL;
}
Vehicle* Reservation::GetVehicle() {
	return ReservedVehicle;
}

int Reservation::SetDate(int currentDate, int newDate) {
	if (newDate < 0) return 1;
	if (newDate < currentDate) return 2;
	Date = newDate;
	return 0;
}
int Reservation::SetUserDL(std::string newUserDL) {
	UserDL = newUserDL;
	return 0;
}
int Reservation::SetVehicle(Vehicle* vehicle) {
	if (vehicle == nullptr) return 1;
	ReservedVehicle = vehicle;
	return 0;
}

std::string Reservation::ReservationInfo() {

}