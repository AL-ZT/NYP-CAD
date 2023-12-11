// Practical8.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Person.h"
#include "Student.h"
#include "Instructor.h"

int main()
{
	Student student1;
	Student student2("student2", "26 Feb 2000", "Major at life");
	Instructor instructor1;
	Instructor instructor2("instructor2", "1 Oct 2000", 15000);
	instructor1.display();
	instructor2.display();
	student1.display();
	student2.display();
	system("PAUSE");
    return 0;
}