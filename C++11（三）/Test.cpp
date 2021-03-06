// 右值引用

int main()
{
	// 普通类型引用只能引用左值，不能引用右值
	int a = 10;
	int& ra1 = a; // ra为a的别名
	//int& ra2 = 10; // 编译失败，因为10是右值
	const int& ra3 = 10;
	const int& ra4 = a;
	return 0;
}

int main()
{
	// 10纯右值，本来只是一个符号，没有具体的空间，
	// 右值引用变量r1在定义过程中，编译器产生了一个临时变量，r1实际引用的是临时变量
	int&& r1 = 10;
	r1 = 100;
	int a = 10;
	int&& r2 = a; // 编译失败：右值引用不能引用左值
	return 0;
}