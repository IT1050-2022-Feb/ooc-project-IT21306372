
//Admin class implementation
//Admin.h
#include <iostream>
#include <strings.h>

using namespace std;

class Admin
{
private:
    int adminID;
    char username[20];
    char password[30];

public:
    Admin();
    Admin(int padminID, char pUserName[], char ppassword[]);
    void displayAdmin();
    void addRecord();
    void displayAppoitReq();
    void displayDietReq();
    void updateAppointment();
    ~Admin();
};


//Admin.cpp
Admin::Admin(int padminID, char pUserName[], char ppassword[]) {
    int adminID = padminID;
    strcpy(username, pUserName);
    strcpy(password, ppassword);
}

void Admin::displayAdmin() {
    cout << "Admin ID : " << adminID << endl;
    cout << "Username : " << username << endl;

}

Admin::Admin() {}

void Admin::addRecord() {}

void Admin::displayAppoitReq() {}

void Admin::displayDietReq() {}

void Admin::updateAppointment() {}

Admin::~Admin() {}


//main.cpp

int main() {

    Admin A1(12, (char*)"Peter", (char*)"ABCD13");

    A1.displayAdmin();

    A1.addRecord();

    A1.displayAppoitReq();

    A1.displayDietReq();

    A1.updateAppointment();

    cout << "\n" << endl;
}