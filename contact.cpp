/***********************************************************************************************************
 * Author: Zachary Thornton
 * Date: 01/09/2018
 * Description: Contact Class implementation file. This holds the get and set fuctions, overloaded operators, and constructors
 **********************************************************************************************************/

 #include "contact.hpp"


/**********************
 *  Default Constructor
 **********************/
Contact::Contact(string name, string telNum, string email)
{
	this->name = name;
	this->telNum = telNum;
	this->email = email;
}

/**********************
*  Copy Constructor
**********************/
Contact::Contact(const Contact& obj)
{
	this->name = obj.name;
	this->telNum = obj.telNum;
	this->email = obj.email;
}

/*************************************************************
* Overloaded Operator. Returns TRUE if contacts are equal, FALSE if not
*************************************************************/
bool Contact::operator==(const Contact& RHS)
{
	if(this->name == RHS.name && this->telNum == RHS.telNum && this->email == RHS.email)
	{
		return true;
	}
	return false;
}

/***************************************************************************
* Overloaded Operator. Returns TRUE if contacts are NOT equal, FALSE if they are eqaul
***************************************************************************/
bool Contact::operator!=(const Contact& RHS)
{
	if (this->name != RHS.name || this->telNum != RHS.telNum|| this->email != RHS.email)
	{
		return true;
	}
	return false;
}

/***********************************
* Get Name Function. Returns Name
************************************/
string Contact::getName()
{
	return name;
}

/*************************************************
* Get Telephone Test Function. Returns Telephone Number
**************************************************/
string Contact::getTelNum()
{
	return telNum;
}

/***********************************
* Get Email Function. Returns Email
************************************/
string Contact::getEmail()
{
	return email;
}

/*********************************************************
* Set Name Function. Sets the variable equal to the value passed in
**********************************************************/
void Contact::setName(string name)
{
	this->name = name; 
}

/*******************************************************************
* Set Telephone Number Function. Sets the variable equal to the value passed in
********************************************************************/
void Contact::setTelNum(string telNum)
{
	this->telNum = telNum; 
}

/*********************************************************
* Set Email Function. Sets the variable equal to the value passed in
**********************************************************/
void Contact::setEmail(string email)
{
	this->email = email; 
}

/***************
* Deconstructor
***************/
Contact::~Contact()
{
}
