#include<iostream>
#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
  map<int, string> sample_map { { -1, "one"}, { 2, "two" } };
  cout<<"mowzo shodi";
  //meske shod :|
  cout << sample_map[-1] << " " << sample_map[2] << endl;
}
