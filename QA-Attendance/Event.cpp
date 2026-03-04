#include "Event.h"
#include "Verification.h"
#include <string>

// Jeffrey Bolk
// Event Class

Event::Event(int id, string name, string date) {
	this->id = id;
	idList[length] = this->id;
	this->name = stringVerify(name);
	this->date = dateVerify(date);
}

Event::Event() {
	
}


void Event::registerAttendee(int id, string name, string email) {
	attendeeList[attendeeLength] = Attendee(intVerify(id), stringVerify(name), stringVerify(email));
	attendeeLength++;
}



