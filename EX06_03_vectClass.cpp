

///////////////////////////////////////

//Melanie Hynden
//implemeting vector class
//homework 6, number 3
/////////////////////////////////////////////
#include <iostream>
using namespace std;
//create the vector class template
template<typename T> //set up the template
class theVector
{
public:
	theVector(); //default constructor 
	unsigned const int size(); //returns number of elements in this vector
	theVector(int vectSize, T element); //constructs vector with the initial size filled with specified values 
	theVector(int vectSize); //overloaded constructor 
	void push_back(T element); //appends the element in the vector
	void pop_back(); //removes the last element from the vector
	bool empty(); //returns true if vector is empty
	T at(int index); //returns the element at the specified index in the vector
	void clear(); //removes all elements from the vector
	void swap(theVector v2); //swaps contents of this vector with specified vector
private:
	T elements[50];
	int vectSize;
};
//vector function of type "theVector" 
template<typename T>
theVector<T>::theVector()
{
	vectSize = 0;
}

//overloaded constructor 
template<typename T>
theVector<T>::theVector(int vectSize)
{
	size = vectSize; 
}

template<typename T>
theVector<T>::theVector(int size, T element)
{
	size = vectSize; 
	element[vectSize] = element; 
}

//creates the function to check for empty 
template<typename T>
bool theVector<T>::empty()
{
	return (vectSize == 0); //it is empty, bool false
}
//at function, returning element at specific spot 
template<typename T>
T theVector<T>::at(int index)
{
	return elements[index];
}

//push back function
template<typename T>
void theVector<T>::push_back(T element)
{
	elements[vectSize] = element; 
	vectSize++;
	//moves it over one, with the increment used
}
//pop back funciton
template<typename T>
void theVector<T>::pop_back()
{
	return elements[vectSize]; 
	vectSize--; //similar to push back, but decrement instead of increment
}

//size function

template<typename T>

unsigned const int theVector<T>::size()

{

	return vectSize;

}

//clear function

template<typename T>

void theVector<T>::clear()

{

	vectSize = 0; //clears it by setting equal to zero 

}

//swap function

template<typename T>

void theVector<T>::swap(theVector v2)

{
	T temp[50]; //set it to temp to 50
	int tempSize = v2.size(); //set size equal to v2
	for (int i = 0; i < v2.size(); i++)
	{
		temp[i] = v2.at(i); //go through and set each equal to each other 
	}
	
	//I cannot figure out how to complete this swap function
}

int main()

{

	theVector<int> v1; //making vector 1
	v1.push_back(1); //call the push back
	v1.push_back(2);
	v1.push_back(3);
	v1.push_back(4);
	v1.push_back(5);

	theVector<int> v2; //making vector 2
	v2.push_back(6);
	v2.push_back(7);
	v2.push_back(8);
	v2.push_back(9);
	v2.push_back(10);
	v1.swap(v2); //calling the swap function
	for (int i = 0; i < v1.size(); i++)
	{
		cout << v1.at(i) << " "; //cout the answer so can check/be seen 
	}
}



