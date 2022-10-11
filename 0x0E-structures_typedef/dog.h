#ifndef DOG_H
#define DOG_H

/**
* struct dog -> struct dog
* @name: name
* @age: age
* @owner: owner
* Descrption: This struct is for dog
*/

struct dog
{
	char *name;
	float age;
	char *owner;

};

typedef struct dog dog_v;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_v new_dog(char *name, float age, char *owner);
void free_dog(dog_v *d);



#endif /*D0G_H*/
