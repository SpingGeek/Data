// 函数结果状态代码
#define OK 1
#define ERROR 0
#define OVERFLOW -2

// Status 是函数的返回值的类型，其值是函数结果状态代码
typedef int Status;

// 由于笔者的主力语言是 Java and Python or Golang 这样的相对 C/C++ 来说高级的语言，所以对于 C/C++ 来说更加重要的就是内存的处理
// 内存的动态分配和其释放
// 使用 new 和 delete 关键字
// 分配空间 指针变量 = new 数据类型
// 释放空间 delete 指针变量

// 对于其他的知识点和相对简单的操作，由于此教学更加偏向于已经具有开发经验的 coder 对数据结构与算法的复习，所以本 blog 笔者不会再进行提及

typedef struct {
    float Realpart; // 实部
    float Imagepart; //虚部
}

// 实现部分
void Create( &Complex C, float x, float y){
    C.Realpart=x;
    C.Imagepart=y;
}

float GetReal(Complex C){
    return C.Realpart;
}

float GetImag(Complex C){
    return C.Imagepart;
}

Complex Add(Complex C1, Complex C2){
    Complex sum;
    sum.Realpart = C1.Realpart + C2.Realpart;
    sum.Imagepart = C1.Imagepart + C2.Imagepart;
    return sun;
}
