#ifndef CONTACTS_H
#define CONTACTS_H

/*
One object of class Contacts contains an array of Record objects of size MAXRECORDS.
Class contains methods for:
   > getting and setting the number of populated Records,
   > displaying all Records in the Contacts object in alphabetically order,
   > reading and writing the Contacts object's Records to the disk,
   > entering a new Record into the Contacts object,
   > finding and displaying a Record from the Contacts object.
*/
class Contacts { // PH
private:
   static const int MAXRECORDS = 1000;
   Record person[MAXRECORDS];
   int recordCounter; /* contains number of populated records in person[] */
public:
   Contacts();
   /* initializes private variables */

   int getRecordCounter();
   /* returns value of recordCounter */

   void setRecordCounter(int number);
   /* sets value of recordCounter to number */
   
   void printContacts();
   /* prints all Record objects in class in alphabetized order */

   int readContacts();
   /* reads all Record objects in class from disk. Returns a status code. */

   int closeContacts();
   /* writes all Record objects in class to disk. Returns a status code.*/

   int enterNew();
   /* enters new Record object into array and returns status code. */

   int findPrintRecord();
   /* finds and prints Record(s) and returns status code */

   void swapRecords(int first, int second);
   /* swaps position of Records in the Contacts list (used for alphabetizing list) */
};

#endif