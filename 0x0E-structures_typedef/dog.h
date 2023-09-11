#ifndef DOG_H

#define DOG_H

/**
 * struct dog - a struct that creates a dog's basic info
 * @name: the name of the dog
 * @age: The age of the dog
 * @owner:the owner of the dog
 * Description:For struct project
 */
struct dog
{
char *name;
float age;
char *owner;
};

/**
 * dog_t - typedef for struct dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);

#endif
