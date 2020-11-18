#include <string>
#include <iostream>

class Book {
    std::string title;
    std::string writer;
    int price;

public:
    // コンストラクタ
    Book(std::string title, std::string writer, int price);
    // コピーコンストラクタ
    Book(const Book& other);
    // 内容を表示
    void show() const;

};

Book::Book(std::string title, std::string writer, int price)
    : title(title), writer(writer), price(price)
{
}

Book::Book(const Book& other)
    : title(other.title), writer(other.writer), price(other.price)
{
}

void Book::show() const
{
    std::cout << "タイトル：" << title << std::endl;
    std::cout << "著者：" << writer << std::endl;
    std::cout << "価格：" << price << std::endl;
}


int main()
{
    // コピー元
    Book book("青春を山にかけて", "植村直己", 693);
    // コピー
    Book copy_book(book);

    copy_book.show();
}