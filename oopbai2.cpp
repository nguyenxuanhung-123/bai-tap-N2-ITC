#include<iostream>
#include<iomanip> 
#include<string.h> 
#include<conio.h>
using namespace std;

//cau3 
class dathuc3{
	
	private:
		int a,b,c,d;
		public:
			//ham khoi tao
			dathuc3(int a=0, int b=0, int c=0, int d=0){
				this -> a=a;
			this -> b=b;
			this -> c=c;
			this -> d=d;
			
			
			}
			//ham huy
			~dathuc3(){
			}
			//ham ban
			friend istream& operator >>(istream& is,dathuc3& a ){ // nhap thi bat buoc phai co tham chieu &
				cout<<"\nNhap A :";
				is>>a.a;
				cout<<"\nNhap B :";
				is>>a.b;
				cout<<"\nNhap C :";
				is>>a.c;
				cout<<"\nNhap D:";
				is>>a.d;
				return is;
				    
				    
			}
			friend ostream& operator <<(ostream& os,dathuc3 a ){ // xuat thi ko can tham chieu &
				os<<a.a
				  <<a.b
				  <<a.c
				  <<a.d<<endl;
				  return os;
			}
		 
			
			
};
int main(){
	int n;
	cout<<"nhap n:";
	cin>>n;
	dathuc3 a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		cout<<a[i];
	}
	
	
	/*
	//cau1 
	struct NS{
		int ngay;  
       int thang;  
        int nam; 
	};
	class khachhang{
		private:
		char hoten[30];
	NS ns; 
	
	char cmt[10];
	char hokhau[50];  
	public:
	khachhang(){
    	strcpy(this -> hoten, " 	");
		strcpy(this -> cmt," ");
		strcpy(this -> hokhau, " ");
		ns.ngay=4;
		ns.thang=7; 
		ns.nam=2003; 
	} 
	~khachhang(){
		
	} 
		friend istream& operator >>(istream& is,khachhang& kh ){
			cin.ignore();
			cout<<"\nNhap ho va ten:"<<" ";
			is.getline(kh.hoten,30); 
			
			cout<<"\nNhap vao chung minh thu:";
			is.getline(kh.cmt,10);
			cout<<"nhap vao ho khau:";
			is.getline(kh.hokhau,50); 
			cout<<"\nNhap vao ngay sinh:"<<endl;
			cout<<"nhap vao ngay:"<<endl; 
			is>>kh.ns.ngay;	
			cout<<"nhap vao thang:"<<endl;
			is>>kh.ns.thang;
			cout<<"nhap vao nam:"<<endl;
			is>>kh.ns.nam; 
			return is; 
			
		}
			friend ostream& operator <<(ostream& os,khachhang  kh ){
				os<<setw(20)<<kh.hoten
				<<setw(20)<<kh.ns.ngay
				<<setw(20)<<kh.ns.thang
				<<setw(20)<<kh.ns.nam 
				<<setw(20)<<kh.cmt
				<<setw(20)<<kh.hokhau<<endl; 
				return os; 
			}
			  
			  	bool operator > (khachhang kh){
			  		if((this->ns.nam,kh.ns.nam )>0) 
			  		return true; 
				  } 
				   
				    
				bool operator < (khachhang kh){
			  		if((this->ns.nam,kh.ns.nam )<0) 
			  		return true; 
				  } 
	
	
	}; 
	int main(){
		int n;
		cout<<"nhap vao so luong khach hang:"<<endl;
		cin>>n;
		khachhang a[n];
		for(int i=0;i<n;i++){
			cout<<"nhap thong tin khach hang thu"<<i+1<<endl; 
			cin>>a[i]; 
		} 
		for(int i=0;i<n;i++){
			cout<<"xuat thong tin khach hang thu"<<i+1<<endl; 
			cout<<a[i]; 
		} 
		
		cout<<"***********************************************************************************************"<<endl; 
			cout<<"\nthong tin khach hang sau khi sap xep ve tuoi theo thu tu tang dan  la:"<<endl; 
        for(int i=0;i<n-1;i++)
        for(int j=i+1;j<n;j++) 
	
		if(a[i]>a[j]){
			khachhang tg=a[i];
			a[i]=a[j];
			a[j]=tg; 
			 
		}
		
			for(int i=0;i<n;i++){
		cout<<"xuat thong tin khach hang thu"<<i+1<<endl;
		cout<<a[i]; 
	} 	 	
	 
		 
	cout<<"**********************************************************************************************************"<<endl;
	cout<<"danh sach khach hang co tuoi giam dan la:"<<endl; 
	for(int i=0;i<n-1;i++)
        for(int j=i+1;j<n;j++)
      if(a[i]<a[j]){
			khachhang tg=a[i];
			a[i]=a[j];
			a[j]=tg; 
			 
		}
		
			for(int i=0;i<n;i++){
		cout<<"xuat thong tin khach hang thu"<<i+1<<endl;
		cout<<a[i]; 
	} 
	*/	
	
	/*
	
	//cau2 
	class giaovien{
		private:
		char hoten[30];
		int tuoi;
		char bc[15];
		char chuyennganh[20];
		float bl=1;
		public:
			giaovien(){
    	strcpy(this -> hoten, " 	");
		strcpy(this -> bc," ");
		strcpy(this -> chuyennganh, " ");
	     this -> tuoi =0;
		 this -> bl = 0; 
	} 
	~giaovien(){
	}
		
		friend istream& operator >>(istream& is,giaovien& gv ){
			cin.ignore();
			cout<<"\nNhap ho va ten:"<<" ";
			is.getline(gv.hoten,30); 
			
			
			cout<<"nhap vao bang cap:"<<endl;
			is.getline(gv.bc,15); 
			cout<<"nhap vao chuyen nganh:"<<endl;
			 is.getline(gv.chuyennganh,20);
			 cout<<"nhap vao  tuoi :"<<endl;
			 is>>gv.tuoi;
			 cout<<"nhap vao bac luong:"<<endl;
			 is>>gv.bl; 
			
			
			return is; 
			
		}
		
			friend ostream& operator <<(ostream& os,giaovien  gv ){
				os<<setw(15)<<"ho va ten"<<setw(10)<<gv.hoten
				<<setw(15)<<"bang cao"<<setw(10)<<gv.bc 
				<<setw(15)<<"chuyen nganh"<<setw(10)<<gv.chuyennganh 
				<<setw(15)<<"tuoi"<<setw(10)<<gv.tuoi 
				
				<<setw(15)<<"bac luong"<<setw(10)<<gv.bl <<endl; 
				 
				
				return os; 
			} 
			float luongcoban(){
				return this -> bl*610; 
			} 
			friend bool operator == ( giaovien gv1, giaovien gv2){
			
				if(gv1.bc==gv2.bc)	 
				return true;
				else
				return false; 
				 
			} 
			 
			
	}; 
	int main(){
		int n;
		cout<<"nhap vao so luong giao vien:"<<endl; 
		cin>>n;
		giaovien a[n]; 
		for(int i=0;i<n;i++){
			cout<<"nhap thong tin giao vien thu"<<i+1<<endl;
			cin>>a[i]; 
		} 
		
	 for(int i=0;i<n;i++){
			cout<<"xuat thong tin giao vien thu"<<i+1<<endl;
			cout<<a[i]; 
		}
			cout<<"thong tin khach hang sau khi so sanh la:"<<endl; 
  for(int i=0;i<n-1;i++)
  for(int j=i+1;j<n;j++) 
	
		if(a[i]==a[j]){
			giaovien tg=a[i];
			a[i]=a[j];
			a[j]=tg; 
			
	} 
		for(int i=0;i<n;i++){
		cout<<"xuat thong tin khach hang thu"<<i+1<<endl;
		cout<<a[i]; 
	} 
			  
		
	*/
	
	 return 0;
}
	
    
	
   

