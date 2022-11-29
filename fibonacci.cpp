#include <iostream>
#include <stdexcept>
#include <list>

using namespace std;

list <unsigned long long int> fibStr (int n) {
  list<unsigned long long int> list1;
  list1.push_back(0);
  list1.push_back(1);
  unsigned long long int i = 3, v[1000], term; // first term
  v[1] = 0, v[2] = 1;
  while (i <= n) {
  term = v[i-1] + v[i-2];
  v[i] = term;
  list1.push_back(term);
  ++i;
}
if (n == 1)
    list1.pop_back();
if (n < 0)
    throw std::invalid_argument("you entered a negative number");
if (n == 0)
    list1.clear();
return list1;
}

int main()
{

try {
    list<unsigned long long int> list2;
 list2 = fibStr(95);
for (unsigned long long int x : list2) {
		cout << x << " ";
	}

}
catch (std::invalid_argument& e)
    {
        cerr << e.what() << endl;
        return -1;
    }
    return 0;
}
