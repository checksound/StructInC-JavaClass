#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Books {
   char  *title;
   char  *author;
   char  *subject;
   int   *book_id;
};


int main() {

   struct Books *Book1;        /* Declare Book1 of type Book */
   struct Books *Book2;        /* Declare Book2 of type Book */

   Book1 = malloc(sizeof(struct Books));
   Book2 = malloc(sizeof(struct Books));
 
   /* book 1 specification */
   char * t1 = "C Programming";
   char * t2 = "Nuha Ali";
   char * t3 = "C Programming Tutorial";
   int id1 = 6495407;

   // allocate memory for Book1 field
   Book1->title = malloc(sizeof(char) * (strlen(t1)+1));
   Book1->author = malloc(sizeof(char) * (strlen(t2)+1));
   Book1->subject = malloc(sizeof(char) * (strlen(t2)+1));
   Book1->book_id = malloc(sizeof(int));

   strcpy( Book1->title, t1);
   strcpy( Book1->author, t2); 
   strcpy( Book1->subject, t3);
   Book1->book_id = &id1;

   /* book 2 specification */
   char * tA = "Telecom Billing";
   char * tB = "Zara Ali";
   char * tC = "Telecom Billing Tutorial";
   int idA = 6495700;

   // allocate memory for Book1 field
   Book2->title = malloc(sizeof(char) * (strlen(tA)+1));
   Book2->author = malloc(sizeof(char) * (strlen(tB)+1));
   Book2->subject = malloc(sizeof(char) * (strlen(tC)+1));
   Book2->book_id = malloc(sizeof(int));
   
   strcpy( Book2->title, tA);
   strcpy( Book2->author, tB);
   strcpy( Book2->subject, tC);
   Book2->book_id = &idA;
    
   /* print Book1 info */
   printf( "Book 1 title : %s\n", Book1->title);
   printf( "Book 1 author : %s\n", Book1->author);
   printf( "Book 1 subject : %s\n", Book1->subject);
   printf( "Book 1 book_id : %d\n", *Book1->book_id);

   /* print Book2 info */
   printf( "Book 2 title : %s\n", Book2->title);
   printf( "Book 2 author : %s\n", Book2->author);
   printf( "Book 2 subject : %s\n", Book2->subject);
   printf( "Book 2 book_id : %d\n", * Book2->book_id);
   
   return 0;
}

