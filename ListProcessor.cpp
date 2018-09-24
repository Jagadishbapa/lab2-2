// ListProcessor.cpp

// tom bailey   1540  30 sep 2011

// tom bailey   1030  27 jan 2012
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
	cows.insertAsLast(2.55);
	cout << "cows inserted two numbers" << endl;
	cout << "cows list  :  " << cows << endl;
	cout << "cows list sum: " << cows.sum() << endl;
	cout << "cows list size: " << cows.size() << endl << endl;
	cows.removeFirst();
	cout << "cows list removed first" << endl;
	cout << "cows list  :  " << cows << endl;
	cout << "cows list size: " << cows.size() << endl;
	cout << "cows list sum: " << cows.sum() << endl;

	List horses(cows);
	cout << "cows list  :  " << cows << endl;
	cout << "horses list:  " << horses << endl;
	cout << "horses list size: " << horses.size() << endl;
	cout << "horses list sum: " << horses.sum() << endl << endl;;
	horses.removeFirst();
	cout << "horses removed first" << endl;
	horses.insertAsFirst(5.67);
	cout << "horses inserted first" << endl;
	cows.insertAsFirst(6.78);
	cout << "cows inserted first" << endl;
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
	cout << "cows list size: " << cows.size() << endl;
	cout << "horses list size: " << horses.size() << endl;
	cout << "horses list:  " << horses << endl;
	cout << "horses list sum: " << horses.sum() << endl;
	cout << "pigs list  :  " << pigs << endl << endl;
	cout << "pigs list size: " << cows.size() << endl;
	cout << "pigs list sum: " << pigs.sum() << endl;

	cout << "End of code" << endl;
	int pause;
	std::cin >> pause;

	return 0;
}

