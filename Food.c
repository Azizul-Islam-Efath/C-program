#include <stdio.h>
#include <string.h>

// structure details
struct Details
{
    char username[100];
    char password1[100];
    char password2[100];
    char email[100];
    char mobile[50];
};

struct Menu {
    char food[100];
    int price;
};

void homepage();
void signup();
void login();
void view_menu();
void addTocart();
void view_cart();
void edit_cart();
void checkout();
void logout();
void remove_line(char *str);

int main()
{
    homepage();
    return 0;
}

//homepage function
void homepage() {
    int choice;
    printf("\n\nWelcome to HabiJabi Food Corner\n\n");
    while (1)
    {
        printf("\n1. Signup\n2. Login\n3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
        {
            signup();
            break;
        }
        case 2:
        {
            login();
            break;
        }
        case 3:
        {
            logout();
            break;
        }
        default:
            printf("\nChoice is invalid\n");
            break;
        }
        break;
    }
}

// remove new line function
void remove_line(char *str)
{
    int length = strlen(str);
    if (length > 0 && str[length - 1] == '\n')
    {
        str[length - 1] = '\0';
    }
}

// sign up function
void signup()
{
    FILE *file;
    file = fopen("order.txt", "a");
    if (file == NULL)
    {
        printf("File is not available\n");
    }
    else
    {
        struct Details sign;
        printf("\n\nSign Up\n\n");
        fflush(stdin);
        printf("Enter your username: ");
        fgets(sign.username, sizeof(sign.username), stdin);
        remove_line(sign.username);
        printf("Enter your email: ");
        fgets(sign.email, sizeof(sign.email), stdin);
        remove_line(sign.email);
        printf("Enter your mobile number: ");
        fgets(sign.mobile, sizeof(sign.mobile), stdin);
        remove_line(sign.mobile);

        while (1)
        {
            fflush(stdin);
            printf("Enter your password: ");
            fgets(sign.password1, sizeof(sign.password1), stdin);
            remove_line(sign.password1);

            if (strlen(sign.password1) < 6)
            {
                printf("Your password should be more than 6 digits\n");
                continue;
            }
            else
            {
                printf("Confirm Password: ");
                fgets(sign.password2, sizeof(sign.password2), stdin);
                remove_line(sign.password2);

                if (strcmp(sign.password1, sign.password2) == 0)
                {
                    break;
                }
                else
                {
                    printf("Password doesn't match\n");
                    continue;
                }
            }
        }
        fprintf(file, "%s\n%s\n%s\n%s\n", sign.username, sign.email, sign.mobile, sign.password1);
        fclose(file);

        printf("Registration Successfull\n");
        printf("LOGIN INTO YOUR ACCOUNT\n");
        login();
    }
}

// login function
void login()
{
    char login_username[100];
    char login_password[100];

    struct Details log;
    FILE *file;
    file = fopen("order.txt", "r");
    if (file == NULL)
    {
        printf("File is not available\n");
    }
    else
    {
        while (1)
        {
            fflush(stdin);
            printf("Username: ");
            fgets(login_username, sizeof login_username, stdin);
            remove_line(login_username);
            printf("Password: ");
            fgets(login_password, sizeof login_password, stdin);
            remove_line(login_password);

            int found = 0; // initially found nothing
            // end of the file porjonto read krbe
            while (fscanf(file, " %[^\n] %[^\n] %[^\n] %[^\n]", log.username, log.email, log.mobile, log.password1) != EOF)
            {
                if (strcmp(log.username, login_username) == 0 && strcmp(log.password1, login_password) == 0)
                {
                    found = 1;
                    break;
                }
            }
            fclose(file);

            if (found)
            {
                printf("Welcom to Homepage\n");
                view_menu();
                break;
            }
            else
            {
                printf("Invalid username or password\n");
            }
        }
    }
}

//menu function
void view_menu() {
    printf("--------MENU CARD-------\n");
    printf("1. Pizza          = 250 tk\n");
    printf("2. Burger         = 100 tk\n");
    printf("3. Pasta          = 80  tk\n");
    printf("4. MoMo           = 100 tk\n");
    printf("5. Cold Coffee    = 90  tk\n");
    printf("6. Soft Drinks    = 40  tk\n");

    printf("Enter the number of the item you want to order: ");
    printf("Please enter the quantity: ");
}

void addTocart() {

}

// exit function
void logout() {
    printf("You're successfully logged out\n");
}
