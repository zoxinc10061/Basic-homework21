#include <stdio.h> 

#include <stdlib.h>

struct servitor

{

   char id[8],name[12];

   int hourly_pay,hours,payment;

};

void calc(struct servitor *);

int main(void)

{

   struct servitor emp; 

   printf("-------------------------------------------------\n");

   printf("                 Servitor�uŪ�͵��c��                 \n");

   printf("-------------------------------------------------\n"); 

   printf("�п�J�s��,�m�W,���~,�u�@�ɼ�: ");

   scanf(" %s %s %d %d", emp.id, emp.name, &emp.hourly_pay, &emp.hours);

   calc(&emp);

   printf("�리�J: %d\n", emp.payment);

   system("pause"); 

   return 0;

}



void calc(struct servitor *p)

{

    p->payment=p->hourly_pay*p->hours;

}


