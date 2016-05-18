#include <cstdlib>
#include <iostream>
#include <ctime>
using namespace std;
bool run = true;
int main(int argc, char *argv[])
{
    int inputVal;
    int inputDice;
    srand(time(0));
    
    cout << "type of dice? (how many sides)" << endl;
    cin >> inputVal;
    cout << "How many dice?" << endl;
    cin >> inputDice;
    
   
    int diceArray[101];
    
    for (int i=0; i < inputVal; i++){
        diceArray[i] = (i+1);
        }
        cout << "the numbers rolled:" << endl;
        int i = 1;
            while (i <= inputVal) {
                  int r = rand()%inputVal;
                  cout << diceArray[r]<< endl;
                  i++;
            }          
            system("pause");
    return 0;
}
