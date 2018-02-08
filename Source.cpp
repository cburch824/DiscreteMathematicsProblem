//Christopher Burch 2016


#include<iostream>
#include<iomanip>
using namespace std;


int convertToInt(int hundred, int ten, int one);

int main()
{
	int one, ten, hundred;
	int count = 0;
	int min = 1;
	int max = 7; // enter the max number here
	

	max++; //makes the loops work without putting a +1 in all of them but still letting you directly enter the max number you want

//Determine the total sample space	
	for (hundred = min; hundred < max; hundred++)
	{
		
		for (ten = min; ten < max; ten++)
		{

			for (one = min; one < max; one++)
			{
				if (one != ten && one != hundred && ten != hundred)  //if none of the place values are equal to each other
				{
					count++; //increment the count
					cout << hundred << ten << one << " "; //print the value followed by a space
				}
			}
		}
		cout << endl; //print a space between the hundreds spot. Useful if you have an obnoxiously large screen, obnoxious if you have a uselessly small screen.
		
	}

	cout << endl << "Count = " << count << endl << endl << endl; //print the final, correct count like the fully functioning program you are


//determine the count over a given value (520 in this case)
	int value = 520; //value you want it to be more than
	int countOverValue = 0;
	int currentValue;//used for operation

#pragma region Nested for loops
	for (hundred = min; hundred < max; hundred++)
	{

		for (ten = min; ten < max; ten++)
		{

			for (one = min; one < max; one++)
			{
#pragma endregion
				currentValue = convertToInt(hundred, ten, one);
				if (one != ten && one != hundred && ten != hundred && currentValue > value)  //if none of the place values are equal to each other
				{


					countOverValue++; //increment the count
					cout << currentValue << " "; //print the value followed by a space
				}
			}
		}
		cout << endl; 

	}

	cout << endl << "Count over " << value << " = " << countOverValue << endl; //print the final, correct count
	return 0;




}

int convertToInt(int hundred, int ten, int one)
{
	int compoundValue = (hundred * 100) + (ten * 10) + one;

	return compoundValue;
}
