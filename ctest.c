#include<stdlib.h>
int main()
{
	//SYN扫描
	//char *order1="nmap -sS 192.168.0.106";
	char *order1="Nmap --script whois 192.168.0.106";
	//探测操作系统
	char *order2="nmap -O 192.168.0.105";
	system(order1);
	//检测漏洞
	//nmap --script=vuln 192.168.0.105
	return 0;
}