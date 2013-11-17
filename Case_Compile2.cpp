// Case_compile2.cpp : Defines the entry point for the console application.
//
// Module contains test main() for classes Record and Contacts to demonstrate
// that all methods can be called and will response.

#include <iostream>
using namespace std;

#include "record.h"
#include "contacts.h"
#include "record.cpp"
#include "contacts.cpp"

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
