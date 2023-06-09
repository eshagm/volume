#include<stdio.h>
struct marks{
	int Roll_no;
	char name [100];
	int chem_marks,maths_marks,phy_marks
};

main()
{
	int i;
	float per;
	struct marks m[5];
	
	for(i=0;i<5;i++)
	{
		printf("student roll no. =");
		scanf("%d",&m[i].Roll_no);
		printf("student name =");
		scanf("%s",&m[i].name);
		printf("chemistry marks =");
		scanf("%d",&m[i].chem_marks);
		printf("student maths marks =");
		scanf("%d",&m[i].maths_marks);
		printf("student physics marks =");
		scanf("%d",&m[i].phy_marks);
	}
	for(i=0;i<5;i++)
	{
		printf("student roll no. =%d\n",m[i].Roll_no);
		printf("student name =%s\n",m[i].name);
		printf("chemistry marks =%d\n",m[i].chem_marks);
		printf("maths marks =%d\n",m[i].maths_marks);
		printf("physics marks =%d\n",m[i].phy_marks);
		per=(m[i].chem_marks+m[i].maths_marks+m[i].phy_marks)/300.0*100;
		printf("percentage=%f\n",per);
	}
	
}
