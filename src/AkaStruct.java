
public class AkaStruct {

    public static void main(String[] args) {
        Struct s1 = new Struct();

        s1.title = "C Programming";
        s1.author = "Nuha Ali";
        s1.subject = "C Programming Tutorial";
        s1.bookId = 6495407;

        Struct s2 = new Struct();
        /* book 2 specification */
        s2.title = "Telecom Billing";
        s2.author = "Zara Ali";
        s2.subject = "Telecom Billing Tutorial";
        s2.bookId = 6495700;
 
   /* print Book1 info */
   System.out.println( "Book 1 title : " + s1.title);
   System.out.println( "Book 1 author : " + s1.author);
   System.out.println( "Book 1 subject : " + s1.subject);
   System.out.println( "Book 1 book_id : " + s1.bookId);

   /* print Book2 info */
   System.out.println( "Book 2 title : " + s2.title);
   System.out.println( "Book 2 author : " + s2.author);
   System.out.println( "Book 2 subject : " + s2.subject);
   System.out.println( "Book 2 book_id : " + s2.bookId);

    }
}


class Struct {
    String title;
    String author;
    String subject;
    int bookId;
}