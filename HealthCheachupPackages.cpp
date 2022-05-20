#include <iostream>
#include <strings.h>
using namespace std;


class HealthCheckupPackagers{
	private :
		int PackageID;
		string PackageName;
		float PackagePrice;
		
	public :
		HealthCheckupPackagers();
		HealthCheckupPackagers(int PId,string PName,float PPrive);
		void displayPackageDetails();
		~HealthCheckupPackagers();
};


HealthCheckupPackagers::HealthCheckupPackagers(){
	
}

HealthCheckupPackagers::HealthCheckupPackagers(int PId,string PName,float PPrice){
	PackageID=PId;
	PackageName=PName;
	PackagePrice=PPrice;
}

void HealthCheckupPackagers::displayPackageDetails(){
	cout<<"Package ID is :"<<PackageID<<endl;
	cout<<"Package Name is :"<<PackageName<<endl;
	cout<<"Package Price is :"<<PackagePrice<<endl;
}

HealthCheckupPackagers::~HealthCheckupPackagers(){
}
int main(){

return 0;}

