#include "pch.h"
#include "../QA-Attendance/Verification.cpp"
#include "../QA-Attendance/Event.cpp"
#include "../QA-Attendance/Attendee.cpp"

// Jeffrey Bolk
// UNIT TESTS******************************************************************
// Test String Verify
TEST(TestCaseName, TestSting) {
  EXPECT_EQ("UNDEFINED", stringVerify(""));
  EXPECT_TRUE(true);
  EXPECT_EQ("Name", stringVerify("Name"));
  EXPECT_TRUE(true);
}

// Test Date Verify
TEST(TestCaseName, TestDate) {
	EXPECT_EQ("UNDEFINED", dateVerify(""));
	EXPECT_TRUE(true);
	EXPECT_EQ("2026-03-03", dateVerify("2026-03-03"));
	EXPECT_TRUE(true);
}

// Test Int Verify
TEST(TestCaseName, TestInt) {
	EXPECT_EQ(0, intVerify(0));
	EXPECT_TRUE(true);
	EXPECT_EQ(0, intVerify(-7));
	EXPECT_TRUE(true);
}



// Implement Tests*************************************************************
TEST(TestCaseName, CreateEvent) {
	Event testEvent = Event(1,"Test Event","2026-02-03");
	EXPECT_EQ("2026-02-03", testEvent.getDate());
	EXPECT_TRUE(true);
	EXPECT_EQ("Test Event", testEvent.getName());
	EXPECT_TRUE(true);
	EXPECT_EQ(1, testEvent.getID());
	EXPECT_TRUE(true);

}

TEST(TestCaseName, CreateAttendee) {
	Attendee testAttendee = Attendee(1, "Test Attendee", "@gmail.com");
	EXPECT_EQ("@gmail.com", testAttendee.getEmail());
	EXPECT_TRUE(true);
	EXPECT_EQ("Test Attendee", testAttendee.getName());
	EXPECT_TRUE(true);
	EXPECT_EQ(1, testAttendee.getID());
	EXPECT_TRUE(true);
}

TEST(TestCaseName, CheckAttendee) {
	Attendee testAttendee = Attendee(1, "Test Attendee", "@gmail.com");
	EXPECT_EQ(false, testAttendee.getChecked());
	EXPECT_TRUE(true);
	testAttendee.checkIn();
	EXPECT_EQ(true, testAttendee.getChecked());
	EXPECT_TRUE(true);
}