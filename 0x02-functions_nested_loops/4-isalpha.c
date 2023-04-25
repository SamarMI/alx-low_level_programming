#include"main.h"

/**
 * main - is checks for alphabetic character.
 * sucess return 1 
 * faild return 0
 *
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));

}
