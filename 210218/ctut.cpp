#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

int main(int argc, char const *argv[])
{

    int a[5]; 

    int b[5] = {2, 3,4, 5, 6};

    cout << " A 1" << a[0] << endl;

    char name[2][6] = {{'p', 'a', 't', 'r', 'i', 'k'},
                        { 's', 'u', 'z', 'z', 'i', '.'}};

    for( int i=0; i<sizeof(a); i++){
        for( int j=0; j<sizeof(name[i]); j++){
            cout << "" << a[i][j];
        }
        cout << endl;
    }




    cout << "4/5 " << (double)4/5 << endl;


    /* code */
    return 0;
}
