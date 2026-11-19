#ifndef User_H
#define User_H

#include <string>
#include <vector>
#include "Reservation.h"

class User {
private:
	std::string FirstName;
	std::string LastName;
	std::string DLNumber;
	
	std::vector<Reservation> Reservations;
	//A value of 0 means there is no reservation stored, any value above 0 means that there is a reservation on the date at that number
public:
	User(std::string first, std::string last, std::string dlNumber);
	User();

	std::string GetFirst();
	std::string GetLast();
	std::string GetFull();
	std::string GetDL();
	std::vector<Reservation> GetReservations();

	//this should output a pointer to the array? outputs each specific date that has a reservation //CHECK if the car date already exists
	int SetFirst(std::string newFirst);
	int SetLast(std::string newLast);
	int SetDL(std::string newDL);

	//For the AddReservation function:
		// A return value of 0 means the function was completed with out issue
		//A return value of 1 means the reservation is already in the system
		//A return value of 2 means there is no room in the system
	int AddReservation(Reservation r);//function that puts a specific day into reservations. this should put it in the next available slot.

	//For the DeleteReservation function:
		// A return value of 0 means the function was completed with out issue
		//A return value of 1 means the requested reservation was not in the system
	int DeleteReservation(Reservation r);//function that REMOVES a specific reservation. This will prooooobably just be called whenever the reservation is on a date that is lower than the current date. I think this would be best if it is just called automatically at the start of each day to clear unused space
	int DeleteReservation(int date);


	std::string UserInfo(); //outputs information about the vehicle

};

#endif
