#include <iostream>
#include <string>

using namespace std;

class Even_Number{
      public:
        int a = 39;
      public:
        void even(){
              a = 5;
              if (a%2 == 0){
                    cout << "even";
              }
              else{
                    cout << "Not a even number";
              }
        }
     public:
       void do_while(){
             a = 10;
             do{
                   cout << a << endl;
                   cout << string(40,'-') << endl;
                   a++;
             }while(a <= 20);
       }
       void show_num(){
             cout << a;
       }
     public:
        int num;
        void play_numbers(){
              while(true){
                    cout << "type number:";
                    cin >> num;
                    switch(num){
                          case 1:cout << "One" << endl;break;
                          case 2:cout << "two" << endl;break;
                          case 3:cout << "three" << endl;break;
                          case 4:cout << "four" << endl;break;
                          case 5:cout << "five"<< endl;break;
                          case 6:cout << "six" << endl;break;
                          case 7:cout << "seven"<< endl;break;
                          case 8:cout << "eight"<< endl;break;
                          case 9:cout << "Nine"<<endl;break;
                          case 10:cout <<"ten" << endl;break;
                   }
              }
       }                           
};
int main(){
      Even_Number obj;
      obj.show_num(); 
      cout << endl;
      auto print_num = [&obj](){
            obj.a = 49;
            return obj.a;
      };
      obj.play_numbers();
      return 0;
}            