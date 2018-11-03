  #include <iostream>
  #include <ostream>
  
  using namespace std;
  int main() {
  int x;
  cout<<"Please input the number of printed documents.：";
  cin >> x;
  cout << "A printing factory will receive" << 0.2 * x + 500 << "yuan！" << endl;
  cout << "B printing factory will receive" << 0.4 * x << "yuan！" << endl;  
  return 0;
}
