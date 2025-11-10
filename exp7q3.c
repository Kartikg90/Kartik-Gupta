 #include <stdio.h>

typedef struct {
    int book_id;
    char title[100];
    char author[50];
    float price;
} Book;

void printBook(Book b) {
    printf("\nBook Details:\n");
    printf("Book ID: %d\nTitle: %s\nAuthor: %s\nPrice: %.2f\n", b.book_id, b.title, b.author, b.price);
}

int main() {
    Book b;
    printf("Enter book ID: ");
    scanf("%d", &b.book_id);
    printf("Enter title: ");
    scanf(" %[^\n]", b.title); // To allow spaces
    printf("Enter author: ");
    scanf(" %[^\n]", b.author);
    printf("Enter price: ");
    scanf("%f", &b.price);

    printBook(b);

    return 0;
}
