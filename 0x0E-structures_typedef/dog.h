#ifndef _DOG_H
#define _DOG_H
/**
 * struct dog - dog
 * @name: first member
 * @age: Second member
 * @owner: Third member
 *
 * Description: name, age, owner of dname, age, owner of dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
