#include <Stdio.h>
#include <math.h>
const float PI=3.14;
void ChuViDienTich();
void GiaiPhuongTrinhBac1();
void GiaiPhuongTrinhBac2();
void GiaiHePhuongTrinh();
int main()
{
	printf("|----------------------------|\n");
	printf("|   Chon chuc nang(1-4)      |\n");
	printf("|1.Giai Phuong Trinh Bac 1   |\n");
	printf("|2.Giai Phuong Trinh Bac 2   |\n");
	printf("|3.Giai He Phuong Trinh      |\n");
	printf("|4.Tinh Dien Tich Hinh Tron  |\n");
	printf("|----------------------------|\n");
	printf("Ban Chon:");
	int chon=0;
	scanf("%d",&chon);
	if(chon==1) GiaiPhuongTrinhBac1();
	if(chon==2) GiaiPhuongTrinhBac2();
	if(chon==3) GiaiHePhuongTrinh();
	if(chon==4) ChuViDienTich();
}
void GiaiPhuongTrinhBac1()
{
	float a,b;
	printf("Hệ số a: ");
	scanf("%d",&a);
	printf("Hệ số b: ");
	scanf("%d",&b);
	if(a==0)
	{
		if(b==0)
		{
			printf("\n Phuong trinh vo so nghiem");
		}
		else
		{
			printf("\n Phuong trinh vo nghiem");
		}
		
	}
	else
	{
		printf("\n Phuong trinh co nghiem x=%f",-b/a);
	}
}
void GiaiPhuongTrinhBac2()
{
	float a,b,c,delta;
    printf("Hệ số a = ");
    scanf("%f", &a);
    printf("Hệ số b = "); scanf("%f", &b);
    printf("Hệ số c = "); scanf("%f", &c);
    delta = b*b - 4*a*c;
    if (delta < 0)
            printf("Phuong trinh vo nghiem");
    else if (delta == 0)
            printf("Phuong trinh co nghiem kep x1 = x2 = %0.2f", -b/(2*a));
      else{
            printf ("Phuong trinh co 2 nghiem phan biet:\n x1 = %0.2f",(-b + sqrt(delta))/(2*a));
                        printf ("\nx1 = %0.2f", (-b - sqrt(delta))/(2*a));
          }
}
void GiaiHePhuongTrinh()
{
	float a, b, c,d, e, f;
    float Dx, Dy, D;
    printf("\n Nhap vao cac he so a, b, c, d, e, f : \n");
    scanf("%f %f %f %f %f %f", &a, &b, &c, &d, &e, &f);
    D = a*e - b*d;
    Dx = c*e - b*f;
    Dy = a*f - c*d;
    printf("\n%fx + %fy = %f", a, b, c);
    printf("\n%fx + %fy = %f", d, e, f);
    if(D == 0 && Dx == 0)
        printf("\n Hệ pt vô số nghiệm");
    if(D == 0 && Dx != 0)
        printf("\n Hệ pt vô nghiệm");
    if(D != 0)
    {
        printf("\n Hệ pt có nghiệm");
        printf("\n x = %.3f", Dx/D);
        printf("\n y = %.3f", Dy/D);
    }
}
void ChuViDienTich()
{
	  int r;

            float chuvi, dientich;

            printf("Nhập bán kính r:");

            scanf("%d", &r);

            chuvi = 2*PI*r;

            dientich = PI*r*r;

            printf("Chu vi hình tròn là: %f\n", chuvi);

            printf("Diện tích hình tròn là: %f", dientich);
}
