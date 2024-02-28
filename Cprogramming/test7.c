#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_MEMBERS 100 // 最大会员数
#define FEE_YEARS 5 // 缴费年数

// 会员结构体
typedef struct {
    char first_name[20]; // 名字
    char last_name[20]; // 姓氏
    int member_num; // 会员号码
    int year_joined; // 加入年份
    int fees[FEE_YEARS]; // 过去五年的会费
} Member;

// 函数声明
void add_member(Member members[], int *num_members);
void remove_member(Member members[], int *num_members);
void update_member(Member members[], int num_members);
void print_member(Member members[], int num_members);
void print_register(Member members[], int num_members);
void search_member(Member members[], int num_members);

int main() {
    Member members[MAX_MEMBERS]; // 会员数组
    int num_members = 0; // 当前会员数
    int choice; // 用户选择的菜单选项

    // 主循环
    do {
        // 显示菜单
        printf("\nMain menu\n");
        printf("1 Add a new member\n");
        printf("2 Remove a member\n");
        printf("3 Update member\n");
        printf("4 Print member\n");
        printf("5 Print register\n");
        printf("6 Search\n");
        printf("7 End\n");
        printf("Select > ");

        // 获取用户选择
        scanf("%d", &choice);

        // 根据用户选择执行相应操作
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
    } while (choice != 7);

    return 0;
}

// 添加新会员
void add_member(Member members[], int *num_members) {
    // 检查是否已达到最大会员数
    if (*num_members == MAX_MEMBERS) {
        printf("The register is full.\n");
        return;
    }

    // 获取新会员信息
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

    // 增加会员数
    (*num_members)++;

    printf("Member added successfully.\n");
}

// 删除会员
void remove_member(Member members[], int *num_members) {
    int member_num; // 要删除的会员号码
    int found = 0; // 是否找到要删除的会员

    // 获取要删除的会员号码
    printf("Give the member number to remove > ");
    scanf("%d", &member_num);

    // 查找要删除的会员
    for (int i = 0; i < *num_members; i++) {
        if (members[i].member_num == member_num) {
            // 找到了要删除的会员，将其从数组中删除
            for (int j = i; j < *num_members - 1; j++) {
                members[j] = members[j + 1];
            }
            (*num_members)--;
            found = 1;
            break;
        }
    }

    // 根据是否找到要删除的会员输出不同的提示信息
    if (found) {
        printf("Member removed successfully.\n");
    } else {
        printf("Member not found.\n");
    }
}

// 更新会员信息
void update_member(Member members[], int num_members) {
    int member_num; // 要更新的会员号码
    int choice; // 用户选择的菜单选项

    // 获取要更新的会员号码
    printf("Give the member number of the member you want to update > ");
    scanf("%d", &member_num);

    // 查找要更新的会员
    for (int i = 0; i < num_members; i++) {
        if (members[i].member_num == member_num) {
            // 找到了要更新的会员，显示菜单并获取用户选择
            printf("1 Change first name\n");
            printf("2 Change last name\n");
            printf("3 Change member number\n");
            printf("4 Change year joined\n");
            printf("5 Change member fees\n");
            printf("Select > ");
            scanf("%d", &choice);

            // 根据用户选择执行相应操作
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

// 打印单个会员信息
void print_member(Member members[], int num_members) {
    int member_num; // 要打印信息的会员号码
    int found = 0; // 是否找到要打印信息的会员

    // 获取要打印信息的会员号码
    printf("Give member number > ");
    scanf("%d", &member_num);

    // 查找要打印信息的会员
    for (int i = 0; i < num_members; i++) {
        if (members[i].member_num == member_num) {
            // 找到了要打印信息的会员，输出其信息
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

    // 根据是否找到要打印信息的会员输出不同的提示信息
    if (!found) {
        printf("Member not found.\n");
    }
}

// 打印整个会员注册表
void print_register(Member members[], int num_members) {
    // 检查是否有会员
    if (num_members == 0) {
        printf("The register is empty.\n");
        return;
    }

    // 输出每个会员的信息
    for (int i = 0; i < num_members; i++) {
        printf("****************************\n");
        printf("First name: %s\n", members[i].first_name);
        printf("Last name:  %s\n", members[i].last_name);
        printf("Member num: %d\n", members[i].member_num);
        printf("Joined:     %d\n", members[i].year_joined);
        printf("****************************\n");
    }
}

// 搜索会员
void search_member(Member members[], int num_members) {
    int choice; // 用户选择的菜单选项

    // 显示菜单并获取用户选择
    printf("1 Search by first name\n");
    printf("2 Search by last name\n");
    printf("3 Search by member number\n");
    printf("4 Search by year joined\n");
    printf("5 Search by unpaid member fees\n");
    printf("Select > ");
    scanf("%d", &choice);

    // 根据用户选择执行相应操作
    switch (choice) {
        case 1: {
            char first_name[20]; // 要搜索的名字
            int found = 0; // 是否找到要搜索的名字的会员

            // 获取要搜索的名字
            printf("Give first name > ");
            scanf("%s", first_name);

            // 查找要搜索的名字的会员
            for (int i = 0; i < num_members; i++) {
                if (strcmp(members[i].first_name, first_name) == 0) {
                    // 找到了要搜索的名字的会员，输出其信息
                    printf("****************************\n");
                    printf("First name: %s\n", members[i].first_name);
                    printf("Last name:  %s\n", members[i].last_name);
                    printf("Member num: %d\n", members[i].member_num);
                    printf("Joined:     %d\n", members[i].year_joined);
                    printf("****************************\n");
                    found = 1;
                }
            }

            // 根据是否找到要搜索的名字的会员输出不同的提示信息
            if (!found) {
                printf("No members found.\n");
            }
            break;
        }
