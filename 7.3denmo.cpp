#include <stdio.h>
#include <math.h>

struct quanLyDiem 
{
	float x,y,KC;
	
};
void NhanDiem (struct quanLyDiem &A, struct quanLyDiem &B);
void XuatDiem (struct quanLyDiem A,struct quanLyDiem B);
struct quanLyDiem khoangCachADenB(struct quanLyDiem &A, struct quanLyDiem &B);
void KTDiemNamTrenTrucHoanh (struct quanLyDiem A, struct quanLyDiem B);
void KTDiemNamTrenGocToaDo (struct quanLyDiem A, struct quanLyDiem B);

int main()
{
	struct quanLyDiem A;
	struct quanLyDiem B;
	struct quanLyDiem KhoangCachAB;
	
	
	NhanDiem(A,B);
	XuatDiem(A,B);
	
	khoangCachADenB(A,B);
	KhoangCachAB=khoangCachADenB(A,B);
	printf ("\n khoang cach tu A den B: d(A,B)=%f",KhoangCachAB.KC);
	
	
	KTDiemNamTrenTrucHoanh(A,B);
	KTDiemNamTrenGocToaDo(A,B);
	
	return 0;	
}

void NhanDiem (struct quanLyDiem &A, struct quanLyDiem &B) 
{
	printf ("\n nhapx,y cho diem A:");
	printf ("\nnhap x:");
	scanf ("%f",&A.x);
	printf ("\nnhap y:");
	scanf ("%f",&A.y);
	printf ("\n nhap x,y cho diem B:");
	printf ("\nnhap x:");
	scanf ("%f",&B.x);
	printf ("\nnhap y:");
	scanf ("%f",&B.y);
}

void XuatDiem (struct quanLyDiem A,struct quanLyDiem B)
{
	printf ("\ndiem A(%.1f,%.1f)",A.x,A.y);
	printf (";\tdiem B(%.1f,%.1f);",B.x,B.y);
}

struct quanLyDiem khoangCachADenB(struct quanLyDiem &A, struct quanLyDiem &B)
{
	struct quanLyDiem KhoangCachAB;
	KhoangCachAB.KC= sqrt((A.x-B.x)*(A.x-B.x)+(A.y-B.y)*(A.y-B.y));
	return KhoangCachAB;
}

void KTDiemNamTrenTrucHoanh (struct quanLyDiem A, struct quanLyDiem B)
{
	if (A.y==0&&A.x!=0)
		if(B.y!=0&&B.x!=0)
			printf("\n diem A nam tren truc hoanh");
	if (B.y==0&&B.x!=0)
		if(A.y!=0&&A.x!=0)
			printf("\n diem B nam tren truc hoanh");
	if(A.y==0&&B.y==0) 
		if(A.x!=0&&B.x!=0)
			printf("\n diem A,B nam tren truc hoanh");
	
				
		
		
}

void KTDiemNamTrenGocToaDo (struct quanLyDiem A, struct quanLyDiem B)
{
	if (A.y==0&&A.x==0)
		if(B.x!=0&&B.y!=0)
			printf ("\n diem A trung voi goc toa do");
	if (B.x==0&&B.y==0)
		if(A.y!=0&&A.x!=0)
			printf ("\n diem B trung voi goc toa do");
}
