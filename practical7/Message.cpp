// Question 2 .cpp File

#include "stdafx.h"
#include "Message.h"
#include <cstdio>
#include <string>
#include <ctime>
#include <time.h>
#include <iostream>
using namespace std;

Message::Message(string from, string to) {
	sender = from;
	recipient = to;
	time_t rawtime;
	time(&rawtime);
	ctime_s(timestamp, sizeof(timestamp), &rawtime);
}

void Message::append(string line) {
	message += line + "\n";
}

string Message::to_string() const {
	return "From : " + sender + "\n" + "To : " + recipient + "\n" + timestamp + "\n" + message;
}

void Message::print() {
	cout << to_string();
}