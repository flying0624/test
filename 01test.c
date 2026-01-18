#include <stdio.h>
#include <time.h>

time_t time_cnt;
struct tm time_date;
char *tiem_str;

int main(void)
{
    time_cnt = 1767598103;
    printf("%d\r\n", time_cnt);
    time_date = *localtime(&time_cnt);
    printf("%d\r\n", time_date.tm_year + 1900);
    printf("%d\r\n", time_date.tm_mon + 1);
    printf("%d\r\n", time_date.tm_mday);
    printf("%d\r\n", time_date.tm_hour);
    printf("%d\r\n", time_date.tm_min);
    printf("%d\r\n", time_date.tm_sec);
    printf("%d\r\n", time_date.tm_wday);

    time_cnt = mktime(&time_date);
    printf("%d\r\n", time_cnt);

    char t[50];
    strftime(t, 50, "%H-%M-%S", &time_date);
    printf(t);
    return 0;
}