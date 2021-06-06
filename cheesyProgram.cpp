// week 2 assignment.cpp : 
// Darren Cronover

// essentially 'import' from python, iostream to display I/O to console, iomanip for our formatting, and string so variables can be strings
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

// declare constant variables
const float width = 75;
const float kgPerCont = 2.75;
const float costPerCont = 4.12;
const float profPerCont = 1.45;
const float decPlaces = 3;

int main()
{
    // declare variables,both the floats and then the strings
    float fChzWgt;
    float fNumCont;
    float fCost;
    float fProfit;

    string str1(" Thanks for vising my GitHub page! ");
    string str2("Please enter the total number of kilograms of cheese produced:  ");
    string str3("The number of containers to hold the cheese is: ");
    string str4("The cost of producing ");
    string str5(" container(s) is: $  ");
    string str6("The profit from producing ");
    string str7(" container(s) is: $  ");

    cout << setfill('*') << setw(width) << '*' << endl; // fills the spaces with asterisks
    cout << setw((width - str1.length()) / 2) << '*' << setfill(' ') << str1 << setfill('*') << setw((width - str1.length()) / 2) << '*' << endl; // uses the length of str1 to determine how many asterisks should be on either side of the text
    cout << setw(width) << '*' << endl;
    cout << '\n';
    cout << setfill(' '); // reset the fill to empty spaces, and not asterisks
    cout << str2 << setprecision(0) << fixed << right; // a cheater way to force no decimal places, setprecision shows the most significant values, but using FIXED essentially mounts it to the decimal point
    cin >> fChzWgt; // spot where we actually receive the user input
    // less exciting math equations using the variables declared, determining the values based off the user input
    fNumCont = fChzWgt / kgPerCont;
    fCost = fNumCont * costPerCont;
    fProfit = fNumCont * profPerCont;

    cout << str3 << setw((width - str3.length())) << fNumCont << endl;
    // subtract the amount of decimal places (the decimal, then the 2 following digits, in order to keep it aligned
    cout << str4 << fNumCont << setprecision(2) << fixed << str5 << setw((width - (str4.length() + str5.length()) - decPlaces)) << fCost << endl; 
    cout << str6 << setprecision(0) << fixed << fNumCont << setprecision(2) << fixed << str7 << setw((width - (str6.length() + str7.length()) - decPlaces)) << fProfit << endl;

    system("pause");
    return 0;
}