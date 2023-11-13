#include <stdio.h>
struct User {
    char username[100];
    char password[100];
    int isActive;
};


union Flag {
    int value;
    char bytes[4];
};

int main() {
    struct User user;
    union Flag flag;

    printf("Registration:\n");
    printf("Enter username: ");
    scanf("%s", user.username);
    printf("Enter password: ");
    scanf("%s", user.password);
    printf("Enter flag value (0 or 1): ");
    scanf("%d", &flag.value);


    user.isActive = flag.value;


    printf("\nLogin:\n");
    printf("Enter username: ");
    scanf("%s", user.username);
    printf("Enter password: ");
    scanf("%s", user.password);


    if (user.isActive == 1) {
        printf("Login successful!\n");
    } else {
        printf("Login failed!\n");
    }

    return 0;
}

