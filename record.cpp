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

void Record::inputRecord(){
/* fills temp with contact info */
   string str;
   cout << "give input: ";
   cin >> lastName;
   // lastName =  str;
   cout << "lastName is: " << lastName;
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
   /////////////////////// END OF MODULE --  record.cpp  ////////////////////