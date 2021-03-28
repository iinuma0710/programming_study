// ... (3点リーダ)で展開する

template <typename... T>
void function(T&&... args);

// 引数の数が可変なテンプレート関数
template <typename... T>
void foo(T... args)
{
    function<T...>(args...);    // ... で展開
}

// 例えば
// foo<int, float, char>(1, 2.f, '3');
// を呼び出すと，実体化の時に
// void foo(int arg_1, float arg_2, char arg_3);
// のように展開されるので，パラメータパックが展開されると
// function<int, f