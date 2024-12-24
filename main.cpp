#include <stdio.h>
#include <stdlib.h>

void system();
void admin();
void student();

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

void studentInterface() {
	printf("-----------------------------------------\n\n");
	printf("\t欢迎来到学生界面\n\n");
	printf("\t1.查询个人信息\n");
	printf("\t2.修改个人信息\n");
	printf("\t0.返回登录界面\n\n");
	printf("------------------------------------------\n\n");
	
}


void system() {
	printf("请输入您的选择：\n\n");
	int choice;
	scanf_s("%d", &choice);
	while (choice != 1 && choice != 2 && choice != 0) {
		printf("输入错误，请重新输入！\n");
		scanf_s("%d", &choice);
	}
	while (choice == 1) {
		adminInterface();
		admin();
	}
	while (choice == 2) {
		studentInterface();
		student();
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
	scanf_s("%d", &choice);
	while(choice != 0 && choice != 1 && choice != 2 && choice != 3 && choice != 4 && choice != 5) {
		printf("输入错误，请重新输入！\n");
		scanf_s("%d", &choice);
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

void student() {
	printf("请输入您的选择：\n\n");
	int choice;
	scanf_s("%d", &choice);
	while (choice != 0 && choice != 1 && choice != 2) {
		printf("输入错误，请重新输入！\n");
		scanf_s("%d", &choice);
	}
	if (choice == 0) {
		systemInterface();
		system();
	}
	while (choice == 1) {
		//select();
		student();
	}
	while (choice == 2) {
		//update();
		student();
	}

}


int main() {
	systemInterface();
	system();
	
	return 0;
}