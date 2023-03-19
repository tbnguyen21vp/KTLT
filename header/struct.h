#include<iostream>
#include<fstream>
#include<string>
using namespace std;
#ifndef _STRUCT_H_
#define _STRUCT_H_

struct profile {
    string name;
    string email;
    string phone;
    int authorityLevel;
};
struct account {
    string username;
    string password;
    profile info;
};
struct newAccount {
    string username;
    string password;
    string name;
    string email;
    string phone;
    int authorityLevel;
    newAccount *next;
    newAccount () {
        next = nullptr;
    }
};
struct Student {
    int No;
    string StuID;
    string FirstName;
    string LastName;
    string Gender;
    string DOB;
    string SocialID;
    Student* next;
    Student () {
        next = nullptr;
    }
};
struct classes {
    string name;
    classes* next;
    classes() {
        next = nullptr;
    }
};
struct schoolYear {
    int yearBack;
    classes* classX;
};
struct date {
    int day;
    int month;
    int year;
};
struct semester {
    int No;
    date startDate;
    date endDate;
    schoolYear yearBelong;
};
struct course {
    int ID;
    string courseName;
    string className;
    string teacherName;
    int numberOfCredit;
    Student* student[50];
    string dayOfTheWeek;
    string session;
};

#endif