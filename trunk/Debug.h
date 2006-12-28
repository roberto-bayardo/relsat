#ifndef Debug_h
#define Debug_h

//////////////////////////////////////////////////////////////////////////////////////////////////
// Debug: Functions for debugging programs. Right now relies mostly on the C "assert" macros.
//    This class is purely static.

/////////////////
// OS Includes
#include <assert.h>
#ifdef MICROSOFT // Microsoft Visual C++ doesn't have "stream.h" but only "ostream/istream.h"
#include <ostream.h>
#else
#include <iostream>
using namespace std;
#endif

//////////////
// Includes

/////////////
// Defines

////////////////////////
// Class Declarations

class Debug {
public:
  Debug();
  ~Debug();

  static void vErrorReport(char* aError_);

  static Debug xDebugger; // This should be the only object of this class that gets created
};

//////////////////////////////////////////////////////////////////////////////////////////////////
// Class Definitions

//////////////////////////////////////////////////////////////////////////////////////////////////
// Inlines

#endif // Debug_h
