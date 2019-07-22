#ifndef DOG_H_
#define DOG_H_

/**
 * struct dog - This struct is a dog
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Name of the owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif