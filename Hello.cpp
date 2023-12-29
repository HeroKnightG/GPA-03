#include <iostream>
#include <string>

using namespace std ;

int main() {
    string Name ;
    //Ender the stundent
    cout << "Enter the student's name : " ;
    cin >> Name ;

    //Ender score
    float Math , Thai , Eng , credit1 , credit2 , credit3;

    cout << "Enter the student's math Grade : " ;
    cin >> Math ;
    cout << "Enter the student's Thai Grade : " ;
    cin >> Thai ;
    cout << "Enter the student's Eng Grade : " ;
    cin >> Eng ;

    cout << "Enter math credits : " ;
    cin >> credit1 ;
    cout << "Enter Thai credits : " ;
    cin >> credit2 ;
    cout << "Enter Eng credits : " ;
    cin >> credit3 ;

    float totalall =  (credit1*Math + credit2*Thai + credit3 * Eng) / (credit1 + credit2 + credit3) ;

    cout << "Stundent : " << Name << "\n";
    cout << "Sum's GPA : "<< totalall ;

    return 0 ;
}