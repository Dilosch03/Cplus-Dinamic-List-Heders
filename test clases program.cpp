#include "Multi type List.h"
#include "List.h"
#include <iostream>

using namespace std;

int main() {
    int select;
    char list_type;
    cout<<"Creation of list. Multitype: 1 or single type(char): 2";
    cin>>select;
    if (select == 1){
        Multi_List list;
        List aux_list;
        list_type = 'm';
    } else {
        List list;
        list_type = 's';
    }

    cout<<"\nMenu of functions\n";
    cout<<"Exit: 0, ";
    while (true)
    {
        cout<<"Add data: 1, Get data in pocition: 2, Get data pocition: 3, Pop data in pocition: 4, Clear data: 5, Get length of list: 6";
        cin>>select;
        cout<<"\n";

        switch (select)
        {
        case 1:

            break;
        
        default:
            cout<<"value not accepted.\n";
            break;
        }
    }
    
    

    return 0;
}
