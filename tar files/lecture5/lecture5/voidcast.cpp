//
// cast.cpp
//
// Use of void* pointers
// A void* (such as the one returned by malloc) must be cast explicitly in C++
// Direct assignment of a void* to another type of pointer is an error
// 
#include<cstdlib>
int main()
{ 
  // convert using a cast: ok
  int *p = static_cast<int*>(malloc(4*sizeof(int)));
  // direct assignment: error
  int *q = malloc(4*sizeof(int));
}
