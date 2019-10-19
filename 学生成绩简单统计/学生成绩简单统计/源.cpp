#include<stdio.h>
typedef struct {
		char name[20];
		int score[3];
		double average1;
	} student;
student input(student *pstudent );
void output(student pstudent);
student average(student* pstudent);
int main() {
	int a,b,c,min,max;
	printf("请输入学生人数：");
	scanf_s("%d", &a);
	
	student pstudent;
	for (b = 1; b <= a; b++)
	{
		input(  &pstudent);
	}
	printf("no\t mame\t score1\t score2\t score3\t average \n");
	for ( c = 1; c <=a; c++)
	{
		average(&pstudent);

		output(pstudent);
	}
	return 0;
}

student input(student* pstudent) {
	scanf_s("%s", pstudent->name,20);
	scanf_s("%d %d %d", &pstudent->score[0], &pstudent->score[1], &pstudent->score[2]);
	return *pstudent;
}
void output(student pstudent) {
	
	printf("1\t %s\t %d\t %d\t %d\t %lf\n",pstudent.name, pstudent.score[0], pstudent.score[1], pstudent.score[2],pstudent.average1);
	

}
student average(student* pstudent) {
	pstudent->average1 = (pstudent->score[0]+ pstudent->score[1]+pstudent->score[2])/3;
	return *pstudent;
}