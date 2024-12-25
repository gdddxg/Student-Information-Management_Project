#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "student.h"

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


//typedef struct Student {
//	char xh[10];  
//	char xm[50];  
//	char xb[10];  
//	int nl;       
//	char zy[50];  
//	struct Student* next;
//} Student;
//
//Student* head = NULL;

void admin();
void student_1();


void systemInterface() {
	printf("-----------------------------------------\n\n");
	printf("\t欢迎来到学生信息管理系统\n\n");
	printf("\t1.以管理员身份登录\n");
	printf("\t2.以学生身份登录\n");
	printf("\t0.退出系统\n\n");
	printf("------------------------------------------\n\n");
}

void adminInterface() {
	printf("-----------------------------------------\n\n");
	printf("\t欢迎来到管理员界面\n\n");
	printf("\t1.添加学生信息\n");
	printf("\t2.删除学生信息\n");
	printf("\t3.修改学生信息\n");
	printf("\t4.查询学生信息\n");
	printf("\t5.显示所有学生信息\n");
	printf("\t0.返回登录界面\n\n");
	printf("------------------------------------------\n\n");
	
}

void studentInterface_1() {
	printf("-----------------------------------------\n\n");
	printf("\t欢迎来到学生界面\n\n");
	printf("\t1.查询个人信息\n");
	printf("\t0.返回登录界面\n\n");
	printf("------------------------------------------\n\n");
	
}

void studentInterface_2() {
	printf("-----------------------------------------\n\n");
	printf("\t1.修改个人信息\n");
	printf("\t0.返回登录界面\n\n");
	printf("------------------------------------------\n\n");

}


void system() {
	printf("请输入您的选择：\n\n");
	int choice;
	scanf("%d", &choice);
	while (choice != 1 && choice != 2 && choice != 0) {
		printf("输入错误，请重新输入！\n");
		while (getchar() != '\n');
		scanf("%d", &choice);
	}
	while (choice == 1) {
		adminInterface();
		admin();
	}
	while (choice == 2) {
		/*studentInterface_1();
		student_1();*/

		login();
	}
	if (choice == 0) {
		printf("退出成功!\n");
		printf("感谢您的使用，再见！\n");
		exit(0);
	}

}

void admin() {
	printf("请输入您的选择：\n\n");
	int choice;
	scanf("%d", &choice);
	while(choice != 0 && choice != 1 && choice != 2 && choice != 3 && choice != 4 && choice != 5) {
		printf("输入错误，请重新输入！\n");
		while (getchar() != '\n');
		scanf("%d", &choice);
	}
	if(choice == 0) {
		systemInterface();
		system();
	}
	while(choice == 1) {
		//insert();
		admin();
	}
	while(choice == 2) {
		//delete();
		admin();
	}
	while(choice == 3) {
		//update();
		admin();
	}
	while(choice == 4) {
		//select();
		admin();
	}
	while(choice == 5) {
		//display();
		admin();
	}
	
}

void student_2() {
	printf("请输入您的选择：\n\n");
	int choice;
	scanf("%d", &choice);
	while (choice != 0 && choice != 1) {
		printf("输入错误，请重新输入！\n");
		while (getchar() != '\n');
		scanf("%d", &choice);
	}
	if (choice == 0) {
		systemInterface();
		system();
	}
	while (choice == 1) {
		//update();
		student_2();
	}
	
}

void student_1() {
	printf("请输入您的选择：\n\n");
	int choice;
	scanf("%d", &choice);
	while (choice != 0 && choice != 1 && choice != 2) {
		printf("输入错误，请重新输入！\n");
		while (getchar() != '\n');
		scanf("%d", &choice);
	}
	if (choice == 0) {
		systemInterface();
		system();
	}
	while (choice == 1) {
		//select();
		student_2();
	}
	
}


int main() {
	systemInterface();
	system();
	
	return 0;
}