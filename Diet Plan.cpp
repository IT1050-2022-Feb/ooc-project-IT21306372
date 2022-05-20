// D.L.B.S Liyanaarachchi
// Malabe Campus
// IT21210860
// Y1.S2.WD.CSNE.13

#include <iostream>																				// Including Header file.

using namespace std;																			// Using standard namespace.

class DietPlan {																				// Create class 'Diet Plan'.
	
	private:																					// Private class.
		
		int DietPlanId ;
		string DietPlanName ;
		float Price ;
		
	public:																						// Public class.
		
		void setDietPlanDetails(int DpId , string dpName , float p);
		void displayDietPlanDetails() ;
		
};

void DietPlan::setDietPlanDetails(int DpId , string dpName , float p)
{
	DietPlanId = DpId ;
	DietPlanName = dpName ;
	Price = p ;
}

void DietPlan::displayDietPlanDetails()
{
	cout << "Diet plan Id: " << DietPlanId << endl ;											// Display the message.
	cout << "Diet plan name: " << DietPlanName << endl ;										// Display the message.
	cout << "Diet plan price: " << Price << endl ;												// Display the message.
	cout << endl ;																				// Prints a blank line.
}

int main()
{																								// Begning of the func. main.
	DietPlan d1 , d2 , d3 ;																		// Creating class objects.
	
	d1.setDietPlanDetails(2495 , "The Ultra-Low-Fat Diet" , 14590.00) ;							// Set [d1] object's data.
	d2.setDietPlanDetails(8912 , "The Vegan Diet" , 18950.00) ;									// Set [d2] object's data.
	d3.setDietPlanDetails(8934 , "The Dukan Diet" , 21980.00);									// Set [d3] object's data.

	
	cout << "In here you can find details about your preffered diet plan...." << endl ;			// Display the message.	
	cout << endl ;																				// Prints a blank line.	
	
	d1.displayDietPlanDetails();																// Display [d1] object's details.
	d2.displayDietPlanDetails();																// Display [d2] object's details.
	d3.displayDietPlanDetails();																// Display [d3] object's details.
	
	return 0 ;
}																								// End of func. main.