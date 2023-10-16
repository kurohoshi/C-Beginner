#include <stdio.h>
#include <math.h>

#define MAX_POINTS 10

struct point {
  int x;
  int y;
};

struct plane {
  struct point pt[MAX_POINTS];
  int ptcounter;
};

struct point newPoint(int x, int y);
double dist(struct point pt1, struct point pt2);

int main() {
  struct plane coord = initPlane();


  return 0;
}

struct plane initPlane() {
  struct plane coord;
  coord.ptcounter = 0;

  return coord;
}

// -> notation is shorthand form to access a struct pointer's member
void addPoint(struct plane *coord, int x, int y) {
  struct point pt;

  pt.x = x;
  pt.y = y;

  coord->pt[coord->ptcounter++] = pt; // increment counter while the new point is added onto array
}

struct point newPoint(int x, int y) {
  struct point pt;

  pt.x = x;
  pt.y = y;

  return pt;
}

double dist(struct point pt1, struct point pt2) {
  int d1 = pt2.x - pt1.x;
  int d2 = pt2.y - pt1.y;

  return sqrt((double)d1*d1 + (double)d2*d2);
}
