#ifndef DOG_H
#define DOG_H

/**
*struct dog - a new type of data
*representing a dog
*@name: name of the dog
*@age: age of the dog
*@owner: owner's name
*/
struct dog
{
char *name;
float age;
char *owner;
};
int _putchar(char c);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
