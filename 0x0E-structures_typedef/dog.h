#ifndef _DOG_
#define _DOG_

/**
 * struct dog - struct dog information
 * @name: Character
 * @age: Float
 * @owner: Character
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/*
 * my_dog - Typedef for struct dog
 */

typedef struct dog my_dog;

#endif /*_DOG_*/
