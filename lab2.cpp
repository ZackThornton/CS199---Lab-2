#include <iostream>
#include <string>
#include "contact.hpp"
using namespace std;

int main()
{
	Contact p3;
	cout << "Name: " << p3.getName() << " Email: " << p3.getEmail() << " Tele Number: " << p3.getTelNum() << endl;

	Contact person1;
	person1.setEmail("zack.thornton@nguard.com");
	person1.setName("Zack");
	person1.setTelNum("585-755-3728");

	Contact person2;
	person2.setEmail("zack.thornton@nguard.com");
	person2.setName("Zack");
	person2.setTelNum("585-755-3728");

	cout << person1.getName() << endl << person1.getTelNum() << endl << person1.getEmail() << endl;
	
	cout << "+++++++++++++++++++++++++" << endl;

	if (person1 == person2)
	{
		cout << "They are the same" << endl;
	}
	
	if(person1 != person2)
	{
		cout << "They are not the same" << endl;
	}
	
	system("pause");
	return 0;
}
