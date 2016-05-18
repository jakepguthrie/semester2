#include <cstdlib>
#include <iostream>
#include <fstream>
#include <ctime>
using namespace std;
void QnA(){
     char ans[100];
     int i, RandQ;
     string questions[10];
     ofstream outfile;
     outfile.open("output.txt");
     questions[0] = "What is your favorite color? " ;
     questions[1] = "What is the music of life " ; 
     questions[2] = "How much wood would a woodchuck chuck if a wood chuck could chuck wood?";
     questions[3] = "Why did the chicken cross the road?";
     questions[4] = "What is the answer to life the universe and everything?";
     questions[5] = "What is the question to life the universe and everything?";
     questions[6] = "What would you do for a Klondike Bar?";
     questions[7] = "How many licks to get to the center of a tootsie pop"; 
     questions[8] = "What can melt steel beams?";
     questions[9] = "What is the air-speed velocity of an unladen swallow?";
     srand(time(0));
     for(i = 0; i < 1; i++){
           RandQ = rand() % 11;
            cout << questions[RandQ] << "\n" << endl;
     }
    
     cin.getline(ans, 100);
     outfile << questions[RandQ] << "\n" << ans << endl;
     void close();
     
     
     }


int main(int argc, char *argv[])
{
    QnA();
    system("PAUSE");
    return EXIT_SUCCESS;
}

