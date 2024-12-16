#include<stdio.h>
#include<string.h>
struct det {
	int rn;
	int s1,s2,s3,s4,s5;
	float avg;
	int grade;
} a;
int main()
{
	int n;
	printf("STUDENT MARKSHEET USING STRUCTURES\n");
	printf("Enter the no of students\n");
	scanf("%d",&n);
	struct det a[n];
	for(int i=0; i<n; i++) {
		scanf("%d %d %d %d %d %d",&a[i].rn,&a[i].s1,&a[i].s2,&a[i].s3,&a[i].s4,&a[i].s5);
		a[i].avg=(a[i].s1+a[i].s2+a[i].s3+a[i].s4+a[i].s5)/5;
		if(a[i].avg>70) {
			a[i].grade = 1;
		}
		else if (a[i].avg>50 && a[i].avg<=70) {
			a[i].grade =2;
		}
		else {
			a[i].grade =3;
		}
	}
    printf("rn  s1  s2  s3  s4  s5  avg  grade\n");
    for(int i=0;i<n;i++){
	    printf("%d  %d  %d  %d  %d  %d  %.2f  %d\n",a[i].rn,a[i].s1,a[i].s2,a[i].s3,a[i].s4,a[i].s5,a[i].avg,a[i].grade);
    }
}
