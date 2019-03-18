#include<stdio.h>
int main(){
	int d[2],m[2],y[2],dc,mc,yc,end=0;
	printf("Enter your date of birth (DD/MM/YY): ");
	scanf("%d/%d/%d",&d[0],&m[0],&y[0]);
	printf("Current Date (DD/MM/YY): ");
	scanf("%d/%d/%d",&d[1],&m[1],&y[1]);
	if (y[0]<0 || y[1]<y[0]){
		printf("Error 404");
		end = 1;
	}
	while (end==0){
		if (d[1]-d[0]<0){
			m[1]-=1;
			d[1]+=32;
		}
		if (m[1]-m[0]<0){
			y[1]-=1;
			m[1]+=12;
		}
	dc=d[1]-d[0];
	if (dc==32){
		dc-=32;
		mc+=1;
	}
	mc=m[1]-m[0];
	if (mc==12){
		mc-=12;
		yc+=1;
	}
	yc=y[1]-y[0];
	printf("## Hey you are %d years %d months and %d days old.##",yc,mc,dc);
	end=1;
	}
}
