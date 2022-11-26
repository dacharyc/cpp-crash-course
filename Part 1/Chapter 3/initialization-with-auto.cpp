// This assignment contains redundant information. The compiler knows answer is an int because 42 is an int.
int answer = 42;

// You can use auto instead to let the compiler determine the type upon initialization
auto the_answer { 42 };             // int
auto foot { 12L };                  // long
auto rootbeer { 5.0F };             // float
auto cheeseburger { 10.0 };         // double
auto politifact_claims { false };   // bool
auto cheese { "string" };           // char[7]

// This also works when you're initializing with parenthesis and the lone =:
auto the_answer = 42;
auto foot(12L);