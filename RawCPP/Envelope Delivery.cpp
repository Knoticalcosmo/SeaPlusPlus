/*
 *  Author: Jon Stoneman
 *  Class:  CSCI 140
 *  Assignment: Week 2, program 1
 *  Program Description:
 *      This program will display information
 *      that is provided by a text input
 */

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    //Variables and setups
    cout.setf(ios::fixed); //These are for setting up precision
    cout.setf(ios::showpoint);
    int weight = 0;
    int books = 0;
    double weightPrice = 0;
    double booksPrice = 0;
    int stampsPerBook = 20; //you can't change the stamps per books
    string zipCode = "";
    
    //Input information
    cout << "Welcome to the Ding-Dong Postage and delivery service!" << endl;
    cout << endl;
    cout << "What is your zip code? ";
    cin >> zipCode;
    cout << "How much does your envelope weigh? (in ounces) ";
    cin >> weight;
    cout << "How many stamp books would you like to buy? ";
    cin >> books;
    cout << endl;
    cout << "================================================================" << endl;
    
    //Mathstuff for Receipt
    weightPrice = weight - 1;
    weightPrice = weightPrice * 0.22;
    weightPrice = weightPrice + 0.95;
    booksPrice = 9.8 * books;
    
    //Output Receipt
    cout << "Thank you for using the Ding-Dong Postage and delivery service!" << endl;
    cout << endl;
    cout << "Customer Zip Code" << setw(15) << zipCode << endl;
    cout << endl;
    cout << "Envelope Weight" << setw (17) << weight << endl;
    cout << "Stamp Books Purchased" << setw (11) << books << endl;
    cout << "Stamps per book" << setw (17) << stampsPerBook << endl;
    cout << endl;
    cout << "Envelope Shipping Price" << setw (9) << setprecision(2) << weightPrice << endl;
    cout << "Stamp Book Price" << setw (16) << setprecision(2) << booksPrice << endl;
    cout << setw(32) << "-----" << endl;
    cout << "Total Price" << setw (21) << setprecision(2) << booksPrice + weightPrice << endl;
    cout <<  endl;
    cout << "================================================================" << endl;
    cout <<  endl;
}