#pragma once

#include <string>
#include <iostream>

using namespace std;

class ExamInfo {
private:
	string course;
	enum { GRADE, PASS, PERCENTAGE } mode;
	union {
		char grade;
		bool pass;
		int percent;
	};

public:
	ExamInfo(string name, char grade) :
		course(name), mode(GRADE), grade(grade) {}
	ExamInfo(string name, bool pass) :
		course(name), mode(PASS), pass(pass) {}
	ExamInfo(string name, int percent) :
		course(name), mode(PERCENTAGE), percent(percent) {}

	void show();
};

void
ExamInfo::show() {
	cout << course << ": ";
	switch (mode) {
	case GRADE: cout << grade; break;
	case PASS: cout << (pass ? "PASS" : "FAIL"); break;
	case PERCENTAGE: cout << percent; break;
	}
	cout << endl;
}
