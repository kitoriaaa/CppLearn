#include <functional>
#include <iostream>

int Add(int x, int y)
{
    return x + y;
}

int main()
{
    int (*fp)(int, int) = Add;
    int result = fp(3, 5);
    std::cout << result << std::endl;

    auto fp2 = Add;
    std::cout << fp2(2, 10) << std::endl;

    // auto variable = [キャプチャ](引数リスト) -> 戻り値の型{処理内容};
    auto func = [](int a, int b) -> int { return a + b; };
    std::cout << func(12, 3) << std::endl;

    int init = 5;

    auto f = [init](int a, int b) { return init + a * b; }; // コピーキャプチャ
    auto g = [&init](int a, int b) { return init + a * b; }; // 参照キャプチャ

    init = 0;

    // コピーキャプチャの場合，ラムダ式の定義時点での init がコピーされている
    int result_copy = f(2, 4);
    std::cout << "result_copy: " << result_copy << std::endl;

    // 参照キャプチャの場合，ラムダ式実行時の init の値が参照される．
    int result_ref = g(2, 4);
    std::cout << "result_ref : " << result_ref << std::endl;

    std::function<int(int, int)> std_func = Add; // std::function<戻り値の型(引数の型)> 変数名
    int result_func = std_func(3, 5);
    std::cout << "result_func: " << result_func << std::endl;

    std_func = [](int x, int y) { return x * y; };
    std::cout << std_func(4, 7) << std::endl;

    return 0;
}

// 関数ポインタ
// 関数を指し示すポインタを作成する場合

// // 戻り値の型 (*変数名)(引数の型);
// int (*f1)(double);    // double を引数として int を返す関数のポインタ f1
// int (*f2)(int, int);  // 2つの int を引数として int を返す関数のポインタ f2