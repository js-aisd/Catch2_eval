/*

  Compile with: g++ main.cpp catch_amalgamated
  Runn with ./a.out

*/


//#define CATCH_CONFIG_RUNNER
//#define CATCH_   AMALGAMATED_CUSTOM_MAIN
#include <iostream>
// #include "catch_amalgamated.hpp"
using namespace std;





#ifdef CATCH_AMALGAMATED_CUSTOM_MAIN


int main( int argc, char* argv[] ) {
  // global setup...

  int result = Catch::Session().run( argc, argv );

  // global clean-up...
    cout << "Hello Catch2 Build with custom main()\n";

  return result;
}

//#else    //CATCH_AMALGAMATED_CUSTOM_MAIN
#endif  //ifndef CATCH_AMALGAMATED_CUSTOM_MAIN

TEST_CASE("Quick Catch2 test", "[test]")
{

  cout << "Hello Catch2 Build with Catch2 main()\n";

}
// */
//#endif  //ifndef CATCH_AMALGAMATED_CUSTOM_MAIN

/*
#include <iostream>

int main() {
  std::cout << "Hello World!\n";
}
*/
