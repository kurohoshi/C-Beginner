// #if defined(dogs) // equivalent to #ifdef dogs
#if !defined(dogs) // equivalent to #ifndef dogs
#define dogs

// do header stuff here

#endif


// conditional compilation
#if VERBOSE >= 2
  // high level verbose actions
#elif VERBOSE == 1
  // mid level verbose actions
#else
  // low level verbose actions
#endif
