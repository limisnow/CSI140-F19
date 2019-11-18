#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector <string> myDoggo=
        {"Terrier",
        "Labrador",
        "Siberian Husky",
        "Westie",
        };
    for(string doggo: myDoggo)
    {
        cout << doggo << endl;
    }
    cout << "All say hello from Linux" << endl;

    return EXIT_SUCCESS;
}
