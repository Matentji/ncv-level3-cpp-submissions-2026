#include<iostream>
using namespace std;

int main()
{
    //cout<< "Integer:" << sizeof(int)<<endl;
    //cout<< "char:" << sizeof(char)<<endl;
    //cout<< "bool:" << sizeof(bool)<<endl;
    //cout<< "float:" << sizeof(float)<<endl;
   //out<< "double:" << sizeof(double)<<endl;

    //Variables
   // int levelNcv = 3;
   // int testMark = 80;
   // int leanersNum = 14;
   // double classAverage = 20;
   // bool poe = 34.4;
   // const char RATING = 'C';
   // double taxiFare = 20.45;
  //  double overnighTemp = 25;
  //  const double VATRATE = 4.5;

   // cout<< "NCV Level: " << levelNcv<<endl;
     //cout<< "Test Mark: " << testMark<<endl;
     //cout<< "Learners in a class: " << leanersNum<<endl;
     //cout<< "Class average: " << classAverage<<endl;
     // cout<< "POE complete: " << poe<<endl;
     // cout<< "Rating symbol such as : " << RATING<<endl;
     // cout<< "Taxi fare in rand : " << taxiFare<<endl;
       // cout<< "Overnight temperature : " << overnighTemp<<endl;
           //cout<< "VAT rate : " << VATRATE<<endl;

    //Input hours and minutes
   /* int totalMinutes;

    cout << "Enter the time in minutes: ";
    cin >> totalMinutes;

    int hours = totalMinutes / 60;     // whole hours
    int minutes = totalMinutes % 60;   // minutes left over

    cout << totalMinutes << " minutes = "
         << hours << " hours and "
         << minutes << " minutes" << endl;

    return 0;
    */

    /*Calculate area and parameter*/
    /*double length, width;

    cout << "Enter the length of the rectangle: ";
    cin >> length;

    cout << "Enter the width of the rectangle: ";
    cin >> width;

    double area = length * width;
    double perimeter = 2 * (length + width);

    cout << "Area = " << area << endl;
    cout << "Perimeter = " << perimeter << endl;
*/
        double avg1 = (70 + 85 + 90) / 3;     // 81
        double avg2 = (70 + 85 + 90) / 3.0;   // 81.6667

        int total = 245, tests = 3;
        double avg3 = static_cast<double>(total) / tests;  // 81.6667
        double avg4 = static_cast<double>(total / tests);  // 81

        int whole = 9.99;

         cout << "Total = " << avg3 << endl;
         cout << "Average 3 = " << avg3 << endl;
         cout << "Average 4  = " << avg4 << endl;
            return 0;


}


