#ifndef DOG_H
#define DOG_H

/**
 * dog_t - typedef for struct dog
 */
typedef struct dog dog_t;

/**
 * struct dog - struct that stores some information of a dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Description: longer description
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /* DOG_H */
