#include <stdio.h>
int main()
{
	int songuoi,i,ms,douong[100],sum=0;
	printf("xin moi nhap so nguoi:");
	scanf("%d",&songuoi);
	int khachhang[songuoi];
	printf("moi chon do uong gom co \n1.nuochoang:5$\n2.cafe:10$\n3.capuchino:20$\n4.nuoc ep hoa qua:15$\n ");
	for(i=0;i<songuoi;i++)
	{ printf("khach hang[%d]xin moi nhap ma do uong:",i);
	  scanf("%d",&ms);
		switch(ms){
			case 1: printf(" do uong ban chon la nuoc khoang gia 5$\n");
			        sum=sum+5;
			        douong[i]=ms;
			break;
			case 2: printf("do uong ban chon la cafe gia 10$\n");
			        sum=sum+10;
			        douong[i]=ms;
			break;
			case 3: printf("do uong ban chon la capuchino gia 20$\n");
			        sum=sum+20;
			        douong[i]=ms;
			break;
			case 4: printf("do uong ban chon la nuoc ep hoa qua gia 15$\n");
			        sum=sum+15;
			        douong[i]=ms;
			break;
							       
		}
	}
	printf("hoa don theo khach hang :");
	for(i=0;i<ms;i++){
		printf("khach hang [%d] uong do uong ma so [%d]\n ",i,douong[i]);
	}
	
	printf("tong so tien don hang gia tri thuc te la : %d $\n",sum);
	printf(" thue VAT 10% : %f $\n " ,sum*0.1);
	printf("tong so tien phai thanh toan : %f $\n",sum*0.1+sum);
	
	
}
