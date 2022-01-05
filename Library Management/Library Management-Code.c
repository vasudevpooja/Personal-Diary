#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
struct library
{
char book_name[30];
char author[30];
int pages;
float price;
};
int main()
{
struct library l[100];
char author_name[30],book[30];
int i,j,count;
i=j=count=0;
while(j!=6)
{
printf("\n1.Add book information\n");
printf("2.Display book information\n");
printf("3.List all books of a given author\n");
printf("4.List the title of a specified book\n");
printf("5.List the number of books in the library\n");
printf("6.Exit");
printf ("\nEnter one of the above:");
scanf("%d",&j);
switch (j)
{ 
case 1:
printf ("Enter the book name=");
scanf ("%s",l[i].book_name);
printf ("Enter author name=");
scanf ("%s",l[i].author);
printf ("Enter the number of pages=");
scanf ("%d",&l[i].pages);
printf ("Enter the cost of the book=");
scanf ("%f",&l[i].price);
count++;
break;
case 2:
printf("Information:\n");
for(i=0; i<count; i++)
{
printf ("Book Name = %s",l[i].book_name);
printf ("Author Name = %s",l[i].author);
printf ("Pages = %d",l[i].pages);
printf ("Price = %f",l[i].price);
}
break;
case 3:
printf ("Enter the author's name:");
scanf ("%s",author_name);
for (i=0; i<count; i++)
{
if (strcmp(author_name, l[i].author) == 0)
printf ("%s %s %d %f",l[i].book_name,l[i].author,l[i].pages,l[i].price);
}
break;
case 4:
printf ("Enter the book's name:");
scanf ("%s",book);
for (i=0; i<count; i++)
{
if (strcmp(book, l[i].book_name) == 0)
printf ("%s \t %s \t %d \t %f",l[i].book_name,l[i].author,l[i].pages,l[i].price);
}
break;
case 5:
printf("\n Number of books in the Library:%d",count);
break;
case 6:
exit (0);
}
}
return 0;
}
