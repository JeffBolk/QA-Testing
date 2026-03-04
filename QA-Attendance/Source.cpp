#include "Verification.h"
#include "Event.h"

//Jeffrey Bolk
// Main Function

int main() {
	Event eventList[10];
	int eventLength = 0;
	bool notExit = true;


	Event someEvent = Event(1, "Some Event", "2026");
	someEvent.registerAttendee(1, "Jeff", "@gmail.com");
	someEvent.registerAttendee(2, "John", "@gmail.com");
	someEvent.attendeeList[0].checkIn();

	Event anotherEvent = Event(2, "Another Event", "2027");
	anotherEvent.registerAttendee(1, "Jeff", "@gmail.com");
	anotherEvent.registerAttendee(2, "John", "@gmail.com");

	// Print report
	cout << endl << endl << endl << "Printing Report..." << endl << endl;
	
	cout << "Name: " << someEvent.getName() << endl;
	cout << "Total Attendees: " << someEvent.attendeeLength << endl;
	for (int i = 0; i < attendeeLength; i++) {
		if (someEvent.attendeeList[i].getChecked()) {
			someEvent.checkedAttendee++;
		}
	}
	cout << "Total Checked-In Attendees: " << someEvent.checkedAttendee << endl;
	cout << endl;

	system("pause");
}

