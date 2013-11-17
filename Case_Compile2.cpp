// Case_compile2.cpp : Defines the entry point for the console application.
//
// Module contains test main() for classes Record and Contacts to demonstrate
// that all methods can be called and will response.

//testing revision from dillon
#include <iostream>
using namespace std;

#include "record.h"
#include "contacts.h"

int main(){ //PH
// Tests classes Record and Contacts
   int status=0;

   cout << "Testing classes Record and Contacts \n\n";
   Contacts list; //constructs Contacts list object including memory allocation
   
   cout << "Constructor called and setRecordCounter called (expect 99): " 
      << list.getRecordCounter() << "\n\n";

   status = list.readContacts(); // reads Contacts list
   cout << "readContacts returns status code (expect 97): " << status << "\n\n";

   list.printContacts();

   status = list.enterNew();
   cout << "enterNew returns status code (expect 95): " << status << "\n\n";

   status = list.findPrintRecord();
   cout << "enterNew returns status code (expect 94): " << status << "\n\n";

   list.swapRecords(1,2);
 
   status = list.closeContacts();
   cout << "Exiting QualitySoft Application with status (expect 96): " 
      << status << "\n\n";

	return 0;
}

//
// function implementations  PH
//
int Record::inputRecord(Record person){
/* fills Record with info from the user and returns a status code */
   cout << "Arrived at inputRecord \n";
   return 98;
}

void Record::printRecord(string name){
/* prints Record with last name 'name' */
   cout << "Arrived at printRecord \n";
}

Contacts::Contacts(){
/* initializes private variables */
   recordCounter = 99;  //Application should initialize to 0
}

int Contacts::getRecordCounter(){
/* return value of recordCounter */
   cout << "Arrived at getRecordCounter \n";
   return recordCounter;
}
void Contacts::setRecordCounter(int number){ // PH
/* sets value of recordCounter to number */
   cout << "Arrived at setRecordCounter \n";
   recordCounter = number;
}

void Contacts::printContacts(){
/* prints all Record objects in class in alphabetized order */
   cout << "Arrived at printContacts \n";  
   int status = person[0].inputRecord(person[0]);
   cout << "Status from inputRecord is (expect 98): " << status << "\n\n";
   person[0].printRecord("Bart");
}

int Contacts::readContacts(){
/* sets all Record objects in class to random ZIP and phone values. 
Returns a status code.*/
   cout << "Arrived at readContacts \n";
   return 97;
}

int Contacts::closeContacts(){
/* writes all Record objects in class to disk. Returns a status code.*/
   cout << "Arrived at closeContacts \n";
   return 96;
}

int Contacts::enterNew(){
/* enters new Record object into array and returns status code. */
   cout << "Arrived at enterNew \n";
   return 95;
}

int Contacts::findPrintRecord(){
/* finds and prints Record(s) and returns status code */
   cout << "Arrived at findPrintRecord \n";
   return 94;
}

void Contacts::swapRecords(int first, int second){
/* swaps position of Records in the Contacts list (used for alphabetizing list */
   cout << "Arrived at swapRecords \n";   
}

//////////////////////// END OF MODULE ////////////////////////////////////////

/************************************ OUTPUT *********************************
Testing classes Record and Contacts

Arrived at getRecordCounter
Constructor called and setRecordCounter called (expect 99): 99

Arrived at readContacts
readContacts returns status code (expect 97): 97

Arrived at printContacts
Arrived at inputRecord
Status from inputRecord is (expect 98): 98

Arrived at printRecord
Arrived at enterNew
enterNew returns status code (expect 95): 95

Arrived at findPrintRecord
enterNew returns status code (expect 94): 94

Arrived at swapRecords
Arrived at closeContacts
Exiting QualitySoft Application with status (expect 96): 96

Press any key to continue . . .
******************************************************************************/

