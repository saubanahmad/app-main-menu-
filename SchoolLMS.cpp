#include <iostream>
#include <conio.h>
using namespace std;

void loginPage();
void header();
void menu();
void admin();
void studentmanagement();
void newstudent();



int option;

main()
{
    header();
    menu();
    
    if (option==1)
    {
        header();
            admin();
            if (option==1)
            {
                header();
                studentmanagement();
                if (option ==1)
                {

                }
                if (option ==2)
                {
                    newstudent();
                }
            }

        }
       
    }


}



void header()
{
    system("cls");
    
    cout<<"**********************************************************************"<<endl;
    cout<<"*                                                                    *"<<endl;
    cout<<"*    #####   ##### #   #  ###   ###  #       #     #     #  #####    *"<<endl;
    cout<<"*   #       #      #   # #   # #   # #       #     # # # # #         *"<<endl;
    cout<<"*    #####  #      ##### #   # #   # #       #     #  #  #  #####    *"<<endl;
    cout<<"*         # #      #   # #   # #   # #       #     #     #       #   *"<<endl;
    cout<<"*    #####   ##### #   #  ###   ###  #####   ##### #     #  #####    *"<<endl;
    cout<<"*                                                                    *"<<endl;
    cout<<"**********************************************************************"<<endl;

} 
void menu()
{
    cout<<"--Welcome to school learning management system--"<<endl;
    cout<<"Select one of the following option numbers:- "<<endl;
    cout<<"1. Login as Admin"<<endl;
    cout<<"2. Login as Teacher"<<endl;

    cout<<"Enter your option: ";
    cin>> option;
}

void admin()
{
    cout<<"Select one of the following option numbers:- "<<endl;
    cout<<"1. Student management."<<endl;
    cout<<"2. Teacher management."<<endl;
    cout<<"3. Fee management."<<endl;
    cout<<"Enter your option: ";
    cin>>option;

}

void studentmanagement()
{
    cout<<"Select one of the following option numbers:- "<<endl;
    cout<<"1. Veiw student information."<<endl;
    cout<<"2. Add a new student."<<endl;
    cout<<"3. Remove a student."<<endl;
    cout<<"4. Update student information."<<endl;
    cout<<"Enter your option: ";
}

void newstudent()
{
    int CNICno,  grade, contact, age;
    string name, address;
    cout<<"Enter student name: ";
    cin>> name;
    cout<<"Enter CNIC number: ";
    cin>> CNICno;
    cout<<"Enter student age: ";
    cin>> age;
    cout<<"Enter student grade/class: ";
    cin>> grade;
    cout<<"Enter father's phone number: ";
    cin>> contact;
    cout<<"Enter complete address: ";
    cin>> address;


}
