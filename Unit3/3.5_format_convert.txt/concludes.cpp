//1、将十进制y转化为Q进制，结果存放于数组z当中：

int [40],num=0;//num记录位数；
do{//不用while的原因在于，预防十进制数0；
	z[num++]=y%Q;
	y=y/Q;
}while(y!=0);


//2、将P进制数X转化为十进制：

int y=0,n=1;
while(x!=0){
	y=y+(x%10)*n;
	x=x/10;
	n=n*P;
}
