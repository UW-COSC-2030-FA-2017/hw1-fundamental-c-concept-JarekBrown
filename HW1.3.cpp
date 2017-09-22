//Jarek Brown
//September 17 2017
//Homework 1 Part 3

#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

template <typename T> class Collection
{
private:
	T *collection;
	int size, end;
	
public:
	Collection (int s)
	{
		size = s; //used to track max size
		end = 0; //used to track the placement of the last value
		collection = new T [size];
	}
	
	~Collection()
	{
		delete collection;
		cout << "collection deleted" << endl;
	}
	
	//checking if the collection is empty
	bool isEmpty() 
	{
		bool empty = true;
		if(end != 0) {empty = false;}
		//if(empty) {cout << "collection is empty." << endl;} //these two lines used for testing
		//else{cout << "collection not empty." << endl;}
		return empty;
	}
	
	//clears the collection
	void makeEmpty()
	{
		end = 0;
		cout << "collection emptied" << endl;
	}
	
	//inserts a value into collection, if there is room
	void insert(int x)
	{
		if(size == end) {cout << "collection is full" << endl << endl;}
		else{
			collection[end] = x;
			end++;
			cout << "value inserted" << endl;
		}
	}
	
	//removes value, if it's in collection
	void remove(int x)
	{
		int i;
		if(notContained(x)) {cout << "value not found" << endl;}
		else{
			for(i = 0; i < size; i++)
			{
				if(collection[i] == x)
				{
					for(int j = i; j < end; j++)
					{
						collection[j] = collection[j+1];
					}
				}
			}
			collection[i] = -1;
			end--;
			cout << "value removed" << endl;
		}
	}
	
	//removes random value from collection
	void removeRandom()
	{
		srand(time(NULL));
		int index = rand() % end + 0;
		int random = collection[index];
		remove(random);
	}
	
	//checks if the value is in collection
	bool notContained(int x)
	{
		bool found = false;
		for(int i = 0; i < size; i++)
		{
			if(collection[i] == x) 
			{
				found = true;
				break;
			}
		}
		if(found == true) {return false;}
		else{return true;}
	}
	
	void print()
	{
		for(int i = 0; i < end; i++)
		{
			cout << collection[i] << endl;
		}
	}
	
	/* used to check size of collection while in main()
	int collectionSize()
	{
		return size;
	}
	
	 * used to check number of values stored while in main()
	int contentAmount()
	{
		 return contents;
	}
	  */
};