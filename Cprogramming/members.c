#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_MEMBERS 100
#define FEE_YEARS 5
typedef struct {
    char first_name[20];
    char last_name[20];
    int member_num;
    int year_joined;
    int fees[FEE_YEARS];
} Member;
void add_member(Member members[], int *num_members);
void remove_member(Member members[], int *num_members);
void update_member(Member members[], int num_members);
void print_member(Member members[], int num_members);
void print_register(Member members[], int num_members);
void search_member(Member members[], int num_members);
int main() {
    Member members[MAX_MEMBERS];
    int num_members = 0;
    int choice;
    do {
        printf("\nMain menu\n");
        printf("1 Add a new member\n");
        printf("2 Remove a member\n");
        printf("3 Update member\n");
        printf("4 Print member\n");
        printf("5 Print register\n");
        printf("6 Search\n");
        printf("7 End\n");
        printf("Select > ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                add_member(members, &num_members);
                break;
            case 2:
                remove_member(members, &num_members);
                break;
            case 3:
                update_member(members, num_members);
                break;
            case 4:
                print_member(members, num_members);
                break;
            case 5:
                print_register(members, num_members);
                break;
            case 6:
                search_member(members, num_members);
                break;
            case 7:
                printf("Goodbye!\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
                break;
        }
    } while (choice != 100);
    return 0;
}
void add_member(Member members[], int *num_members) {
    if (*num_members == MAX_MEMBERS) {
        printf("The register is full.\n");
        return;
    }
    printf("Give first and last name > ");
    scanf("%s %s", members[*num_members].first_name, members[*num_members].last_name);
    printf("Give member number > ");
    scanf("%d", &members[*num_members].member_num);
    printf("Give year joined > ");
    scanf("%d", &members[*num_members].year_joined);
    for (int i = 0; i < FEE_YEARS; i++) {
        printf("Fee for %d > ", 2017 + i);
        scanf("%d", &members[*num_members].fees[i]);
    }
    (*num_members)++;

    printf("Member added successfully.\n");
}
void remove_member(Member members[], int *num_members) {
    int member_num;
    int found = 0;
    printf("Give the member number to remove > ");
    scanf("%d", &member_num);
    for (int i = 0; i < *num_members; i++) {
        if (members[i].member_num == member_num) {
            for (int j = i; j < *num_members - 1; j++) {
                members[j] = members[j + 1];
            }
            (*num_members)--;
            found = 1;
            break;
        }
    }
    if (found) {
        printf("Member removed successfully.\n");
    } else {
        printf("Member not found.\n");
    }
}
void update_member(Member members[], int num_members) {
    int member_num;
    int choice;
    printf("Give the member number of the member you want to update > ");
    scanf("%d", &member_num);

    for (int i = 0; i < num_members; i++) {
        if (members[i].member_num == member_num) {
            printf("1 Change first name\n");
            printf("2 Change last name\n");
            printf("3 Change member number\n");
            printf("4 Change year joined\n");
            printf("5 Change member fees\n");
            printf("Select > ");
            scanf("%d", &choice);
            switch (choice) {
                case 1:
                    printf("Give a new first name > ");
                    scanf("%s", members[i].first_name);
                    break;
                case 2:
                    printf("Give a new last name > ");
                    scanf("%s", members[i].last_name);
                    break;
                case 3:
                    printf("Give a new member number > ");
                    scanf("%d", &members[i].member_num);
                    break;
                case 4:
                    printf("Give a new year > ");
                    scanf("%d", &members[i].year_joined);
                    break;
                case 5:
                    for (int j = 0; j < FEE_YEARS; j++) {
                        printf("Give a new fee for %d > ", 2017 + j);
                        scanf("%d", &members[i].fees[j]);
                    }
                    break;
                default:
                    printf("Invalid choice. Please try again.\n");
                    break;
            }
            printf("Member updated successfully.\n");
            return;
        }
    }

    printf("Member not found.\n");
}
void print_member(Member members[], int num_members) {
    int member_num;
    int found = 0;
    printf("Give member number > ");
    scanf("%d", &member_num);
    for (int i = 0; i < num_members; i++) {
        if (members[i].member_num == member_num) {
            printf("****************************\n");
            printf("First name: %s\n", members[i].first_name);
            printf("Last name:  %s\n", members[i].last_name);
            printf("Member num: %d\n", members[i].member_num);
            printf("Joined:     %d\n", members[i].year_joined);
            printf("****************************\n");
            found = 1;
            break;
        }
    }


    if (!found) {
        printf("Member not found.\n");
    }
}
void print_register(Member members[], int num_members) {
    if (num_members == 0) {
        printf("The register is empty.\n");
        return;
    }
    for (int i = 0; i < num_members; i++) {
        printf("****************************\n");
        printf("First name: %s\n", members[i].first_name);
        printf("Last name:  %s\n", members[i].last_name);
        printf("Member num: %d\n", members[i].member_num);
        printf("Joined:     %d\n", members[i].year_joined);
        printf("****************************\n");
    }
}
void search_member(Member members[], int num_members) {
    int choice;
    printf("1 Search by first name\n");
    printf("2 Search by last name\n");
    printf("3 Search by member number\n");
    printf("4 Search by year joined\n");
    printf("5 Search by unpaid member fees\n");
    printf("Select > ");
    scanf("%d", &choice);

    switch (choice) {
        case 1: {
            char first_name[20];
            int found = 0;
            printf("Give first name > ");
            scanf("%s", first_name);
            for (int i = 0; i < num_members; i++) {
                if (strcmp(members[i].first_name, first_name) == 0)
             {
                    printf("****************************\n");
                    printf("First name: %s\n", members[i].first_name);
                    printf("Last name:  %s\n", members[i].last_name);
                    printf("Member num: %d\n", members[i].member_num);
                    printf("Joined:     %d\n", members[i].year_joined);
                    printf("****************************\n");
                    found = 1;
                }
            }

            if (!found)
            {
                printf("No members found.\n");
            }
            break;
        }
    }}
