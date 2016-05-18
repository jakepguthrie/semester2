#include <cstdlib>
#include <iostream>
#include <ctime>
using namespace std;

int main(int argc, char *argv[])
{
    
    bool run = true;
    string day = "";
    string month = "";
    string year = "";
    cout << "What year were you born (yyyy)" << endl;
    getline(cin, year);
    int c = atoi(year.c_str());
    cout << "What month were you born (mm)" << endl;
    getline(cin,month);
    int b = atoi(day.c_str());
    cout << "What day were you born (dd)" << endl;
    getline(cin,day);
    int a = atoi(day.c_str());
    int secc = c * 31536000;
    int secb = b * 2678400;
    int seca = a * 86400;
    int totalsec = seca + secb + secc;
    time_t now = time(0);
    cout << "Number of seconds since January 1, 1970: " << now << endl;
    int yourage = (now + (1970 *31536000)) - totalsec;
    cout << "You have lived " << yourage << " seconds \n"<< endl;
    if (yourage < 0){
                cout << "Invalid \n" << endl;
                cout << "press enter \n " << endl;
                getchar();
                }
                else{
    int millyoulived = yourage / (31536000 * 1000);
    int decyoulived = yourage / (31536000 * 10);
    int yearsyoulived = yourage / 31536000;
    int monthsyoulived = yourage / 2678400;
    int daysyoulived = yourage / 86400;
    int hoursyoulived = yourage / 3600;
    cout << "You have lived " << millyoulived << " millenniums \n"<< endl;
    cout << "You have lived " << decyoulived << " decades \n" << endl;
    cout << "You have lived " << yearsyoulived << " years \n" << endl;
    cout << "You have lived " << monthsyoulived << " months \n" << endl;
    cout << "You have lived " << daysyoulived << " days \n" << endl;
    cout << "You have lived " << hoursyoulived << " hours \n" << endl;
    if (run = true){
            cout << "Press enter to exit" << endl;
            getchar();
            }
            }
    return 0;
}
