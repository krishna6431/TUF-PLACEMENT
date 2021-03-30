// All Rights Reserved &copy 2020
// Code is Written by Krishna
// TUF Placement Sheet Problems

#include <bits/stdc++.h>
#include <time.h>
using namespace std;

// // Approach 1
// Sort the array and iterate over array if arr[i] ==
// arr[i + 1] then arr[i] is duplicate element
// time complexity--->o(nlogn)

// Approach 2
// Create a frequency array and count the frwquency of element and the
// element with frequency >= 2 are duplicate element
// time complexity --->o(n)
// space complexity --->o(n)

// Approach 3 -- Most Optimal Approach (Linked List Cycle Method + Tortoise
// Method(slow and fast pointer Method))
// 1.Fast pointer = 2 steps;
// 2.slow pointer = 1 steps;
// There is always form a cycle as it contains duplicate number then we can
// apply tortoise method on array using two pointers slow pointer and fast
// pointer.... when the both pointers are collide for first time...then move the
// fast pointer to start of the array and then start moving both pointer...
// the second collison point of both the pointer are the duplicate element...
// For Proff Reference ---> PNG image

// time complexity --> o(n)
int findDuplicate(vector<int> &v) {
  int slow = v[0];
  int fast = v[0];
  do {
    slow = v[slow];
    fast = v[v[fast]];
  } while (slow != fast);
  fast = v[0];
  while (fast != slow) {
    slow = v[slow];
    fast = v[fast];
  }
  return slow;
}

int main() {
  clock_t t_start = clock();
#ifndef ONLINE_JUDGE
  freopen("../input.txt", "r", stdin);
  freopen("../output.txt", "w", stdout);
#endif
  int n;
  cin >> n;
  vector<int> v(n);
  for (int i = 0; i < n; i++) {
    cin >> v[i];
  }
  cout << findDuplicate() << endl;
  printf("Execution Time: %.2f Seconds\n",
         (double)(clock() - t_start) / CLOCKS_PER_SEC);
  return 0;
}
