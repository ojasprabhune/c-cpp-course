#include <stdio.h> // for printf

// define an enumeration for the months of the year
typedef enum month {
  january,
  february,
  march,
  april,
  may,
  june,
  july,
  august,
  september,
  october,
  november,
  december
} month;

// define a struct for a date
typedef struct date {
  int day;
  month month;
} date;

// function to compute the next day given a date
date next_day(date d) {
  // handle 30-day months
  if (d.day == 30 && (d.month == april || d.month == june ||
                      d.month == september || d.month == november)) {
    d.day = 1;
    d.month = (d.month + 1) % 12;
    // handle 31-day months
  } else if (d.day == 31 &&
             (d.month == january || d.month == march || d.month == may ||
              d.month == july || d.month == august || d.month == october)) {
    d.day = 1;
    d.month = (d.month + 1) % 12;
    // handle end of year
  } else if (d.day == 31 && d.month == december) {
    d.day = 1;
    d.month = january;
    // handle February (not considering leap years)
  } else if (d.day == 28 && d.month == february) {
    d.day = 1;
    d.month = march;
    // handle all other days
  } else {
    d.day++;
  }
  return d;
}

void print_date(date d) {
  // array of month names for printing
  const char *month_names[] = {"January",   "February", "March",    "April",
                               "May",       "June",     "July",     "August",
                               "September", "October",  "November", "December"};
  // print the date in "day month" format (e.g., "1 January")
  printf("%d %s\n", d.day, month_names[d.month]);
}

// function to print today and tomorrow's dates
void today_and_tomorrow(date d) {
  printf("Today is: ");
  print_date(d);
  date tomorrow = next_day(d);
  printf("Tomorrow is: ");
  print_date(tomorrow);
  printf("\n");
}

int main(void) {
  // (date) is a type cast that tells the compiler to treat the following
  // brace-enclosed initializer list as a date struct.
  today_and_tomorrow((date){1, january});
  today_and_tomorrow((date){28, february});
  today_and_tomorrow((date){14, march});
  today_and_tomorrow((date){31, october});
  today_and_tomorrow((date){31, december});
  return 0;
}
