// Question 2 Header File

#pragma once
#include <string>
using namespace std;
class Message
{
public:
	Message(string from, string to);
	void append(string line);
	string to_string() const;
	void print();

private:
	string sender;
	string recipient;
	char timestamp[26];
	string message;
};