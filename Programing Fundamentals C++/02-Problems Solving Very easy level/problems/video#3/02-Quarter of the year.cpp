// problem
// Given a month as an integer from 1 to 12, return to which quarter of the year it belongs as an integer number.

// For example: month 2 (February), is part of the first quarter; month 6 (June), is part of the second quarter; and month 11 (November), is part of the fourth quarter.

// Constraint:

// 1 <= month <= 12

int quarter_of(int month){
  return (month<=3)?1:(month<=6)?2:(month<=9)?3:(month<=12)?4:0;
}

//other way

int quarter_of(int month){
  return (month + 2) / 3;
}