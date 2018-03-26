#include <iostream>
#include <string>
using namespace std;

int main()
{
    int choice;
    char secretKey;
    string message;
    bool isDone=false;
    while(isDone==false){
        cout << "\n 1-ciphering \n 2-deciphering \n 3-end program\n";
        cin >> choice;
        switch(choice){
    case 1:{

        cout << "please enter the message you want to cipher:\n";
        cin.ignore();
        getline(cin,message);
        cout << "enter the secret key\n";
        cin >> secretKey;
        for(int i=0 ; i <= message.length() ; i++){

            cout << ( char( message[i] ^ secretKey ) ) ;
        }
        cout << endl;
        for(int c=0 ; c <= message.length() ; c++){
            cout << hex << (int)( char( message[c] ^ secretKey ) ) ;
        }
        cout << endl;

        break;
    }
    case 2:{

        cout << "\nplease enter the message you want to decipher:\n";
        cin.ignore();
        getline(cin,message);
        cout << "enter the secret key\n";
        cin >> secretKey;
        for(int i=0 ; i <= message.length() ; i++){

            cout << ( char( message[i] ^ secretKey ) ) ;
        }
        cout << endl;
        for(int c=0 ; c <= message.length() ; c++){
            cout << hex << (int)( char( message[c] ^ secretKey ) ) ;
        }
        cout << endl;
        break;
    }
    case 3:{
        cout << "thanks for using our program , Good bye.\n";
        isDone = true;
        break;
    }

        }
    }



    return 0;
}



