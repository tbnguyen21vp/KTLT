#include"struct.h"
#ifndef _LOGIN_H_
#define _LOGIN_H_

void loginAccount(account &user);
bool checkAccount(account user, ifstream &ip);
void loadUserData(account &user, ifstream &ip);
void printInfo(account user);
void changePassword(account &user);
void updatePassword(account user);
void loadNewUserData(newAccount *&pHead, string inputFilePath);
void saveNewUserData(newAccount *pHead);
void addNewAccountOneByOne(newAccount *&pHead);
void deleteAccountList(newAccount *&pHead);

#endif
