#include <iostream>

class product
{
    int id;     // 商品ID
    int price;  // 単価
    int stock;  // 在庫

public:
    int get_id();               // 商品ID の getter
    void set_id(int new_id);    // 商品ID の setter

    int get_price();                // 単価の getter
    void set_price(int new_price);  // 単価の setter

    int get_stock();                // 在庫数の getter
    void set_stock(int new_stock);  // 在庫数の setter

    void set_all_value(int new_id, int new_price, int new_stock);
};

int product::get_id()
{
    return id;
}

void product::set_id(int new_id)
{
    id = new_id;
}

int product::get_price()
{
    return price;
}

void product::set_price(int new_price)
{
    if (new_price < 0) {
        std::cout << "エラー：単価は0以上にしてください" << std::endl;
        return;
    }
    price = new_price;
}

int product::get_stock()
{
    return stock;
}

void product::set_stock(int new_stock)
{
    if (new_stock < 0) {
        std::cout << "エラー：在庫数は0以上にしてください" << std::endl;
        return;
    }
    stock = new_stock;
}

void product::set_all_value(int new_id, int new_price, int new_stock)
{
    if (new_price < 0) {
        std::cout << "エラー：単価は0以上にしてください" << std::endl;
        return;
    }
    if (new_stock < 0) {
        std::cout << "エラー：在庫数は0以上にしてください" << std::endl;
        return;
    }

    id = new_id;
    price = new_price;
    stock = new_stock;
}


int main()
{
    product pen;

    // pen.set_id(0);
    // pen.set_price(100);
    // pen.set_stock(200);
    pen.set_all_value(0, 100, 200);

    product* ptr = &pen;

    std::cout << "商品ID：" << ptr->get_id() << std::endl;
    std::cout << "単価：" << ptr->get_price() << std::endl;
    std::cout << "在庫数：" << ptr->get_stock() << std::endl;
}