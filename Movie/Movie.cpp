#include <cstdlib>
#include <iostream>

using namespace std;

class Movie {
      public:
             void setRating(int r) {
                  rating = r;
                  if (rating < 9) {
               cout << "Good" << endl;
               else {
                    cout << "You're wrong" << endl;
                    Movie.setWrong();
                    
                    }
               } 
                  }
             void setWrong (bool w) {
                  wrong = true;
                  
                  }
             protected:
                       int rating;
                       bool wrong;
      };
      
class BadMovie: public Movie {
      public:
             int getRating(){
                 return (wrong);
                 
                 }
      };
class GoodMovie: public Movie {
      public:
             int getRating(){
                 return(wrong);
                 
      
      };
