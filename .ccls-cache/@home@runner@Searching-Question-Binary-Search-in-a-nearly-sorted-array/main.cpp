#include <iostream>
#include <vector>
using namespace std;

int Searching(vector<int> v, int target)
{
  int s=0;
  int e = v.size()-1;
  int mid = s+(e-s)/2;

  while(s<=e)
    {
      if(v[mid]==target)
      {
        return mid;
      }
      if(v[mid-1]>= s && v[mid-1]==target)
      {
        return mid-1;
      }
      if(v[mid+1]==target)
      {
        return mid+1;
      }
      if(v[mid]<target)
      {
        s=mid+2;
      }
      else
      {
        e=mid-2;
      }
      mid = s+(e-s)/2;
    }
  return mid;
}


int main() {
  vector <int> v{10,3,40,50,60,80,70};
  int target = 40;

  int Searched = Searching(v,target);
  cout<<"The element "<<target<< " is present at index "<<Searched<<endl;
  return 0;
}