#include<bits/stdc++.h>
using namespace std;
namespace io{
	const int MAX_SIZE=1<<20;//一次性读取这么多字节
	char buf[MAX_SIZE],*p1=NULL,*p2=NULL;
	#define gc() ((p1==p2&&(p2=(p1=buf)+fread(buf,1,MAX_SIZE,stdin),p1==p2))?EOF:*p1++)
	inline int read(){//其他类型也能读，自由发挥，注意读负数需要添加一个判断
		int x=0;char ch=gc();
		while (!isdigit(ch))ch=gc();
		while (isdigit(ch)){x=x*10+(ch^48);ch=gc();}
		return x;
	}
}