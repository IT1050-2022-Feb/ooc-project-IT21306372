// D.L.B.S Liyanaarachchi
// Malabe Campus
// IT21210860
// Y1.S2.WD.CSNE.13

#include <iostream>																			// Including header file.

using namespace std ;																		// Using standard namespace.

class Payment {																				// Creating [payment] class.
	
	private:																				// Private class.
		
		int PayId ;
		float PaymentAmount ;
		string PaymentDescription ;
		
	public:
		
		void setPaymentDetails(int pid , float Pamount , string pDes);
		void displayPaymentDetails();
		void cancelPayment();
		void confirmPayment();
		void calculateTotalPayment();
};

void Payment::setPaymentDetails(int pid , float Pamount , string pDes)
{
	PayId = pid ;
	PaymentAmount = Pamount ;
	PaymentDescription = pDes ;
}

void Payment::displayPaymentDetails()
{
	cout << "Payment Id is: " << PayId << endl ;											// Display the message.
	cout << "Amount paid: " << PaymentAmount << endl ;										// Display the message.
	cout << "Payment description: " << PaymentDescription << endl ;							// Display the message.
	cout << endl ;																			// Prints a blank line.
}

int main()
{																							// Begning of the func. main.
	Payment p1 , p2 , p3 , p4 ;																// Creating objects [p1] , [p2] , [p3] , [p4].
	
	p1.setPaymentDetails(96561 , 19150.53 , "X-Ray fees") ;									// Set [p1] object's details.
	p2.setPaymentDetails(32784 , 59154.51 , "Surgery fees") ;								// Set [p2] object's details. 
	p3.setPaymentDetails(52193 , 78656.48 , "Ultrasound scan");								// Set [p3] object's details.
	p4.setPaymentDetails(31594 , 10052.89 , "Blood donation");								// Set [p4] object's details.
	
	cout << "Inhere you can find payment details......" << endl ;							// Display the message.
	cout << endl ;																			// Prints a blank line.
	
	p1.displayPaymentDetails() ;															// Display [p1] object's payment details.
	p2.displayPaymentDetails() ;															// Display [p2] object's payment details.
	p3.displayPaymentDetails() ;															// Display [p3] object's payment details.
	p4.displayPaymentDetails() ;															// Display [p4] object's payment details.
	
	return 0 ;
	
}																							// End of func. main.