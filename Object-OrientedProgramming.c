//Ronald mwendwa i39/2671/2020
//IDE visual studio 


#include <stdio.h>
#include <string.h>

// Object-Oriented Programming Example in C
// This code defines a simple "Person" class.

struct Person {
    char name[50];
    int age;
};

// Member function to print person's details
void printPerson(struct Person person) {
    printf("Name: %s\n", person.name);
    printf("Age: %d\n", person.age);
}

int main() {
    // Create instances of the "Person" class
    struct Person person1, person2;

    // Initialize data for person1
    strcpy(person1.name, "ronald");
    person1.age = 30;

    // Initialize data for person2
    strcpy(person2.name, "timo");
    person2.age = 25;

    // Call member function to print person details
    printf("Person 1:\n");
    printPerson(person1);

    printf("\nPerson 2:\n");
    printPerson(person2);

    return 0;
}