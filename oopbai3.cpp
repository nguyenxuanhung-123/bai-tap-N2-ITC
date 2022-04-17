#include<iostream>
#include<conio.h>
#include<string.h> 
#include<iomanip> 
using namespace std;
/*
//bai1
 class nguoi{
 	private:
 	char hoten[30];
 	int namsinh;
 	public:
 		
 		
 		void nhap(){
 			fflush(stdin);
 			cout<<"nhap vao ho va ten:"<<endl;
 			cin.getline(hoten, 30);
 			fflush(stdin); 
 			cout<<"nhap vao nam sinh:"<<endl;
 			cin>>namsinh;
		 }
		 void xuat(){
		 	cout<<"ho va ten:"<<hoten<<endl;
		 	cout<<"nam sinh:"<<namsinh<<endl;
		 }
 };
 class thisinh:public nguoi 
 {
 	private:
 		char sbd[20];
 		float diemtoan,diemly,diemhoa;
 		
 		public:
 			
 			
 			void nhap1(){
 				nguoi::nhap();
 				fflush(stdin); 
 				cout<<"nhap vao so bao danh:"<<endl;
 				cin>>sbd;
 				cout<<"nhap vao diem toan:"<<endl;
 				cin>>diemtoan;
 				cout<<"nhap vao diem ly:"<<endl;
 				cin>>diemly;
 				cout<<"nhap vao diem hoa:"<<endl;
 				cin>>diemhoa;
 				
			 }
			 void xuat1(){
			 	nguoi::xuat();
			 	cout<<"so bao danh thi sinh la:"<<sbd<<endl;
			 	cout<<"diem toan:"<<diemtoan<<endl;
			 	cout<<"diem ly:"<<diemly<<endl;
			 	cout<<"diem hoa:"<<diemhoa<<endl;
			 	cout<<"diem trung binh la:"<<tongbamon()<<endl; 
			 }
			  
			  float tongbamon(){
			  	return diemtoan + diemly + diemhoa; 
			  }
			  float getdiemtoan(){
			  	return diemtoan; 
			  } 
			float getdiemly(){
			  	return diemly; 
			  } 
			  float getdiemhoa(){
			  	return diemhoa;			
				    } 
				     
			 bool operator ==(char*c){
		return (strcmpi(this->sbd,c)==0);
	} 
			 
			 
			 
 		
 };
 void input(thisinh ts[],int n){
 	for(int i=0;i<n;i++){
 		cout<<"nhap vao thi sinh thu"<<i+1<<endl; 
 		cin.ignore();
 		  ts[i].nhap1(); 
	 } 
 } 
 void output(thisinh ts[],int n){
 	cout<<"danh sach thi sinh vua nhap la:"<<endl;
 	for(int i=0;i<n;i++){
 		ts[i].xuat1(); 
	 }
	  
 } 
 void tongbamon(thisinh ts[], int n){
 	cout<<"danh sach thi sinh co tong 3 mon tang dan la:"<<endl;
	  for(int i=0;i<n-1;i++)
	  for(int j=i+1;j<n;j++)
	  if(ts[i].tongbamon()>ts[j].tongbamon())
	  {
	  	swap(ts[i],ts[j]); 
	   } 
	   for(int i=0;i<n;i++){
	   	ts[i].xuat1(); 
	   } 
 } 
 void cabamon(thisinh ts[], int n){
 	cout<<"danh sach thi sinh co tong 3 mon >= 5 la:"<<endl;
	  for(int i=0;i<n;i++)
	  	if(ts[i].getdiemtoan()&&ts[i].getdiemly()&&ts[i].getdiemhoa()>=5){
	  		ts[i].xuat1(); 
		  } 
	  
 } 
 void sobaodanh(thisinh ts[],int n){
 	char tim[10];
	 fflush(stdin);
	 cout<<"nhap so bao danh bat ly:"<<endl;
	 cin.getline(tim,10);
	 cout<<"danh sach thi sinh co so bao danh can :"<<tim<<"la"<<endl;
	 int dem=0;
	 for(int i=0;i<n;i++){
	 	if(ts[i]==tim){
	 		dem++;
			 ts[i].xuat1(); 
		 } 
	 } 
	 if(dem==0){
	 	cout<<"khong co thi sinh nhu vay"<<endl; 
	 } 
 } 
int main(){
	int n;
	cout<<"nhap vao danh sach thi sinh:"<<endl;
	cin>>n;
	thisinh *ts;
	
	ts=new thisinh[n];
	input(ts,n);
	output(ts,n);
	cout<<"*****************************"<<endl; 
	tongbamon(ts,n);
	cout<<"****************************"<<endl; 
	cabamon(ts,n); 
	cout<<"*************************"<<endl; 
	sobaodanh(ts,n); 
	getch();
	
	return 0;
}
*/
/*
//bai2
class sanpham{
		private:
		char masanpham[30];
		char tensp[30];
		int namsp;
		public:
			sanpham(char*masanpham=" ", char*tensp =" ",int namsp=0){
				strcpy(this->masanpham, " ");
				strcpy(this->tensp, tensp);
				this->namsp=namsp; 
			}
			 
		void nhap(){
			fflush(stdin);
			cout<<"nhap vao ma san pham:"<<endl;
			cin.getline(masanpham,30);
			cout<<"nhap vao ten san pham:"<<endl;
			cin.getline(tensp,30);
			cout<<"nhap vao nam san pham:"<<endl;
			cin>>namsp; 
		} 
		void xuat(){
			 cout<<setw(15)<<masanpham<<endl;
			 cout<<setw(15)<<tensp<<endl;
			 cout<<setw(15)<<namsp<<endl; 
		} 
		
}; 
class tivi:public sanpham{
	private:
	float chieudai,chieurong;
	public:
	tivi(char*masanpham=" ", char*tensp =" ",int namsp=0,float chieudai=0, float chieurong=0):sanpham(masanpham,tensp,namsp){
		this->chieudai=chieudai;
		this->chieurong=chieurong; 
	} 
	 
	friend istream& operator >>(istream &is, tivi& tv){
		fflush(stdin); 
		tv.nhap();
		cout<<"nhap vao chieu dai:"<<endl;
		is>>tv.chieudai;
		cout<<"nhap vao chieu rong:"<<endl;
		is>>tv.chieurong;
		return is; 
	} 
	friend ostream& operator <<(ostream &os,tivi tv){
		tv.xuat();
		os<<setw(15)<<tv.chieudai<<endl; 
		os<<setw(15)<<tv.chieurong<<endl;
	    os<<setw(15)<<tv.dientich()<<endl;
		return os; 
	} 
	float dientich(){
		return chieudai*chieurong; 
	} 
	
	
	
}; 
void nhap1(tivi tv[], int n){
	for(int i=0;i<n;i++){
		cout<<"nhap thong tin ti vi thu"<<i+1<<endl;
		fflush(stdin);
		cin>>tv[i]; 
	} 
} 
void xuat1(tivi tv[], int n){
	for(int i=0;i<n;i++){
		cout<<"xuat thong tin ti vi thu"<<i+1<<endl;
		cout<<tv[i]; 
	}
	
} 
void sapxep(tivi tv[],int n){
	cout<<"danh sach sap sep tang dan theo dien tich man hinh la:"<<endl;
	for(int i=0;i<n;i++)
	for(int j=i+1;j<n;j++) 
	if(tv[i].dientich()>tv[j].dientich()){
		swap(tv[i],tv[j]); 
	} 
	for(int i=0;i<n;i++){
		cout<<"\n"<<tv[i]<<"\t\t"; 
	}
	 
} 

 int main(){
 	int n;
	 cout<<"moi nhap so luong ti vi:"<<endl;
	 cin>>n; 
	 tivi*tv;
	 tv=new tivi[n];
	 nhap1(tv,n);
	 xuat1(tv,n); 
	 sapxep(tv,n); 
	 getch(); 
	 
	 return 0; 
 } 
 */
 //bai3
 
 class anpham{
 	private:
	 char ten[30];
	 float giathanh;
	 public:
	 anpham(char*ten=" ", float giathanh=0){
	 	strcpy(this->ten,ten);
		 this->giathanh=giathanh; 
	 } 
	 ~anpham(){
	 } 
	 void nhap(){
	 	fflush(stdin);
		 cout<<"nhap vao ten an pham:"<<endl;
		 cin.getline(ten,30);
		 cout<<"nhap vao gia thanh:"<<endl;
		 cin>>giathanh; 
	 } 
	 void xuat(){
	 	cout<<setw(15)<<ten;
		 cout<<setw(15)<<giathanh; 
	 } 
	 
	 
 }; 
