#ifndef _DOG_H
#define _DOG_H

/**
 * struct dog - creates an structure for dog, age and owner name
 * @name: dog name
 * @age: dog age
 * @owner: owner name
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
int _putchar(char c);
void print_dog(struct dog *d);

#endif /* _DOG_H */
