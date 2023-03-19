#include"struct.h"
#ifndef _INPUT_FIRST_YEAR_STUDENT_H_
#define _INPUT_FIRST_YEAR_STUDENT_H_

void inputDataSchoolYear(ofstream& inputInformation, schoolYear SchoolYear);
void inputClassesForFirstYearStudent(ofstream& inputInformation, schoolYear SchoolYear);
void readInformation(Student* student);
void inputInformationIntoClass(Student* student);
void createClass(string name);
void deleteClassList(classes* pHead);
void deleteStudentList(Student* student);

#endif