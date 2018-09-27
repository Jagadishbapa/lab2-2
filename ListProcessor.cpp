// ListProcessor.cpp

//  William Cary 2030 24 Sep 2018

// Exercise the List class with verbose Node constructor
//   and destructor.

#include "LinkedList.h"


int main()
{
	List cows;
	cout << "cows list  :  " << cows << endl << endl;
	cout << "cows list size: " << cows.size() << endl;
	cows.insertAsFirst(1.23);
	cows.insertAsFirst(2.34);
	cout << "cows list  :  " << cows << endl;
	cout << "cows list sum: " << cows.sum() << endl;
	cout << "cows list size: " << cows.size() << endl << endl;
	cows.removeFirst();
	cout << "cows list removed first" << endl;
	cout << "cows list  :  " << cows << endl;
	cout << "cows list size: " << cows.size() << endl;
	cout << "cows list sum: " << cows.sum() << endl;
	cout << "cows list : " << cows << endl;
	cout << "cows list size: " << cows.size() << endl;
	cout << "cows list sum: " << cows.sum() << endl;

	List horses(cows);
	cout << "cows list  :  " << cows << endl;
	cout << "horses list:  " << horses << endl;
	cout << "horses list size: " << horses.size() << endl;
	cout << "horses list sum: " << horses.sum() << endl << endl;;
	horses.removeFirst();
	cout << "Removed First entry in horses" << endl;
	cout << "Entry inserted at first position for horses" << endl;
	horses.insertAsFirst(5.67);
	cout << "Entry inserted at first position for cows" << endl;
	cows.insertAsFirst(6.78);
	cout << "cows list  :  " << cows << endl;
	cout << "cows list size: " << cows.size() << endl;
	cout << "cows list sum: " << cows.sum() << endl;
	cout << "horses list:  " << horses << endl << endl;
	cout << "horses list size: " << horses.size() << endl;
	cout << "horses list sum: " << horses.sum() << endl;

	List pigs;
	cout << "cows list  :  " << cows << endl;
	cout << "horses list:  " << horses << endl;
	cout << "pigs list  :  " << pigs << endl << endl;
	cout << "pigs list size: " << pigs.size() << endl;
	cout << "cows list sum: " << pigs.sum() << endl;
	pigs = cows;
	cout << "cows list  :  " << cows << endl;
	cout << "cows list size: " << cows.size() << endl;
	cout << "horses list:  " << horses << endl;
	cout << "horses list size: " << horses.size() << endl;
	cout << "horses list sum: " << horses.sum() << endl;
	cout << "pigs list  :  " << pigs << endl << endl;
	cout << "pigs list size: " << pigs.size() << endl;
	cout << "pigs list sum: " << pigs.sum() << endl;
	pigs = horses;
	cout << "cows list  :  " << cows << endl;
	cout << "cows list size: " << cows.size() << endl << endl;
	cout << "horses list size: " << horses.size() << endl;
	cout << "horses list:  " << horses << endl;
	cout << "horses list sum: " << horses.sum() << endl << endl;

	cout << "pigs list  :  " << pigs << endl << endl;
	cout << "pigs list size: " << cows.size() << endl;
	cout << "pigs list sum: " << pigs.sum() << endl;

	cout << endl << endl << "Object for testing insertAtLast() function"
		<< endl << "creating object: last" << endl;
	List last;
	cout << "Object created" << endl;
	last.insertAsFirst(1.1);
	cout << "last: " << last << endl;
	last.insertAsLast(1.2);
	cout << "inserted in last position: 1.2" << endl;
	cout << "last : " << last << endl;
	cout << "inserted at first position: 1.01" << endl;
	last.insertAsFirst(1.01);
	cout << "last: " << last << endl;
	cout << "last sum: " << last.sum();
	cout << "inserted at last position: 1.31" << endl;
	last.insertAsLast(1.31);
	cout << "last: " << last << endl;
	cout << "last sum: " << last.sum() << endl;
	cout << endl;
	List emptyForInsertAsLast;
	cout << "emptyForInsertAsLast: " << emptyForInsertAsLast << endl;
	cout << "inserting into emptyForInsertAsLast at last position: 1.3" << endl;
	emptyForInsertAsLast.insertAsLast(1.3);
	cout << "emptyForInsertAsLast: " << emptyForInsertAsLast << endl;
	cout << endl << "End of code" << endl;
	int pause;
	std::cin >> pause;

	return 0;
}

