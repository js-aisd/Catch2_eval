// test_main.cpp
// Compile from within src directory a:
//    g++ test_main.cpp ../tests/catch_amalgamated
//    This assumes we are using main() in catch_amalgamaged

#define CATCH_CONFIG_RUNNER
// #define CATCH_AMALGAMATED_CUSTOM_MAIN
// #define CATCH_CONFIG_MAIN // This tells Catch to provide a main() - only do this in one cpp file
#include "../tests/catch_amalgamated.hpp"


int add(int a, int b) {
    return a + b;
}

#ifdef CATCH_AMALGAMATED_CUSTOM_MAIN
#include "main.cpp" // Include the source file with the function to be tested
#else    //CATCH_AMALGAMATED_CUSTOM_MAI

TEST_CASE("Addition") {
    REQUIRE(add(2, 3) == 5);
    REQUIRE(add(-1, 1) == 0);
    REQUIRE(add(0, 0) == 0);
}
#endif  //ifndef CATCH_AMALGAMATED_CUSTOM_MAIN