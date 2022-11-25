list <int> abc (int n) {
  list<int> list1;
  list1.push_back(0);
  list1.push_back(1);
  int i = 3, v[100], term; // first term
  v[1] = 0, v[2] = 1;
  while (i <= n) {
  term = v[i-1] + v[i-2];
  v[i] = term;
  list1.push_back(term);
  ++i;
}
if (n == 1)
    list1.pop_back();
if (n <= 0)
    list1.clear();
return list1;
}