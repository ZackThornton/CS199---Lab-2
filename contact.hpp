/**********************************************************************************
* Author: Zachary Thornton
* Date: 01/09/2018
* Description: Contact Class Header. Contains Fucntion Declarations,  Private and Public variables
************************************************************************************/
#ifndef CONTACT_HPP
#define CONTACT_HPP
#include <iostream>
using namespace std;

class Contact
{
private:
	string name;
	string telNum;
	string email;
public:
	//Default Constructor///
	Contact(string name = "John Doe", string telNum = "555-555-5555", string email = "johndoe@gmail.com");
	//Copy Constructor//
	Contact(const Contact &obj);
	//Overloaded == Operator//
	bool operator==(const Contact &RHS);
	//Overloaded != Operator//
	bool operator!=(const Contact &RHS);

	//Get Functions for Private Member Variables//
	string getName();
	string getTelNum();
	string getEmail();

	//Set Functions for Variables//
	void setName(string);
	void setTelNum(string);
	void setEmail(string);

	//Deconstructor//
	~Contact();
};
#endif


