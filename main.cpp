#include <stdio.h>
#include <stdlib.h>

void system();
void admin();
void student();

void systemInterface() {
	printf("-----------------------------------------\n\n");
	printf("\t��ӭ����ѧ����Ϣ����ϵͳ\n\n");
	printf("\t1.�Թ���Ա��ݵ�¼\n");
	printf("\t2.��ѧ����ݵ�¼\n");
	printf("\t0.�˳�ϵͳ\n\n");
	printf("------------------------------------------\n\n");
}

void adminInterface() {
	printf("-----------------------------------------\n\n");
	printf("\t��ӭ��������Ա����\n\n");
	printf("\t1.���ѧ����Ϣ\n");
	printf("\t2.ɾ��ѧ����Ϣ\n");
	printf("\t3.�޸�ѧ����Ϣ\n");
	printf("\t4.��ѯѧ����Ϣ\n");
	printf("\t5.��ʾ����ѧ����Ϣ\n");
	printf("\t0.���ص�¼����\n\n");
	printf("------------------------------------------\n\n");
	
}

void studentInterface() {
	printf("-----------------------------------------\n\n");
	printf("\t��ӭ����ѧ������\n\n");
	printf("\t1.��ѯ������Ϣ\n");
	printf("\t2.�޸ĸ�����Ϣ\n");
	printf("\t0.���ص�¼����\n\n");
	printf("------------------------------------------\n\n");
	
}


void system() {
	printf("����������ѡ��\n\n");
	int choice;
	scanf_s("%d", &choice);
	while (choice != 1 && choice != 2 && choice != 0) {
		printf("����������������룡\n");
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
		printf("�˳��ɹ�!\n");
		printf("��л����ʹ�ã��ټ���\n");
		exit(0);
	}

}

void admin() {
	printf("����������ѡ��\n\n");
	int choice;
	scanf_s("%d", &choice);
	while(choice != 0 && choice != 1 && choice != 2 && choice != 3 && choice != 4 && choice != 5) {
		printf("����������������룡\n");
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
	printf("����������ѡ��\n\n");
	int choice;
	scanf_s("%d", &choice);
	while (choice != 0 && choice != 1 && choice != 2) {
		printf("����������������룡\n");
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