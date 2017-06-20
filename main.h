/************************************************************
可変引数テンプレート(C++11)
	https://cpprefjp.github.io/lang/cpp11/variadic_templates.html
	
keyword
	C++11~, variadic templates
************************************************************/

/**************************************************
note:template function : must be in .h
**************************************************/
template <typename ... Args>
void my_printf(const char *format, const Args& ... args)
{
	printf(format, args ...);
}
/*
// compilerによっては、引数 x 1のcaseをオーバーロードにて別途定義しないといけないかもしれない.
void my_printf(const char *format)
{
	printf(format);
}
*/



