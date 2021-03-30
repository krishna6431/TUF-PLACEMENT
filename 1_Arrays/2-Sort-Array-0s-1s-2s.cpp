// All Rights Reserved &copy 2020
// Code is Written by Krishna
// TUF Placement Sheet Problems

#include <bits/stdc++.h>
#include <time.h>
using namespace std;

// Approach 1 = Sorting 0(nlogn)
// Approach 2 = Counting Sort 0(n)
// Approach 3 = Dutch National Flag ALgorithm(using three pointer)
// Reference --> image
// time complexity ---> o(n)

void sortColors(vector<int> &nums) {
  int low = 0, mid = 0, high = nums.size() - 1;
  while (mid <= high) {
    if (nums[mid] == 0) {
      swap(nums[low], nums[mid]);
      mid++;
      low++;
    } else if (nums[mid] == 1) {
      mid++;
    } else {
      swap(nums[mid], nums[high]);
      high--;
    }
  }
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
  sortColors(v);
  for (auto x : v) {
    cout << x << " ";
  }
  cout << endl;
  printf("Execution Time: %.2f Seconds\n",
         (double)(clock() - t_start) / CLOCKS_PER_SEC);
  return 0;
}
