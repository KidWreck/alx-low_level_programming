#ifndef DOG_H
#define DOG_H

/**
 * struct dog - dog's info
 * @name: name
 * @age: age
 * @owner: owner
 * Description: dog's info
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
/**
 * dog_t - typedef for dog_t
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);

#endif
