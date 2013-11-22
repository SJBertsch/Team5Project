//
// Module contains test main() for classes Record and Contacts to demonstrate
// that all methods can be called and will response.

#include <iostream>
using namespace std;
#include "record.h"
#include "contacts.h"

int main(){ // PH
// Tests classes Record and Contacts
   int status=0;

   cout << "Testing classes Record and Contacts \n\n";
   Contacts list; //constructs Contacts list object including memory allocation
   
   status = list.readContacts();
   cout << "\nStatus from list.readContacts is: " << status << " Expecting 97.\n";
   
   status = list.enterNew();
   cout << "\nStatus from list.enterNew is: " << status << " Expecting 95.\n";

   status = list.findRecord(0,"Paul");
   cout << "\nStatus from list.findRecord is: " << status << " Expecting 94.\n";

   status = list.printFind("Paul");
   cout << "\nStatus from list.printFind is: " << status << " Expecting 92.\n";

   list.swapRecords(0,1);
   list.printContacts();

   status = list.closeContacts();
   cout << "\nStatus from list.closeContacts is: " << status << " Expecting 96.\n";

	return 0;
}

//////////////////////// END OF MODULE -- MAIN ///////////////////////////////

/***************************** OUTPUT ****************************************
Testing classes Record and Contacts

Constructor called

Arrived at readContacts
Filename is: contacts.cs2
 Arrived at Record::putRecord
Status from list.readContacts is: 97 Expecting 97.

Arrived at enterNew for entry #0

 Arrived at Record::putRecord
Status from list.enterNew is: 95 Expecting 95.

Arrived at findRecord

Status from list.findRecord is: 94 Expecting 94.

Arrived at Contacts::printFind
Arrived at Record::getLastName
Returned name is: paul
Status from list.printFind is: 92 Expecting 92.
Arrived at Contacts::swapRecords
Arrived at Contacts::printContacts
Arrived at Record::printRecord
Arrived at closeContacts

Arrived at Record::getRecord
Status from list.closeContacts is: 96 Expecting 96.
Press any key to continue . . .
***********************************************************************/
