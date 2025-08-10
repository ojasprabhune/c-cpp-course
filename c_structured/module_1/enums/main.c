#include <stdio.h>

// announces to compiler that this is an enumerator
// its tag name is day
// domain is {}
// each value is assigned integer starting from 0
enum day { sun, mon, tues, wed, thur, fri, sat };
// type "day" instead of "enum day" to call
typedef enum day day;

void print_day(day d) {
  switch (d) {
  case sun:
    printf("Sunday.\n");
    break;
  case mon:
    printf("Monday.\n");
    break;
  case tues:
    printf("Tuesday.\n");
    break;
  case wed:
    printf("Wednesday.\n");
    break;
  case thur:
    printf("Thursday.\n");
    break;
  case fri:
    printf("Friday.\n");
    break;
  case sat:
    printf("Saturday.\n");
    break;
  default:
    printf("%d is an invalid day.\n", d);
    break;
  }
}

day next_day(day d) { return d + 1 % 7; }

int main(void) {

  // enum type is form of integer type
  // variable of type enum day
  day today = fri;
  print_day(today);
  print_day(7);
  print_day(next_day(today));

  return 0;
}
