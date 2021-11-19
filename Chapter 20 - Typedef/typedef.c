// pg 136 , 137

#include <stdio.h>
#include <string.h>

typedef struct Books
{
	char title[50];
	char author[50];
	char subject[100];
	int book_id;
} Book;

int main(int argc, char const *argv[])
{
	Book book;
	strcpy(book.title, "C Programming");
	strcpy(book.author, "Nuha Ali");
	strcpy(book.subject, "C Programming Tutorial");
	book.book_id = 6495407;

	printf("Book Title : %s\n", book.title);
	printf("Book Author : %s\n", book.author);
	printf("Book Subject : %s\n", book.subject);
	printf("Book ID : %d\n", book.book_id);

	return 0;
}