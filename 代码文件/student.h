#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NAME_LEN 50
#define MAX_MAJOR_LEN 50

// 学生信息结构体
typedef struct {
    char xh[20];        // 学号
    char xm[MAX_NAME_LEN]; // 姓名
    char xb[5];         // 性别
    int nl;            // 年龄
    char zy[MAX_MAJOR_LEN]; // 专业
} Student;

// 链表节点结构体
typedef struct Node {
    Student data;
    struct Node *next;
} Node;

extern Node *head; // 声明外部变量 head，假设在其他地方定义

// 显示指定学生信息
void display_student(Node *student) {
    if (student == NULL) {
        printf("学生信息为空。\n");
        return;
    }

    printf("学生信息：\n");
    printf("学号：%s, 姓名：%s, 性别：%s, 年龄：%d, 专业：%s\n",
           student->data.xh, student->data.xm, student->data.xb, student->data.nl, student->data.zy);
}

// 学生登录函数
Node *login() {
    char id[20];
    char name[MAX_NAME_LEN];
    printf("请输入学号：");
    scanf("%s", id);
    printf("请输入姓名：");
    scanf("%s", name);

    Node *current = head;
    while (current != NULL) {
        if (strcmp(current->data.xh, id) == 0 && strcmp(current->data.xm, name) == 0) {
            printf("登录成功！\n");
            return current;
        }
        current = current->next;
    }
    printf("登录失败，请检查学号和姓名。\n");
    return NULL;
}

// 修改学生信息 (仅限年龄和专业)
void modify_student_info(Node *student) {
    if (student == NULL) {
        printf("学生信息为空，无法修改。\n");
        return;
    }

    printf("请输入新的年龄：");
    scanf("%d", &student->data.nl);
    printf("请输入新的专业：");
    scanf("%s", student->data.zy);
    printf("学生信息修改成功！\n");
}

// 学生操作菜单
void student_menu() {
    Node *student = login();
    if (student == NULL) {
        return;
    }

    int choice;
    while (1) {
        printf("\n学生操作页面\n");
        printf("1. 查看个人信息\n");
        printf("2. 修改个人信息\n");
        printf("0. 返回上一级\n");
        printf("请选择操作：");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                display_student(student);
                break;
            case 2:
                modify_student_info(student);
                break;
            case 0:
                return;
            default:
                printf("无效的选择，请重新输入。\n");
        }
    }
}
