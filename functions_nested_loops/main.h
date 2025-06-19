#ifndef MAIN_H
#define MAIN_H

/* print any giver char */
int _putchar(char c);

/* print the alphabet */
void print_alphabet(void);

/* print the alphabet 10 times */
void print_alphabet_x10(void);

/* returns if c is lowercase or not*/
int _islower(int c);

/* returns if c is an alphanumerical value or not */
int _isalpha(int c);

/* prints n sign*/
int print_sign(int n);

/* prints the absolute value of a given integer*/
int _abs(int);

/* prints the last digit of a number */
int print_last_digit(int);

/*prints every minutes of the day of Jack Bauer starting by 00:00 to 23:59*/
void jack_bauer(void);

/* prints the multiplication table */
void times_table(void);

/* return the result of an addition between 2 integer */
int add(int, int);

/* prints all the number until 98 starting with a given number*/
void print_to_98(int n);

/* prints the multiplication table of a given number */
void print_times_table(int n);

#endif
