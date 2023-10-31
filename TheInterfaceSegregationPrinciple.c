violation
// Violation of ISP - Interface Segregation Principle
struct Worker {
    void work() {
        printf("Worker is working\n");
    }

    void eat() {
        printf("Worker is eating\n");
    }
}


correction
// Interface Segregation Principle (ISP) Correction
struct Workable {
    void work();
};

struct Eatable {
    void eat();
};

struct Worker : Workable, Eatable {
    void work() {
        printf("Worker is working\n");
    }

    void eat() {
        printf("Worker is eating\n");
    }
}
