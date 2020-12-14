//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//    printf("Hello world!\n");
//    return 0;
//}
//#include<stdio.h>
//#include<stdlib.h>
//FILE*fp;
//struct tea{
//	char id[5];
//	char name[10];
//	char school[10];
//	char level[10];}tea[50];
//int main()
//{
//    if((fp=(fopen("teacher.txt","ab")))==NULL)
//        {
//	printf(" open error!") ;
//}
//		static int num=0;
//		printf("\n");
//		printf("请输入教师基本信息：");
//		printf("\n");
//		printf("请输入教师号:");
//	    scanf("%s",tea[num].id);
//	    printf("请输入教师姓名:");
//	    scanf("%s",tea[num].name);
//	    printf("请输入教师学院名称:");
//	    scanf("%s",tea[num].school);
//		printf("请输入教师的职称");
//		scanf("%s",tea[num].level);
//
//		fwrite(&tea[num],sizeof(struct tea),1,fp);
//		fclose(fp);
//		num++;
//		printf("是否继续添加?(Y/N)");
//    return 0;
//
//}
//#include<stdio.h>
//int main()
//{   int ri,repeat;
//    int i,j,n,a[10][10];
//    scanf("%d",&repeat);
//    for(ri=1;ri<=repeat;ri++)
//    {
//        scanf("%d",&n);
//        for(i=0;i<=n;i++)
//            for(j=0;j<=n;j++)
//                a[i][j]=i+j;
//            for(i=0;i<=n;i++){
//            for(j=0;j<=n;j++)
//                if(i==0&&j==0) printf("%-4c",'+');
//                else if(i==0||j<=i) printf("%-4d",a[i][j]);
//            printf("\n");
//        }
//    }
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//   int m=3;
//    printf("%06d",m);
//    return 0;
//}
#include<stdio.h>
int main()
{
    int a,b=0;
    scanf("%d",&a);
    while(a!=1)
    {
        if((a&1)==1)
        {
            b=b+1;
            b<<=1;
        }
        else
            b<<=1;
        a=a>>1;
    }
    printf("%d\n",b+a);
    return 0;
}
