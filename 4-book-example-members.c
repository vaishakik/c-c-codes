#include<stdio.h>
#include<stdlib.h>

struct page
{
  int no_of_chars;
  int length;
  int width;
  char header[20];
  char footer[20];
};

struct total_pages
{
    int count;
    struct page p[300];
};

struct cover
{
  char title[30];
  char author[30];
  int edition;
};

struct publisher
{
  char name[30];
  char year[30];
};

struct book
{
    struct total_pages tp;
    struct cover c;
    struct publisher pb;
    float price;
};
int main()
{

    struct book b1;
    struct book *b2;
    b2 = (struct book *)malloc(sizeof(struct book));

    /// To access price of the book:
    b1.price;
    b2->price;

    /// To access publisher name:
    b1.pb.name;
    b2->pb.name;

    /// To access book title
    b1.c.title;
    b2->c.title;

    /// To access total page count
    b1.tp.count;
    b2->tp.count;

    /// To access number of characters in 10th page
    b1.tp.p[10].no_of_chars;
    b2->tp.p[10].no_of_chars;

    /// Page number starts from 1
    return 0;

}
