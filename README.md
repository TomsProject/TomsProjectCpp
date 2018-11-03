## Welcome to view this project.
Here are some small programs using C/C++, and they are very useful.（Most of them are very simple, even small programs!）
## So what are there in this project?
Let me take an example for you.
## 
One day, Xiao Min came to a certain company. The company has a new product that needs to be sold (printed into posters). Now there are A Printing Factory and B Printing Factory. A's fee standard is: 0.2 yuan for each poster, plus 500 yuan for copyright. B's fee standard is: 0.4 yuan for each poster, no copyright fee, please use C/C++ to do it. A program to print 3000 copies of how many yuan!
## 
Let's analyze it.First, set the company want to print x copies. So we know: A need : x multiply 0.2+500 yuan, B need : 0.4  multiply x yuan.
Now we can write：
```C++
  int x;
  cout<<"Please input the number of printed documents.：";
  cin >> x;
  cout << "A printing factory will receive" << 0.2 * x + 500 << "yuan！" << endl;
  cout << "B printing factory will receive" << 0.4 * x << "yuan！" << endl;  
```
##
Complete code:
```C++
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
```
