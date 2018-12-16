#include <stdio.h>
#include <math.h>
struct PhanSo
{
	int TS;
	int MS;
};

void NhapPhanSo (struct PhanSo &PS);
void xuatPhanSo (struct PhanSo PS);
void ChuanHoaPhanSo(struct PhanSo &PS);
void RutGonPhanSo (struct PhanSo &PS);
struct PhanSo TongHaiPhanSo (struct PhanSo PS1, struct PhanSo PS2);
struct PhanSo HieuHaiPhanSo (struct PhanSo PS1, struct PhanSo PS2);
struct PhanSo TichHaiPhanSo (struct PhanSo PS1, struct PhanSo PS2);
struct PhanSo ThuongHaiPhanSo (struct PhanSo PS1, struct PhanSo PS2);

 int main ()
 
 {
 	struct PhanSo PS1,PS2, PSTong, PSHieu,PSTich,PSThuong;
 	printf ("\n nhap phan so thu 1:");
 	NhapPhanSo (PS1);
 	printf ("\n phan So thu 1:   ");
 	xuatPhanSo (PS1);
 	printf ("\n nhap phan so thu 2");
 	NhapPhanSo (PS2);
 	printf ("\n phan So thu 2:   ");
 	xuatPhanSo (PS2);
 	
 	ChuanHoaPhanSo(PS1);
 	printf ("\n phan So thu 1 sau khi chuan hoa:");
 	xuatPhanSo (PS1);
 	ChuanHoaPhanSo(PS2);
 	printf ("\n phan So thu 2 sau khi chuan hoa:");
 	xuatPhanSo (PS2);
 	
 	RutGonPhanSo(PS1);
 	printf ("\n phan So thu 1 sau khi rut gon:");
 	xuatPhanSo (PS1);
 	RutGonPhanSo(PS2);
 	printf ("\n phan So thu 2 sau khi rut gon:");
 	xuatPhanSo (PS2);
 	
 	PSTong = TongHaiPhanSo (PS1,PS2);
	printf ("\ntong cua 2 phan so:");
 	xuatPhanSo(PS1);
 	printf(" + ");
 	xuatPhanSo(PS2);
 	printf(" = ");
 	xuatPhanSo(PSTong);
 	
 	PSHieu = HieuHaiPhanSo (PS1,PS2);
 	printf ("\nhieu hai phan so:");
 	xuatPhanSo(PS1);
 	printf(" - ");
 	xuatPhanSo(PS2);
 	printf(" = ");
 	xuatPhanSo(PSHieu);
 	
 	PSTich= TichHaiPhanSo(PS1,PS2);
 	printf ("\ntich hai Phan So:");
 	xuatPhanSo(PS1);
 	printf(" * ");
 	xuatPhanSo(PS2);
 	printf(" = ");
 	xuatPhanSo(PSTich);
 	
 	PSThuong = ThuongHaiPhanSo (PS1,PS2);
 	printf ("\nthuong hai Phan So:");
 	xuatPhanSo(PS1);
 	printf(" / ");
 	xuatPhanSo(PS2);
 	printf(" = ");
 	xuatPhanSo(PSThuong);
 	
 	return 0;
 	
 	
 }

void NhapPhanSo (struct PhanSo &PS)
{
	printf ("\n nhap tu so:");
	scanf ("%d",&PS.TS);
	printf ("\n nhap mau So:");
	scanf ("%d",&PS.MS);
}
void xuatPhanSo (struct PhanSo PS)
{
	printf ("%d/%d",PS.TS, PS.MS);
}
 void ChuanHoaPhanSo(struct PhanSo &PS)
 {
 	if (PS.MS<0)
 	{
 		PS.MS=PS.MS*(-1);
 		PS.TS=PS.TS*(-1);
	}
 }
 int UCLN (int a,int b)
 {
 	for(int i=abs(a);i>0;i--)
 		if(a%i==0&&b%i==0)
 			return i;
 }
 void RutGonPhanSo (struct PhanSo &PS)
 {	
 	int uCLN=UCLN(PS.TS,PS.MS);
 	
 	PS.TS=PS.TS/uCLN;
 	PS.MS=PS.MS/uCLN;
 }

struct PhanSo TongHaiPhanSo (struct PhanSo PS1, struct PhanSo PS2)
{
	struct PhanSo PSTong;
	PSTong.TS=(PS1.TS*PS2.MS)+(PS2.TS*PS1.MS);
	PSTong.MS=PS1.MS*PS2.MS;
	
	
	return PSTong;
}

struct PhanSo HieuHaiPhanSo (struct PhanSo PS1, struct PhanSo PS2)
{
	struct PhanSo PSHieu;
	PSHieu.TS=(PS1.TS*PS2.MS)-(PS2.TS*PS1.MS);
	PSHieu.MS=PS1.MS*PS2.MS;
	return PSHieu;
}

struct PhanSo TichHaiPhanSo (struct PhanSo PS1, struct PhanSo PS2)
{
	struct PhanSo PSTich;
	PSTich.TS=(PS1.TS*PS2.TS);
	PSTich.MS=PS1.MS*PS2.MS;
	return PSTich;
}

struct PhanSo ThuongHaiPhanSo (struct PhanSo PS1, struct PhanSo PS2)
{
	struct PhanSo PSThuong;
	PSThuong.TS=(PS1.TS*PS2.MS);
	PSThuong.MS=PS1.MS*PS2.TS;
	return PSThuong;
}
