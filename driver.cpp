//Virtual Memory by Melance Gaudreault

#include "memory.h"


int main()
{
memory mem;
int option;
int dest;
int value;
int start;

    do
    {
        cout << endl;
        cout << "MEMORY OPTIONS:" << endl;
        cout << "1) Store" << endl;
        cout << "2) Retrieve" << endl;
        cout << "3) Copy" << endl;
        cout << "4) Dump" << endl;
        cout << "5) Quit" << endl << endl;

        cout << "Please select an option: ";

        cin >> option;

         if (option == 1){

            dest = 101;
            while (dest > 100){

                cout << endl << "Enter the location  you will like to store: ";
                cin >> dest;
                cout << endl << "Enter the value you will like to store: ";
                cin >> value;
                if (dest > 100){
                    cout << "invalid location" << endl;
                    break;
                }
                mem.store(dest, value);
            }

        }

        else if (option == 2){

            dest = 101;
            while (dest > 100){

                cout << endl << "Enter the location you will like to retrieve: ";
                cin >> dest;
                if (dest > 100){
                    cout << "invalid location" << endl;
                    break;
                }
                mem.retrieve(dest);
            }
        }

        else if (option == 3){

            dest = 101;
            start = 101;
            while (dest > 100 || start > 100){

                cout << endl << "Enter the starting location of your copy: ";
                cin >> start;
                if (start > 100){
                    cout << "invalid location" << endl;
                    break;
                }
                cout << endl << "Enter the number of locations you will like to copy: ";
                cin >> value;
                cout << endl << "Enter the destination location of your copy: ";
                cin >> dest;
                if (dest > 100){
                    cout << "invalid location" << endl;
                    break;
                }

                mem.copy(start, value, dest);
            }

        }

        else if (option == 4){

            while (option >2){

                cout << endl << "1) Dump all" << endl;
                cout << "2) Dump specific locations" << endl << endl;

                cout << "Please select an option: ";
                cin >> option;

                if (option == 1){
                    cout << endl;
                    mem.dump();
                }

                if (option == 2){
                    cout << endl << "Enter start location: ";
                    cin >> start;
                    if (start > 100) {
                        cout << endl << "Invalid location";
                        break;
                    }
                    cout << endl << "Enter end location: ";
                    cin >> dest;
                    if (dest > 100) {
                        cout << endl << "Invalid location";
                        break;
                    }

                    mem.dump(start, dest);
                }

            }

        }

        else if (option == 5){
            cout << "Terminating Program" << endl;
        }

        else {
            cout << "Invalid Option entered" << endl;
        }


    }

while (option != 5);

return 0;
}
