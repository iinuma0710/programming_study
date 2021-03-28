#include <iostream>
#include <typeinfo>

class Base
{
public:
    virtual ~Base() { } //仮想デストラクタを定義してポリモーフィックにする
};

class DerivedA : public Base {};

class DerivedB : public Base {};

// 渡されたオブジェクトの実際の型によってメッセージを変える
void determine_class(const Base& obj)
{
    const std::type_info& obj_type = typeid(obj);

    if (obj_type == typeid(DerivedA)) {
        std::cout << "obj は DerivedA 型のインスタンスです" << std::endl;
    } else if (obj_type == typeid(DerivedB)) {
        std::cout << "obj は DerivedB 型のインスタンスです" << std::endl;
    } else {
        std::cout << "obj は DerivedA 型 でも DerivedB 型でもないインスタンスです" << std::endl;
    }
}

// determin_class が知らない派生クラス
class DerivedC: public Base {};

int main()
{
    DerivedA a;
    determine_class(a);

    DerivedB b;
    determine_class(b);

    DerivedC c;
    determine_class(c);
}