#include <iostream>
#include <strings.h>
using namespace std;

class Member{
	private:
		int memberID;
		string Name;
		string Address;
		string Email;
		int contactNo;
		string username;
		string password;
		
		
	public:
		Member();
		Member(int mID, string mName, string mAddress, string mEmail, int mCNo);
		void setLoginDetails();
		void editMemberDetails();
		void deleteProfile();
		void displayMemberdetails();
		~Member();
};

	Member::Member(){
	
}

	Member::Member(int mID, string mName, string mAddress, string mEmail, int mCNo){
	memberID=mID;
	Name=mName;
	Address=mAddress;
	Email=mEmail;
	contactNo=mCNo;
	
}

void Member::setLoginDetails(){

	
}

void Member::editMemberDetails(){
	
}

void Member::deleteProfile(){
	
}

void Member::displayMemberdetails(){
	cout<<"Member ID is : "<<memberID<<endl;
	cout<<"Member Name is : "<<Name<<endl;
	cout<<"Member Address is : "<<Address<<endl;
	cout<<"Member Email is : "<<Email<<endl;
	cout<<"Member Contact Number is : "<<contactNo<<endl;
	cout<<endl;
}

Member::~Member(){
	
}

int main(){
	
	Member m1 (1, "Kevin Woods", "122/4, Halloluwa, kandy", "Kevin12345@gmail.com", 0613452677);
	
	m1.displayMemberdetails();
	m1.editMemberDetails();
	m1.setLoginDetails();
	m1.deleteProfile();

	return 0;
}
