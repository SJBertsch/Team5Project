#ifndef RECORD_H
#define RECORD_H

#include <iostream>

using namespace std;

/* 
One object of class Record stores name, address, email, phone and notes.
Class contains methods for input and display of a Record with the console.
*/
class Record { //PH
private:
   string lastName;
   string firstName;
   string streetAddress;
   string city;
   string state;
   long int zip;
   string email;
   int areaCode;
   long int phone;
   string notes;
public:
   int inputRecord(Record person);
   /* fills Record with info from the user and returns a status code */

   void printRecord(string name);
   /* displays Record with last name 'name' to the console */
};

#endif
