#include<stdio.h>
int main(){
    int month,day;
    scanf("%d %d",&month,&day);
    int judge(int month, int day);
    if (judge<0)
        printf("error");
    int year=2019;
    int c = year / 100; //年份前两位数
	int y = year - c * 100;  //年（后两位数）
    int week = (c / 4)- 2 * c + (y + y / 4) + (13 * (month + 1) / 5) + day - 1; 
		while(week < 0)
		{
			week += 7;
		}
		week %= 7;
		switch(week)
		{
		case 1:
			printf("星期一\n");break;
		case 2:
			printf("星期二\n");break;
		case 3:
			printf("星期三\n");break;
		case 4:
			printf("星期四\n");break;
		case 5:
			printf("星期五\n");break;
		case 6:
			printf("星期六\n");break;
		case 0:
			printf("星期天\n");break;
}

}
int judge(int month, int day)
{
    if (month > 12 || month < 1)
    {
        return -1;
    }
    else
    {
            if (month == 2)
            {
                if (day > 29 || day < 1)
                    return -2;
                else
                    return 1;
            }
        
        if (month == 4 || month == 6 || month == 9 || month == 11)
        {
            if (day < 1 || day>30)
                return -2;
            else return 1;
        }
        else if (month != 2)
        {
            if (day < 1 || day>31)
                return -2;
            else
                return 1;
        }
        else
        {
            if (day < 1 || day>28)
                return -2;
            else
                return 1;
        }
        
    }
    return 1;
}
