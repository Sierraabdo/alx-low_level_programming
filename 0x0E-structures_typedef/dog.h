/**
 * struct dog - a dog's basic info
 * @name: name of a dog
 * @age: the age of the dog
 * @owner: the owner of the dog
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
