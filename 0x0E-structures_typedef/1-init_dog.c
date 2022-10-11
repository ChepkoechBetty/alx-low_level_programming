/**
 * init_dog - initialize dog
 * @d: dog struct
 * @name:name param
 * @age:age param
 * @owner:owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
