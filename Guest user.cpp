#include <iostream>
#include <strings.h>
using namespace std;

class GuestUser{
	private :
		int guestID;
		string guestName;
		string guestEmail;

	
	public :
		GuestUser();
		GuestUser(int GId, string GName,string GEmail);
		void displayGuestUserDetails();
		void registerUser();
		void searchDietPln();
		void searchHealthCarePk();
		~GuestUser();
		 
};

GuestUser::GuestUser(){
	
}

GuestUser::GuestUser(int GId, string GName, string GEmail){
	
	guestID=GId;
	guestName=GName;
	guestEmail=GEmail;
}

void GuestUser::displayGuestUserDetails(){
	cout<<"Guest ID is :"<<guestID<<endl;
	cout<<"Guest Name is :"<<guestName<<endl;
	cout<<"Guest Email is :"<<guestEmail<<endl;
	cout <<endl;
}
     

void GuestUser::registerUser(){
}

void GuestUser::searchDietPln(){
}

void GuestUser::searchHealthCarePk(){
}

GuestUser::~GuestUser(){
	
}
int main(){
return 0;
}
