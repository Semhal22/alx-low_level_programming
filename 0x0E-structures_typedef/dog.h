#ifndef STRUCT_DOG
#define STRUCT_DOG

/**
 * struct dog - creates a structure dog
 * @name: name of the dog
 * @age: age of dog
 * @owner: owner of the dog
 *
 * Description: Creates a new struct of dog which
 * has contain name, age and owner of dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
