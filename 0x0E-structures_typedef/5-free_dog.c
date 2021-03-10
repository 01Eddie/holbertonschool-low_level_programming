#include "dog.h"
#include <stdlib.h>
/* free_dog - name of function
 * @dog_t - 
 * @d -
 * return - void
*/

void free_dog(dog_t *d)
{
	if (d != 0)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
