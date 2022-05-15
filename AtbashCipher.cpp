#include <iostream>
#include <string>
#include <regex>
#include <iomanip>
#include <cstring>
#include <cmath>
#include <map>
#include <cctype>
#include <cstdlib>
#include <algorithm>
using namespace std;


void cipher()
{


    string alphabit ="abcdefghijklmnopqrstuvwxyz";
    string alphabitReverse = alphabit;

    reverse(alphabitReverse.begin(),alphabitReverse.end());

    string text;
    cin.ignore();
    cout<<"Please, Enter the Text that you want to cipher it : "<<endl<<">>> ";
    getline(cin,text);

    transform(text.begin(),text.end(),text.begin(),::tolower);

    for(int i = 0 ; i < text.size() ; i++)
        {
            for(int j = 0 ;j < alphabit.size() ;j++)
            {
                if(text[i] == alphabit[j])
                    {
                        text[i] = alphabitReverse[j];
                        break;


                    }

           }
        }
    cout<<endl<<"THE CIPHER TEXT is : "<<endl<<">>> ";
    cout << text;

}


void decipher()
{
    string alphabit ="abcdefghijklmnopqrstuvwxyz";
    string alphabitReverse = alphabit;

    reverse(alphabitReverse.begin(),alphabitReverse.end());

    string text;
    cin.ignore();
     cout<<"Please, Enter the Text that you want to decipher it : "<<endl<<">>> ";
    getline(cin,text);

    transform(text.begin(),text.end(),text.begin(),::tolower);

    for(int i = 0 ; i < text.size() ; i++)
        {
            for(int j = 0 ;j < alphabit.size() ;j++)
            {
                if(text[i] == alphabitReverse[j])
                    {
                        text[i] = alphabit[j];
                        break;


                    }

           }
        }
    cout<<endl<<"THE DECIPHER TEXT is : "<<endl<<">>> ";
    cout << text << endl;

}




int main()
{
    system("cls");
    cout<<"Welcome, User"<<endl;
    //Loop to check the choice of user
    while (true)
        {
            int choice =0 ;

            cout<<endl<<endl<<"       **LIST OF CHOICES**"<<endl<<endl;
            cout<<"1)Encryption text\n"<<"2)Decryption text\n"<<"3)Exit\n"<<endl<<endl;
             if (!cin)
                {
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                }
            cout<<"Please, Enter the choice of list :"<<endl;
            cin>>choice ;
            if (choice == 1)
                {
                    system("cls");//To clean screen
                    cipher();

                }
            else if (choice == 2)
                {
                    system("cls");
                    decipher();

                }
            else if(choice == 3)
                {
                    cout<<"****Thank you to use this program****"<<endl;
                    break;

                }
            else
                {
                    system("cls");
                    cout<<"**Please, Enter from list**"<<endl;
                    continue;
                }



        }

}
