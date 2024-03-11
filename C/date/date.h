#ifndef DATE_H
#define DATE_H

/*struct date {
	int year;
	int month;
	int day;
};

typedef struct date Date;
*/
typedef struct {
	int year;
	int month;
	int day;
} Date;

void printDate1(Date d);
void printDate2(const Date *pd);

#endif



/*unsigned int length;

typedef unsigned int size_t;
size_t length;*/

//type 재정의 할때

