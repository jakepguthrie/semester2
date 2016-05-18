#include <cstdlib>
#include <iostream>

using namespace std;

class Person {
      public:
             void setHeight(int h)
             {
                          height = h;
                          }
             void setWeight(int w){
                  weight = w;
                  
                  }
             void setMale(bool m) {
                  male = m;
                  
                  
                  }
      protected:
                int height;
                int weight;
                bool male;
      };
class Female:public Person {
      public:
             int WHRatio() {
                 return (h/w);
                        if ((h/w) < 1.06) {
                          male = false;        
                 return male;
                                  }
                 }
      
      
      };
class Male:public Person {
      public:
             int WHRatio() {
                 return (h/w);
                        if ((h/w) > 1.06) {
                          male = true;        
                 return male;
                                  }
                 }
      };
