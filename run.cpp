#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Vector{
      private:
         vector<int> vec = {10,20,30};
      public:
         friend void display(Vector);
         friend void show(Vector);
         friend void length(Vector);
         friend void index(Vector);
};         
void display(Vector v){
      v.vec.push_back(20);
      cout << v.vec[0] << endl;
      cout << string(49,'=') << endl;
}
void show(Vector v){
      for(int i = 0;i<v.vec.size();i++){
            cout << v.vec[i] << endl;
      }
      cout << string(49,'=') << endl;
}
void length(Vector v){
      cout << "length: "<< v.vec.size() << endl;
      cout << string(49,'=') << endl;
      
}
void index(Vector v){
      int elem;
      cout << "Search the element:";
      cin >> elem;
      
      auto it = find(v.vec.begin(),v.vec.end(),elem);
      auto ind = it - v.vec.begin();
      cout << "index:" << ind;
}
int main(){
      Vector v;
      display(v);
      show(v);
      length(v);
      index(v);
      return 0;
}     