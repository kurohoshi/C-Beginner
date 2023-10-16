// https://stackoverflow.com/questions/17621544/dynamic-method-dispatching-in-c/17622474#17622474

#include <stdio.h>

typedef struct house house;
typedef struct actions actions;

struct house {
  int isPopulated;
  actions *act;
};

// table of functions separate from the house struct
struct actions {
  void (*enter_house)(house *house);
  void (*exit_house)(house *house);
};

struct house make_house();
void enter_house(house *house);
void exit_house(house *house);

int main() {
  struct house home = make_house();

  printf("At home? %s\n", (home.isPopulated ? "yes" : "no"));
  (home.act->enter_house)(&home);
  printf("At home? %s\n", (home.isPopulated ? "yes" : "no"));

  return 0;
}

struct house make_house() {
  // create new house struct
  struct house newHouse;

  // assign function pointers
  struct actions actions = {
    enter_house, exit_house
  };

  // initialize struct house memebers
  newHouse.act = &actions;
  newHouse.isPopulated = 0;

  return newHouse;
}

void enter_house(house *house) { house->isPopulated = 1; }
void exit_house(house *house) { house->isPopulated = 0; }
