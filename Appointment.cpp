// D.L.B.S Liyanaarachchi
// Malabe Campus
// IT21210860
// Y1.S2.WD.CSNE.13

#include <iostream>																												// Including header file.

using namespace std ;																											// Using standard namespace.

class Appointment {																												// Creating appointment class.
		
	private:																													// Private class.
		
		int AppointmentId ;
		string AppointmentTime ;
		string AppointmentDate ;
		string AppointmentPlace ;
		string Member ;
		
	public:
		
		void setAppointmentDetails(int aid , string Atime , string Adate , string Aplace , string Mname);						// Public class.
		void displayAppointmentDetails();
		
};

void Appointment::setAppointmentDetails(int aid , string Atime , string Adate , string Aplace , string Mname)
{
	AppointmentId = aid ;
	AppointmentTime = Atime ;
	AppointmentDate = Adate ;
	AppointmentPlace = Aplace ;
	Member = Mname ;
}

void Appointment::displayAppointmentDetails()
{
	cout << "Appointment Id is: " << AppointmentId << endl ;																	// Display the message.
	cout << "Appointment time is: " << AppointmentTime << endl ;																// Display the message.			
	cout << "Appointment date is: " << AppointmentDate << endl ;																// Display the message.
	cout << "Appointment place is: " << AppointmentPlace << endl ;																// Display the message.
	cout << "Member name: " << Member << endl ;																					// Display the message.
	
	cout << endl;																												// Prints a blank line.
}

int main()
{																																// Begning of the func. main.
	Appointment a1 , a2 , a3 , a4 ;																								// Creating objects [a1] , [a2] , [a3] , [a4].
	
	a1.setAppointmentDetails(1 , "23:05" , "2022/10/05" , "Petersburgh" , "Kevin Woods");										// Set [a1] object's details.
	a2.setAppointmentDetails(2 , "18:56" , "2022/04/09" , "Helsinky" , "Peter Parker");										    // Set [a2] object's details.
	a3.setAppointmentDetails(3 , "08:10" , "2022/02/16" , "Bermingham" , "Jonny Mcallan");										// Set [a3] object's details.
	a4.setAppointmentDetails(4 , "12:24" , "2022/03/06" , "Frankfurt" , "Tommy Norman");										// Set [a4] object's details.
	
	cout << "In here you can find details about your appointment...." << endl ;													// Display the message.
	cout << endl ;																												// Prints a blank line.	
	
	a1.displayAppointmentDetails();																								// Display [a1] object's details.
	a2.displayAppointmentDetails();																								// Display [a2] object's details.
	a3.displayAppointmentDetails();																								// Display [a3] object's details.
	a4.displayAppointmentDetails();																								// Display [a4] object's details.
	
	return 0 ;
	
}																																// End of func. main.