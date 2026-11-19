#include "User.h"

User::User(std::string first, std::string last, std::string dlNumber) {
	FirstName = first;
	LastName = last;
	DLNumber = dlNumber;
}
User::User() {}

std::string User::GetFirst() {
	return FirstName;
}
std::string User::GetLast() {
	return LastName;
}
std::string User::GetFull() {
	return FirstName + " " + LastName;
}
std::string User::GetDL() {
	return DLNumber;
}
std::vector<Reservation> User::GetReservations() {
	return Reservations;
}

int User::SetFirst(std::string newFirst) {
	FirstName = newFirst;
}
int User::SetLast(std::string newLast) {
	LastName = newLast;
}
int User::SetDL(std::string newDL) {
	DLNumber = newDL;
}

int User::AddReservation(Reservation r) {
	if (r.GetDate() < 0) return 1;
	for (int i = 0; i < Reservations.size(); i++) {
		if (Reservations[i].GetDate() == r.GetDate()) {
			return 2;
		}
	}
	Reservations.push_back(r);
	return 0;
}

int User::DeleteReservation(Reservation r) {
	if (r.GetDate() < 0) return 1;
	for (int i = 0; i < Reservations.size(); i++) {
		if (Reservations[i].GetDate() == r.GetDate()) {
			Reservations.erase(Reservations.begin() + i);
			return 0;
		}
	}
	return 2;
}

int User::DeleteReservation(int date) {
	if (date < 0) return 1;
	for (int i = 0; i < Reservations.size(); i++) {
		if (Reservations[i].GetDate() == date) {
			Reservations.erase(Reservations.begin() + i);
			return 0;
		}
	}
	return 2;
}

std::string User::UserInfo() {

}