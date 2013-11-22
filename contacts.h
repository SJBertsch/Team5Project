#ifndef CONTACTS_H
#define CONTACTS_H

#include <fstream>
using namespace std;

/*
One object of class Contacts contains an array of Record objects of size MAXRECORDS.
Class contains methods for:
   > reading and writing the Contacts object's Records to the disk
   > entering a new Record into the Contacts object
   > finding and displaying a Record from the Contacts object
   > displaying all Records in the Contacts object in alphabetically order
*/
const string CONTACTSFILE = "contacts.cs2"; // local directory file name for class Contacts
class Contacts { // PH
private:
   static const int MAXRECORDS = 10;
   Record person[MAXRECORDS];
   int recordCounter; /* contains number of populated records in person[] */
public:
   Contacts();
   /* initializes private variables */
   
   int readContacts();
   /* reads all Record objects in class from disk and returns a status code. */

   int closeContacts();
   /* writes all Record objects in class to disk and returns a status code.*/

   int enterNew();
   /* enters new Record object into array and returns status code. */

   int findRecord(int position, string name);
   /* returns Record index where ‘name’ matches lastName for index >= position */

   int printFind(string name);
   /* finds and prints Record(s) with lastName of ‘name’ */

   void swapRecords(int first, int second);
   /* swaps position of Records in the Contacts list (used for alphabetizing list) */

   void printContacts();
   /* prints alphabetized Contacts list */
};

#endif

////////////////////////// END of contacts.h ////////////////////////