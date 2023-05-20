#include <stdlib.h>
#include "dog.h"
/**
 * *new_dog - initialize a variable of type struct dog.
 * @d:pointer to struct dog
 *
 */
void free_dog(dog_t *d)
{

	free(d->name);
	free(d->owner);
	free(d);

}
