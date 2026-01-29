#include <stdio.h>


struct SINH_VIEN{
	char mssv[10];
	char hoten[30];
	int namsinh;
	float diem;
	char malop[10];
};
typedef struct SINH_VIEN SV;


	void nhapSV(SV *a);
	void xuatSV(SV a);
	void nhapDSSV(SV a[], int n);
	void xuatDSSV(SV a[], int n);
	
	
int main()
{
	
	SV a[10];
	int n = 2;
	FILE *fp;
	
	fp=fopen("dssv.out", "rb");
	if(fp!=NULL){
		fread(a, sizeof(SV), n, fp);
		fclose(fp);
	}else{printf("loi");}
	
				
	xuatDSSV(a, n);
	return 0;
}

void nhapSV(SV *a)
{
	printf("\nnhap ma so sinh vien: ");
	fflush(stdin);
	scanf("%s", a->mssv);
	
	printf("\nnhap day du ho ten: ");
	fflush(stdin);
	gets(a->hoten);
	
	printf("\nnhap nam sinh: ");
	fflush(stdin);
	scanf("%d", &a->namsinh);
	
	printf("\nnhap diem: ");
	fflush(stdin);
	scanf("%f", &a->diem);
	
	printf("\nnhap ma lop: ");
	fflush(stdin);
	scanf("%s", a->malop);
	
}


void xuatSV(SV a)
{
	printf("\n%s\t%s\t%d\t%f\t%s", a.mssv, a.hoten, a.namsinh, a.diem, a.malop);
}


void nhapDSSV(SV a[], int n)
{
	int i=0;
	while(i<n){
		printf("\nnhap sinh vien tai vi tri %d", i);
		nhapSV(&a[i]);
		i++;
		}
}

void xuatDSSV(SV a[], int n)
{
		int i=0;
	while(i<n){
		printf("\nsinh vien tai vi tri %d", i);
		xuatSV(a[i]);
		i++;
		}
}
