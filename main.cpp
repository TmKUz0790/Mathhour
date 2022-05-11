
#include <iostream>
#include <string>
#include <ctime>
using namespace std ;
int main () {
    int size =1 ;
    int b ;
    int array[size];

    srand((unsigned)time(0));

    for(int i=0; i<size; i++){
        array[i] = (rand()%10);
       // cout << array[i] << endl;
        if (array[i] ==8) {
            time_t now = time(nullptr);
    tm calendar_time = *localtime(addressof(now));
    cout << calendar_time.tm_hour + 8<<"h::";

    cout<<calendar_time.tm_min <<"min"<<endl ;
            srand(time(0));

    string wordList[4] = { "(4 * 2)",
                                 "(455 - 447)", "(16 % 2)", "(32 % 4)" };

    string word = wordList[rand() % 4];

    cout<<"This time is not correct if u could solve this "<<word<< " then compute the output to the hour then u will now correct time "<<endl ;

        }
        if (i ==7) {
            cout<<i ;
        }if (i ==6) {
            cout<<i ;
        }if (i ==5) {
            cout<<i ;
        }if (i ==4) {
            cout<<i ;
        }if (i ==3) {
            cout<<i ;
        }if (i ==2) {
            cout<<i ;
        }if (i ==1) {
            cout<<i ;
        }

    }



}
