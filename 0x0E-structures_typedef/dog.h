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
/**
  * dog_t - define dig_t
  */
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
