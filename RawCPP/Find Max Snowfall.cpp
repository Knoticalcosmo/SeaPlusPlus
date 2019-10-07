/*
 *  Author: Jon Stoneman
 *  Class:  CSCI 140
 *  Assignment: Week #, program 1
 *  Program Description:
 *      Description
 */

#include <iostream>
#include <iomanip>
#include <ctime>
#include <cstdlib>
using namespace std;

int findmax(int[], int, string);

int main()
{
    srand(time(0));
    int snowfall[364];
    int january[30];
    int febuary[27];
    int march[30];
    int april[29];
    int may[30];
    int june[29];
    int july[30];
    int august[30];
    int september[29];
    int october[30];
    int november[30];
    int december[30];
    int max = 0;
    
    for (int i = 0; i <= 364; i++)
    {
        snowfall[i] = (rand() % 100) + 1;
        if (snowfall[i] > snowfall[max])
        {
            max = i;
        }
        if ((i >= 0) && (i < 31))
        {
            january[i - 0] = snowfall[i];
        }
        else if ((i >= 31) && (i < 59))
        {
            febuary[i - 31] = snowfall[i];
        }
        else if ((i >= 59) && (i < 90))
        {
            march[i - 59] = snowfall[i];
        }
        else if ((i >= 90) && (i < 120))
        {
            april[i - 90] = snowfall[i];
        }
        else if ((i >= 120) && (i < 151))
        {
            may[i - 120] = snowfall[i];
        }
        else if ((i >= 151) && (i < 181))
        {
            june[i - 151] = snowfall[i];
        }
        else if ((i >= 181) && (i < 212))
        {
            july[i - 181] = snowfall[i];
        }
        else if ((i >= 212) && (i < 243))
        {
            august[i - 212] = snowfall[i];
        }
        else if ((i >= 243) && (i < 273))
        {
            september[i - 243] = snowfall[i];
        }
        else if ((i >= 273) && (i < 304))
        {
            october[i - 273] = snowfall[i];
        }
        else if ((i >= 304) && (i < 335))
        {
            november[i - 304] = snowfall[i];
        }
        else if ((i >= 335) && (i < 366))
        {
            december[i - 335] = snowfall[i];
        };
        
    }
    bool quit;
    while (quit == false)
    {
        int input;
        cout << "enter in a month to see average snowfall" << endl;
        cout << "1:January   " << "2:Febuary  " << "3:March     " << "4:April     " << endl;
        cout << "5:May       " << "6:June     " << "7:July      " << "8:August    " << endl;
        cout << "9:September " << "10:October " << "11:November " << "12:December " << endl;
        cout << "0:Overall   " << "13:QUIT" << endl;
        cin >> input;
        switch (input)
        {
            case 0:
                findmax(snowfall, 365, "Day");
                break;
			case 1:
                findmax(january, 31, "January");
                break;
            case 2:
                findmax(febuary, 28, "Febuary");
                break;
            case 3:
                findmax(march, 31, "March");
                break;
            case 4:
                findmax(april, 30, "April");
                break;
            case 5:
                findmax(may, 31, "May");
                break;
            case 6:
                findmax(june, 30, "June");
                break;
            case 7:
                findmax(july, 31, "July");
                break;
            case 8:
                findmax(august, 31, "August");
                break;
            case 9:
                findmax(september, 30, "September");
                break;
            case 10:
                findmax(october, 31, "October");
                break;
            case 11:
                findmax(november, 31, "November");
                break;
            case 12:
                findmax(december, 31, "December");
                break;
            case 13:
                quit = true;
                break;
            default:
                quit = false;
                break;
        }
    }
}

int findmax(int array[], int days, string month)
{
    int max = 0;
    for (int i = 0; i <= (days - 1); i++)
    {
        if (array[i] > array[max])
        {
            max = i;
        }
    }
    cout << "on " << month << " " << max + 1 << ": there were " << array[max] << " inches of snow"<< endl;
                
}