class sach:public anpham{
	private:
	int sotrang;
	public:
    sach(char*ten=" ", float giathanh=0,int sotrang=0):anpham(ten,giathanh){
       this->sotrang=sotrang; 
	} 
	void nhap1(){
		fflush(stdin); 
		anpham::nhap(); 
		
		cout<<"nhap vao so trang:"<<endl;
		cin>>sotrang; 
	} 
	void xuat1(){
		anpham::xuat(); 
		cout<<setw(15)<<sotrang<<endl; 
	} 
	void inds(){
		if(sotrang>500){
			xuat1();
		} 
	} 
	
}; 
class diacd:public anpham,public sach{
	private:
	int sophut;
	public:
	diacd(char*ten=" ", float giathanh=0,int sophut=0):anpham(ten,giathanh){
		this->sophut=sophut; 
	} 
	void nhap(){
		
		sach::nhap1(); 
		cout<<"nhap vao so phut:"<<endl;
		cin>>sophut; 
	} 
	void xuat(){
		sach::xuat1(); 
		cout<<setw(15)<<sophut<<endl; 
	} 
	/*
	 bool operator ==(char*c){
		return (strcmpi(this->ten,c)==0);
	} 
	void timcd(diacd  cd[],int n){
 	char tim[10];
	 fflush(stdin);
	 cout<<"nhap ten bat ki:"<<endl;
	 cin.getline(tim,10);
	 cout<<"danh sach dia co ten  can :"<<tim<<"la"<<endl;
	 int dem=0;
	 for(int i=0;i<n;i++){
	 	if(cd[i]==tim){
	 		dem++;
			 cd[i].xuat(); 
		 } 
	 } 
	 if(dem==0){
	 	cout<<"khong co dia  nhu vay"<<endl; 
	 } 
 } 
 */
 bool operator ==(char*c){
		return (strcmpi(this->ten,c)==0);
	} 
	
}; 


	void timten( anpham ap[],int n){
 	char tim[10];
	 fflush(stdin);
	 cout<<"nhap ten bat ki:"<<endl;
	 cin.getline(tim,10);
	 cout<<"danh sach dia co ten  can :"<<tim<<"la"<<endl;
	 int dem=0;
	 for(int i=0;i<n;i++){
	 	if(ap[i]==tim){
	 		dem++;
			 ap[i].xuat(); 
		 } 
	 } 
	 if(dem==0){
	 	cout<<"khong co dia  nhu vay"<<endl; 
	 } 
 }  



void tieude(){
		cout<<setw(15)<<"ten san pham"
		    <<setw(15)<<"gia thanh" 
		    <<setw(15)<<"so trang"
			<<setw(15)<<"so phut"<<endl; 
		}

int main(){
	int n; 
	do{
		cout<<"nhap n:"<<endl; 
		cin>>n;
		if(n<=0){
			cout<<"nhap lai di ban oi!!"<<endl; 
		}
	}while(n<=0); 
	diacd  a[n];
	
	for(int i=0;i<n;i++){
		cout<<"nhap vao an pham thu"<<i+1<<endl;
		 
		a[i].nhap();
	   
		
	} 
	for(int i=0;i<n;i++){
		cout<<"xuat an pham thu"<<i+1<<endl;
		tieude(); 
		a[i].xuat(); 
		
		
		
	} 
	cout<<"-----------------------------------"<<endl;
	cout<<"thong tin sach co so trang lon hon 500 la:"<<endl; 
	for(int i=0;i<n;i++){
		cout<<"xuat an pham thu"<<i+1<<endl;
		tieude(); 
		a[i].inds(); 
		
		
		
	} 
	anpham*ap;
	ap=new anpham[n];
	timcd(ap,n);
	 
	
	
	
	
	return 0; 
} 

