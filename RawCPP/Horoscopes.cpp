/*
 *  Author: Jon Stoneman
 *  Class:  CSCI 140
 *  Assignment: Lab 3
 *  Program Description:
 *      Horoscopes and Astrological Signs are found
 *      based on your birth date
 * 
 *      this was a lot of if statements
 *
 *      I do not understand horoscopes btw so this might
 *      not be right
 */
#include <iostream>
using namespace std;

//Variables
int month;
int day;
int sign;
    // Sign Values
    /* 1 = Capricorn
    * 2 = Aquarius
    * 3 = Pisces
    * 4 = Aries
    * 5 = Taurus
    * 6 = Gemini
    * 7 = Cancer
    * 8 = Leo
    * 9 = Virgo
    * 10 = Libra
    * 11 = Scorpio
    * 12 = Sagittarius
    */
bool blueMoon;

int main()
{
// Simple prompt for information
    cout << "Please enter your birthday for a free horoscope!" << endl;
    cout << "(please type as : mm dd) ";
    cin >> month >> day;
    cout << endl;
    
// if statements to try to determine astrological sign based by month then day
    
    //January
    if (month == 1)
    {
        if ((day >= 1) && (day <= 19))
        {
            cout << "you are a Capricorn!" << endl;
            sign = 1;
        }
        else if ((day >= 20) && (day <= 31))
        {
            cout << "you are an Aquarius!" << endl;
            sign = 2;
        }
        else
        {
            cout << "invalid day" << endl;
        }
    }
    
    //Febuary
    else if (month == 2)
    {
        if ((day >= 1) && (day <= 18))
        {
            cout << "you are an Aquarius!" << endl;
            sign = 2;
        }
        else if ((day >= 19) && (day <= 29))
        {
            cout << "you are a Pisces!" << endl;
            sign = 3;
        }
        else
        {
            cout << "invalid day" << endl;
        }
    }
    
    //March
    else if (month == 3)
    {
        if ((day >= 1) && (day <= 20))
        {
            cout << "you are a Pisces!" << endl;
            sign = 3;
        }
        else if ((day >= 21) && (day <= 31))
        {
            cout << "you are an Aries!" << endl;
            sign = 4;
        }
        else
        {
            cout << "invalid day" << endl;
        }
    }
    
    //April
    else if (month == 4)
    {
        if ((day >= 1) && (day <= 19))
        {
            cout << "you are an Aries!" << endl;
            sign = 4;
        }
        else if ((day >= 20) && (day <= 31))
        {
            cout << "you are a Taurus!" << endl;
            sign = 5;
        }
        else
        {
            cout << "invalid day" << endl;
        }
    }
    
    //May
    else if (month == 5)
    {
        if ((day >= 1) && (day <= 20))
        {
            cout << "you are a Taurus!" << endl;
            sign = 5;
        }
        else if ((day >= 21) && (day <= 31))
        {
            cout << "you are a Gemini!" << endl;
            sign = 6;
        }
        else
        {
            cout << "invalid day" << endl;
        }
    }
    
    //June
    else if (month == 6)
    {
        if ((day >= 1) && (day <= 21))
        {
            cout << "you are a Gemini!" << endl;
            sign = 6;
        }
        else if ((day >= 22) && (day <= 31))
        {
            cout << "you are a Cancer!" << endl;
            sign = 7;
        }
        else
        {
            cout << "invalid day" << endl;
        }
    }
    
    //July
    else if (month == 7)
    {
        if ((day >= 1) && (day <= 22))
        {
            cout << "you are a Cancer!" << endl;
            sign = 7;
        }
        else if ((day >= 23) && (day <= 31))
        {
            cout << "you are a Leo!" << endl;
            sign = 8;
        }
        else
        {
            cout << "invalid day" << endl;
        }
    }
    
    //August
    else if (month == 8)
    {
        if ((day >= 1) && (day <= 23))
        {
            cout << "you are a Leo!" << endl;
            sign = 8;
        }
        else if ((day >= 24) && (day <= 31))
        {
            cout << "you are a Virgo!" << endl;
            sign = 9;
        }
        else
        {
            cout << "invalid day" << endl;
        }
    }
    
    //September
    else if (month == 9)
    {
        if ((day >= 1) && (day <= 22))
        {
            cout << "you are a Virgo!" << endl;
            sign = 9;
        }
        else if ((day >= 23) && (day <= 31))
        {
            cout << "you are a Libra!" << endl;
            sign = 10;
        }
        else
        {
            cout << "invalid day" << endl;
        }
    }
    
    //October
    else if (month == 10)
    {
        if ((day >= 1) && (day <= 22))
        {
            cout << "you are a Libra!" << endl;
            sign = 10;
        }
        else if ((day >= 23) && (day <= 31))
        {
            cout << "you are a Scorpio!" << endl;
            sign = 11;
        }
        else
        {
            cout << "invalid day" << endl;
        }
    }
    
    //November
    else if (month == 11)
    {
        if ((day >= 1) && (day <= 19))
        {
            cout << "you are a Scorpio!" << endl;
            sign = 11;
        }
        else if ((day >= 20) && (day <= 31))
        {
            cout << "you are a Sagittarius!" << endl;
            sign = 12;
        }
        else
        {
            cout << "invalid day" << endl;
        }
    }
    
    //December
    else if (month == 12)
    {
        if ((day >= 1) && (day <= 19))
        {
            cout << "you are a Sagittarius!" << endl;
            sign = 12;
        }
        else if ((day >= 20) && (day <= 31))
        {
            cout << "you are a Capricorn!" << endl;
            sign = 1;
        }
        else
        {
            cout << "invalid day" << endl;
        }
    }
    
    //Garbage
    else
    {
        cout << "Invalid month" << endl;
    }
    cout << endl;
    
// if statements to find if someone was born on a blue moon date
    
    // January 29-31
    if ((month == 1) && (day >= 29) && (day <= 31))
    {
        blueMoon = 1;
    }
    
    // March 29-31
    else if ((month == 3) && (day >= 11) && (day <= 13))
    {
        blueMoon = 1;
    }
    
    // May 2-5
    else if ((month == 5) && (day >= 2) && (day <= 5))
    {
        blueMoon = 1;
    }
    
    // July 20-23
    else if ((month == 7) && (day >= 20) && (day <= 23))
    {
        blueMoon = 1;
    }
    
    // August 21-24
    else if ((month == 8) && (day >= 21) && (day <= 24))
    {
        blueMoon = 1;
    }
    
    // october 10-13
    else if ((month == 10) && (day >= 10) && (day <= 13))
    {
        blueMoon = 1;
    }
    
    // December 20-24
    else if ((month == 12) && (day >= 20) && (day <= 24))
    {
        blueMoon = 1;
    }
    
    else
    {
        blueMoon = 0;
    }

// Blue moon horoscope, if you were born on a blue moon you get a special horoscope. i really don't know how this works and the lab manual is not the best...

    if ((blueMoon == 1) && (month == 1))
    {
        cout << "You were born anew in the light of the moon" << endl;
        cout << "In the cold winter night you fed from the spoon" << endl;
        cout << "Darkness waits ahead for you" << endl;
    }
    
    else if ((blueMoon == 1) && (month == 3))
    {
        cout << "The perilous journey wait for you" << endl;
        cout << "But have no fear, you're no fool" << endl;
        cout << "Inside your mind is a special tool" << endl;
    }
    
    else if ((blueMoon == 1) && (month == 5))
    {
        cout << "A light that strikes the dark," << endl;
        cout << "The great shimmering spark," << endl;
        cout << "Will light the way to your heart" << endl;
    }
    
    else if ((blueMoon == 1) && (month == 7))
    {
        cout << "If your decision is thorough" << endl;
        cout << "Then your enemies will burough" << endl;
        cout << "Down to the depths and horrors" << endl;
    }
    
    else if ((blueMoon == 1) && (month == 8))
    {
        cout << "you dare to search the deep?" << endl;
        cout << "For the hidden treasure you seek?" << endl;
        cout << "An adventurer you must be" << endl;
    }
    
    else if ((blueMoon == 1) && (month == 10))
    {
        cout << "Coming up with rhymes" << endl;
        cout << "Is an honest waste of time" << endl;
        cout << "But for those who dare to toil, will reap benefits from their soil" << endl;
    }
    
    else if ((blueMoon == 1) && (month == 12))
    {
        cout << "The year begins to darken" << endl;
        cout << "But to you we harken" << endl;
        cout << "The end for you will not be coming" << endl;
    }
    
    // horoscopes based on your sign, not blue moons
    
    else if ((blueMoon == 0) && (sign == 1))
    {
        cout << "Your future seems uncertain" << endl;
        cout << "But before we close the curtain" << endl;
        cout << "good luck we see for you, of which that is certain" << endl;
    }
    
    else if ((blueMoon == 0) && (sign == 2))
    {
        cout << "Your future seems uncertain" << endl;
        cout << "But before we close the curtain" << endl;
        cout << "We see you bring to others misfortune" << endl;
    }
    
    else if ((blueMoon == 0) && (sign == 3))
    {
        cout << "Your future seems uncertain" << endl;
        cout << "But before we close the curtain" << endl;
        cout << "Around the corner you'll find your fortune" << endl;
    }
    
    else if ((blueMoon == 0) && (sign == 4))
    {
        cout << "Your future seems uncertain" << endl;
        cout << "But before we close the curtain" << endl;
        cout << "You will be a truest friend, to help when others are hurting" << endl;
    }
    
    else if ((blueMoon == 0) && (sign == 5))
    {
        cout << "Your future seems uncertain" << endl;
        cout << "But before we close the curtain" << endl;
        cout << "We see with you true love waits for you to be flirting" << endl;
    }
    
    else if ((blueMoon == 0) && (sign == 6))
    {
        cout << "Your future seems uncertain" << endl;
        cout << "But before we close the curtain" << endl;
        cout << "tough luck we see for you, of which that is certain" << endl;
    }
    
    else if ((blueMoon == 0) && (sign == 7))
    {
        cout << "Your future seems uncertain" << endl;
        cout << "But before we close the curtain" << endl;
        cout << "We see you really hate rhymes, but you'll have a good time" << endl;
    }
    
    else if ((blueMoon == 0) && (sign == 8))
    {
        cout << "Your future seems uncertain" << endl;
        cout << "But before we close the curtain" << endl;
        cout << "You will find the truth you want to know" << endl;
    }
    
    else if ((blueMoon == 0) && (sign == 9))
    {
        cout << "Your future seems uncertain" << endl;
        cout << "But before we close the curtain" << endl;
        cout << "Coming up with things is tricky, but your situation isn't sticky" << endl;
    }
    
    else if ((blueMoon == 0) && (sign == 10))
    {
        cout << "Your future seems uncertain" << endl;
        cout << "But before we close the curtain" << endl;
        cout << "We see for you some pain, but with it some gain" << endl;
    }
    
    else if ((blueMoon == 0) && (sign == 11))
    {
        cout << "Your future seems uncertain" << endl;
        cout << "But before we close the curtain" << endl;
        cout << "A gift for you, you'll soon find, at the end of the line" << endl;
    }
    
    else if ((blueMoon == 0) && (sign == 12))
    {
        cout << "Your future seems uncertain" << endl;
        cout << "But before we close the curtain" << endl;
        cout << "Applebees is having a two for one deal" << endl;
        cout << endl;
        cout << "yeah, i kinda ran out of ideas here :P" << endl;
    }
    
    else if ((month == 2) && (day == 19))
    {
        cout << "You share the birth" << endl;
        cout << "Of the programmer's life" << endl;
        cout << "Who these stupid rhyming blerbs" << endl;
    }
    cout << endl;
}