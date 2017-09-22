//Jarek Brown
//HW1.3 Driver

#include "HW1.3.cpp"

int main()
{
	Collection<int> collection(10);
	collection.isEmpty(); //placed for testing, output is commented out
	
	collection.insert(1);
	collection.insert(42);
	collection.insert(13);
	collection.insert(17);
	collection.insert(54);
	collection.insert(19);
	collection.isEmpty(); //placed for testing
	collection.print();
	
	collection.remove(1);
	collection.remove(24); //should return "value not found"
	collection.print();
	
	collection.removeRandom();
	collection.removeRandom();
	collection.print();
	
	collection.insert(75);
	collection.insert(9);
	collection.insert(7);
	collection.insert(15);
	collection.insert(33);
	collection.insert(22);
	collection.insert(44);
	collection.print();
	
	collection.insert(11); //used to test when collection is full
	
	collection.makeEmpty();
	collection.isEmpty(); //placed for testing
}