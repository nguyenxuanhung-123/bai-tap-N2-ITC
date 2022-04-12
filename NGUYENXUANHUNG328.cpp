#include<iostream>
#include<conio.h>
#include<cstring> 
#include<iomanip.> 
using namespace std;
/*
//cau1  
class ANPHAM{ private: 
	char mahang[30];
	char tenXB[40];
	int ngay;
	float dongia;
	public: 
	ANPHAM(char*mahang=" ",char*tenXB=" ", int ngay =0, float dongia =0){
		strcpy(this->mahang,mahang);
		strcpy(this->tenXB,tenXB);
		this->ngay=ngay;
		this->dongia=dongia; 
		 
	} 
	~ANPHAM(){
	} 
	 void nhap(){
	 	fflush(stdin); 
	 	cout<<setw(10)<<"nhap vao ma hang:"<<endl;
		 cin.getline(mahang, 30); 
		 cout<<setw(10)<<"nhap vao ten nha xuat ban:"<<endl; 
		 cin.getline(tenXB,40);
		 cout<<setw(10)<<"nhap vao ngay xuat ban:"<<endl;
		 cin>>ngay;
		 cout<<setw(10)<<"nhap vao don gia:"<<endl;
		 cin>>dongia; 
	 } 
	 void xuat(){
	 	fflush(stdin);
		 cout<<setw(15)<<"ma hang la:"<<setw(10)<<mahang<<endl;
		 cout<<setw(15)<<"ten nha xuat ban:"<<setw(10)<<tenXB<<endl;
		 cout<<setw(15)<<"ngay xuat ban:"<<setw(10)<<ngay<<endl;
		 cout<<setw(15)<<"don gia:"<<setw(10)<<dongia<<endl; 
	 } 
}; 
int main(){
	int n;
	cout<<"nhap so luong an pham:"<<endl;
	cin>>n;
	ANPHAM a[n];
	cout<<"nhap thong tin an pham:"<<endl; 
	for(int i=0;i<n;i++){
		cout<<"nhap vao an pham thu"<<i+1<<endl; 
		a[i].nhap(); 
	}
	for(int i=0;i<n;i++){
		cout<<"xuat  an pham thu" <<i+1<<endl; 
		a[i].xuat(); 
	} 
	*/
	/*
	//cau2
	class ANPHAM{ private: 
	char mahang[30];
	char tenXB[40];
	int ngay;
	float dongia;
	public: 
	ANPHAM(char*mahang=" ",char*tenXB=" ", int ngay =0, float dongia =0){
		strcpy(this->mahang,mahang);
		strcpy(this->tenXB,tenXB);
		this->ngay=ngay;
		this->dongia=dongia; 
		 
	} 
	~ANPHAM(){
	} 
	 void nhap(){
	 	fflush(stdin); 
	 	cout<<setw(10)<<"nhap vao ma hang:"<<endl;
		 cin.getline(mahang, 30); 
		 cout<<setw(10)<<"nhap vao ten nha xuat ban:"<<endl; 
		 cin.getline(tenXB,40);
		 cout<<setw(10)<<"nhap vao ngay xuat ban:"<<endl;
		 cin>>ngay;
		 cout<<setw(10)<<"nhap vao don gia:"<<endl;
		 cin>>dongia; 
	 } 
	 void xuat(){
	 	fflush(stdin);
		 cout<<setw(15)<<"ma hang la:"<<setw(10)<<mahang<<endl;
		 cout<<setw(15)<<"ten nha xuat ban:"<<setw(10)<<tenXB<<endl;
		 cout<<setw(15)<<"ngay xuat ban:"<<setw(10)<<ngay<<endl;
		 cout<<setw(15)<<"don gia:"<<setw(10)<<dongia<<endl; 
	 } 
}; 
class SACH:public ANPHAM {
	private:
	char tensach[30];
	char tentacgia[40];
	int sl;
	public:
		SACH(char*mahang=" ",char*tenXB=" ", int ngay =0, float dongia =0,
		char*tensach=" ", char*tentacgia=" ",int sl = 0):ANPHAM(mahang,tenXB,ngay,dongia) 
		{
			strcpy(this->tensach,tensach);
			strcpy(this->tentacgia,tentacgia);
			this->sl=sl; 
		} 
		
		~SACH(){
		} 
			
		friend istream& operator >>(istream& is,SACH a ) {
		
			fflush(stdin);
			cout<<setw(10)<<"nhap vao ten sach:"<<endl;
			is.getline(a.tensach,30);
			cout<<setw(10)<<"nhap vao ten tac gia:"<<endl;
			is.getline(a.tentacgia,40);
			cout<<"nhap vao so luong:"<<endl;
			is>>sl; 
				
			 
		}
			
		friend ostream& operator <<(ostream& os,SACH a ){
		 
			fflush(stdin);
			
			os<<setw(10)<<tensach<<endl;
			os<<setw(10)<<tentacgia<<endl;
			os<<setw(10)<<sl<<endl; 
			 	
		}
		 
	 
	
}; 
void tinhtien(){
			float thanhtien;
			thanhtien = soluong*dongia; 
		}
		int main(){
			int n;
			cout<<"nhap so luong sach"<<endl;
			cin>>n;
			SACH a[n];
			for(int i=0;i<n;i++){
				cout<<"nhap sach thu"<<i+1<<endl; 
				cin>>a[i]; 
			} 
			for(int i=0;i<n;i++){
				cout<<"xuat sach thu"<<i+1<<endl; 
				cout<<a[i]; 
			} 
			 
		}
		*/
		//cau3
		struct danhsach{
			char tensach[30];
			char nxb[40];
			int dongia;
			char masach[50];
			int sl;
			char tacgia[20];
			float thanhtien; 
		}ds[100]; 
		void nhap(danhsach ds[100], int n){
			for(int i=0;i<n;i++){
				fflush(stdin);
				 
				cout<<"nhap ten sach:"<<endl; 
				gets(ds[i].tensach);
				cout<<"nhap nha xuat ban:"<<endl;
				gets(ds[i].nxb);
				cout<<"nhap vao tac gia:"<<endl;
				gets(ds[i].tacgia);
				cout<<"nhap vao ma sach:"<<endl;
				gets(ds[i].masach);
				cout<<"nhap vao don gia:"<<endl;
				cin>>dongia;
				cout<<"nhap vao so luong:"<<endl;
				cin>>sl;
				 
			} 
		}
		void xuat(danhsach ds[100], int n){
			for(int i=0;i<n;i++){
				fflush(stdin);
				cout<<setw(15)<<tensach
				    <<setw(15)<<nxb
					<<setw(15)<<tacgia
					<<setw(15)<<masach
					<<setw(15)<<dongia
					<<setw(15)<<sl<<endl; 
			}
	 
	return 0; 
} 
