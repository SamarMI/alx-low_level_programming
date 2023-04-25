#include"main.h"

/**
 * _isalpha - is checks for alphabetic character.
 *  @c: the character to check
 * sucess return 1 
 * faild return 0
 *
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));

}
