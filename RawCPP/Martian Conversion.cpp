/*	
	Jon Stoneman
	CSCI 140
	Project 3
	
	Description:
		Converts between Martian and base 10
		as many times needed
*/	

#include <iostream>
#include <string>

using namespace std;

void marsToEarth();
void earthToMars();

int main()
{
	bool exit = false;
	while(exit == false)
	do{
		int choice;
		cout << "Welcome to the Earth-Mars Numeric Converter" << endl;
		cout << "What would you like to do?" << endl;
		cout << "1:Convert Martian to Base-10" << endl;
		cout << "2:Convert Base-10 to Martian" << endl;
		cout << "3:Exit" << endl;
		cin >> choice;
		switch(choice)
		{
			case 1:
				marsToEarth();
				exit = false;
				break;
			case 2:
				earthToMars();
				exit = false;
				break;
			case 3:
				exit = true;
				break;
			default:
				cout << "Invalid Choice" << endl << endl;
		};
	}while(exit == false);
	return 0;
}

void marsToEarth()
{
	string martian;
	int baseTen = 0;
	int counter[6] = {0,0,0,0,0,0};
	
	cout << "Please enter a Martian number (@,Z,E,&,B,W,S)" << endl;
	cin >> martian;
	int loop = martian.length();
	
	for (int i = 0; i < loop; i++)
	{
		
		if (martian.at(i) == '@')
		{
			baseTen = baseTen + 1000;
		}
		else if (martian.at(i) == 'Z')
		{
			baseTen = baseTen + 500;
			counter[0] ++;
			if (counter[0] > 1)
				{
					baseTen = baseTen - 500;
				};
		}
		else if (martian.at(i) == 'E')
		{
			baseTen = baseTen + 100;
			counter[1] ++;
			if (counter[1] > 4)
				{
					baseTen = baseTen - 100;
				};
		}
		else if (martian.at(i) == '&')
		{
			baseTen = baseTen + 50;
			counter[2] ++;
			if (counter[2] > 1)
				{
					baseTen = baseTen - 50;
				};
		}
		else if (martian.at(i) == 'B')
		{
			baseTen = baseTen + 10;
			counter[3] ++;
			if (counter[3] > 4)
				{
					baseTen = baseTen - 10;
				};
		}
		else if (martian.at(i) == 'W')
		{
			baseTen = baseTen + 5;
			counter[4] ++;
			if (counter[4] > 1)
				{
					baseTen = baseTen - 5;
				};
		}
		else if (martian.at(i) == 'S')
		{
			baseTen = baseTen + 1;
			counter[5] ++;
			if (counter[5] > 4)
				{
					baseTen = baseTen - 1;
				};
		};
	}
	
	if (counter[0] > 1)
	{
		cout << "you can only have 1 Z, you entered " << counter[0] << " Z's" << endl;
	}
	if (counter[1] > 4)
	{
		cout << "you can only have 4 E's, you entered " << counter[1] << " E's" << endl;
	}
	if (counter[2] > 1)
	{
		cout << "you can only have 1 &, you entered " << counter[2] << " &'s" << endl;
	}
	if (counter[3] > 4)
	{
		cout << "you can only have 4 B's, you entered " << counter[3] << " B's" << endl;
	}
	if (counter[4] > 1)
	{
		cout << "you can only have 1 W, you entered " << counter[4] << " W's" << endl;
	}
	if (counter[5] > 4)
	{
		cout << "you can only have 4 S's, you entered " << counter[5] << " S's" << endl;
	}
	cout << martian << " is equal to " << baseTen << endl << endl;
}

void earthToMars()
{
	string martian;
	int baseTen;
	cout << "Please enter a base-ten integer" << endl;
	cin >> baseTen;
	int earth = baseTen;
	while(earth > 0)
	{
		if (earth >= 1000)
		{
			martian = martian + "@";
			earth = earth - 1000;
		}
		else if (earth >= 500)
		{
			martian = martian + "Z";
			earth = earth - 500;
		}
		else if (earth >= 100)
		{
			martian = martian + "E";
			earth = earth - 100;
		}
		else if (earth >= 50)
		{
			martian = martian + "&";
			earth = earth - 50;
		}
		else if (earth >= 10)
		{
			martian = martian + "B";
			earth = earth - 10;
		}
		else if (earth >= 5)
		{
			martian = martian + "W";
			earth = earth - 5;
		}
		else if (earth >= 1)
		{
			martian = martian + "S";
			earth = earth - 1;
		}
	}
	cout << baseTen << " is equal to " << martian << endl << endl;
}
