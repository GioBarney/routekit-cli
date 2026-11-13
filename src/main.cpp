//Giovanni Noriega
//COSC 1337
//MAJOR PROJECT ROUTEKIT CLI

#include <iostream>
#include <string>
using namespace std;

void menu();
void sleep(); // waits for user input so that the user gets a chance to read the output
int getChoice(int low, int high);

int main()
{
    int choice;
    cout << "Welcome to RouteKit CLI!\n" << endl;
    do
    {

        menu();
        choice = getChoice(1, 4);
        switch(choice)
        {
            case 1:
                cout << "Inventory Coming Soon..." << endl;
                sleep();
                break;
            case 2:
                cout << "Service-Log Coming Soon..." << endl;
                sleep();
                break;
            case 3:
                cout << "Pull-Sheet Coming Soon..." << endl;
                sleep();
                break;
            case 4:
                cout << "Application Exit Commenced" << endl;
                
                break;
        }

    }while(choice != 4);

    cout << " G oO O D By e : )" << endl; 
    
    return 0;
}
void sleep()
{
    cout << "Press Enter to continue...";
    cin.ignore(1000, '\n');
    cin.get(); 
}

int getChoice(int low, int high)
{
    int choice;
    do
    {
        cout << "Please enter a number " << low << "-" << high << ": ";
        cin >> choice;
        if (cin.fail()) //cin fails if user enters anything other than a number
        {               //so we add this to clear cin
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "That's not a number!" << endl;
            choice = low - 1; //reset choice to low - 1 so the do while loop continues and theres never a number in choice that can break out of the loop conditions
        }
        else if (choice < low || choice > high)
        {
            cout << "Invalid input!" << endl;
        }
    }while(choice < low || choice > high);
    return choice;
}

void menu()
{
    cout << "======================" << endl;
    cout << "  RouteKit CLI Menu" << endl;
    cout << "======================" << endl;

    cout << "1. Inventory" << endl;
    cout << "2. Service-Log" << endl;
    cout << "3. Pull-Sheet" << endl;
    cout << "4. Quit" << endl;
}
