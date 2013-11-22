//
// Methods for Class Record
//

#include <string>
#include <iostream>
#include <math.h>
#include <fstream>
using namespace std;

#include <sstream>
using std::stringstream;

<<<<<<< HEAD
<<<<<<< HEAD
void Record::printRecord(){
/* displays Record with last name 'name' to the console */
   cout << "Arrived at Record::printRecord \n";

=======
=======
>>>>>>> e865e9d34026ee038109a37bc16c56e0dce06005
void Record::inputRecord(){
/* fills Record with contact info */

   // put code here for getting and checking input from console

   cout << "Input Last name: ";
   getline(cin, lastName);
   cout << "Input First name: ";
   getline(cin, firstName);
   cout << "Input Street Address: ";
   getline(cin, streetAddress);
   cout << "Input City: ";
   getline(cin, city);
   cout << "Input State: ";
   getline(cin, state);
   cout << "Input Zip: ";
   getline(cin, zip);
   cout << "Input Email: ";
   getline(cin, email);
   cout << "Input Phone: ";
   getline(cin, phone);
   cout << "Input Notes: ";
   getline(cin, notes);
}

void Record::printRecord(){
/* displays Record with last name 'name' to the console */
   cout << "Arrived at Record::printRecord \n";
   cout << "Last name is: " << lastName << endl;
   cout << "First name is: " << firstName << endl;
   cout << "Street Address is: " << streetAddress << endl;
   cout << "City is: " << city << endl;
   cout << "State is: " << state << endl;
   cout << "ZIP is: " << zip << endl;
   cout << "email is: " << email << endl;
   cout << "Phone is: " << phone << endl;
   cout << "Notes is: " << notes << endl;
<<<<<<< HEAD
>>>>>>> 042346a3598c17f9448b07061306547d7e0e7706
=======
>>>>>>> e865e9d34026ee038109a37bc16c56e0dce06005
}

Record Record::getRecord(){ // PH
/* returns contents of Record */
   cout << "\nArrived at Record::getRecord";
   Record temp;
   temp.lastName = lastName;
   temp.firstName = firstName;
   temp.streetAddress = streetAddress;
   temp.city = city;
   temp.state = state;
   temp.zip = zip;
   temp.email = email;
   temp.phone = phone;
   temp.notes = notes;
   return temp;
}

void Record::putRecord(Record input){ // PH
/* puts contents of input into Record */
   cout << "\n Arrived at Record::putRecord";
   lastName = input.lastName;
   firstName = input.firstName;
   streetAddress = input.streetAddress;
   city = input.city;
   state = input.state;
   zip = input.zip;
   email = input.email;
   phone = input.phone;
   notes = input.notes;
}

string Record::getLastName(){
/* returns lastName in Record */
   cout << "Arrived at Record::getLastName \n";
   // return lastName;
   return "paul"; // REMOVE: test code only
}
<<<<<<< HEAD
   /////////////////////// END OF MODULE --  record.cpp  ////////////////////
=======
   /////////////////////// END OF MODULE --  record.cpp  ////////////////////
>>>>>>> e865e9d34026ee038109a37bc16c56e0dce06005
