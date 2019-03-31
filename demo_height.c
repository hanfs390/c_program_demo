#include <stdio.h>

int main(int argc, const char *argv[])
{
	float faHeight, moHeight, chHeight;
	char sex, opt;

	printf("请输入父亲的升高（cm）：");
	scanf("%f", &faHeight);
	getchar();

	printf("请输入母亲的升高（cm）：");
	scanf("%f", &moHeight);
	getchar();

	//printf("father : %dcm, mother : %dcm\n", faHeight, moHeight);
	
	printf("请输入小孩的性别（男：M 女：F）：");
	scanf("%c", &sex);
	getchar();
	
	if(sex == 'M')
	{
		chHeight = (faHeight + moHeight) * 0.54;

		printf("请输入是否喜欢体育锻炼（Y/N）: ");
		scanf("%c", &opt);
		getchar();

		if(opt == 'Y')
		{
			chHeight = chHeight + chHeight * 0.02;
		}

		printf("请输入是否有良好的卫生习惯（Y/N）: ");
		scanf("%c", &opt);
		getchar();

		if(opt == 'Y')
		{
			chHeight = chHeight + chHeight * 0.015;
		}

		printf("小孩的升高为 ：%.2f\n", chHeight);
	}
	else if(sex == 'F')
	{
		chHeight = (faHeight * 0.923 + moHeight) / 2.0;

		printf("请输入是否喜欢体育锻炼（Y/N）: ");
		scanf("%c", &opt);
		getchar();

		if(opt == 'Y')
		{
			chHeight = chHeight + chHeight * 0.02;
		}

		printf("请输入是否有良好的卫生习惯（Y/N）: ");
		scanf("%c", &opt);
		getchar();

		if(opt == 'Y')
		{
			chHeight = chHeight + chHeight * 0.015;
		}

		printf("小孩的升高为 ：%.2f\n", chHeight);
	}
	else
	{
		printf("您输入的有误\n");
	}

	return 0;
}
