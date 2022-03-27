#include<iostream>
#include<iomanip> 
using namespace std;
/*
//bai so phuc 
class sophuc{
	private:
		int pt,pa;
		public:
			void nhap(){
				cout<<"nhap vao phan thuc:";
			cin>>pt;
			cout<<"nhap vao phan ao:";
			cin>>pa;
			}
			void in(){
				cout<<"\nA="<<pt<<"+"<<pa<<"*j";
			}
			int getPT(){
				return pt;
			}
			int getPA(){
				return pa;
			}
};
int main(){
  sophuc a[2];
  for(int i=0;i<2;i++){
  	a[i].nhap();
  }
    cout<<"tong cua 2 so thuc va 2 so phuc la:"<<a[0].getPT() + a[1].getPT()<<"+"<<a[0].getPA() + a[1].getPA()<<"*j"<<endl;
 	cout<<"hieu cua 2 so thuc va 2 so phuc la:"<<a[0].getPT() - a[1].getPT()<<"-"<<a[0].getPA() - a[1].getPA()<<"*j"<<endl;
    cout<<"tich cua 2 so thuc va 2 so phuc la:"<<a[0].getPT() * a[1].getPT()<<"*"<<a[0].getPA() * a[1].getPA()<<"*j"<<endl;
    cout<<"thuong cua 2 so thuc va 2 so phuc la:"<<(float)a[0].getPT() / a[1].getPT()<<"/"<<(float)a[0].getPA() / a[1].getPA()<<"*j"<<endl;
}

*/


//bai Hang Hoa 
 /*
   class   HangHoa {
	private:
		char MaHang [ 8 ];
		char TenHang [ 30 ];
		int sl;
		float dg, ThanhTien;

	public:
		void  nhap ()
		{
			cout << " \n Nhap ma hang: " ;
			cin. getline (MaHang, 8 );
			cout << " \n Nhap ten hang: " ;
			cin. getline (TenHang, 30 );
			cout << " \n Nhap so luong: " ;
			cin >> sl;
			cout << " \n Nhap don gia: " ;
			cin >> dg;
			fflush (stdin);
		}

		void  tinhTien ()
		{
			ThanhTien = sl * dg;
		}

		void  xuatTT ()
		{
			cout<<setw(10) << " Ma hang: " << MaHang
				<<setw(10)<< " Ten hang: " << TenHang
				<<setw(10)<< " So luong: " << sl
				<<setw(10)<< " Don gia: " << dg
				<<setw(10)<< " Thanh tien: " << ThanhTien << endl;
		}

		void  in ()
		{
			cout << " \n Don gia lon hon 50 la: " ;
			if (dg> 50 )
			{
				xuatTT ();
			}
		}	
};

int  main ( )
{
	int n;
	cout << " Nhap so luong hang hoa: " ;
	cin >> n;
	HangHoa a[n];
	fflush (stdin); // cin.ignore ()
	cout << "  Nhap thong tin hang hoa: " << endl;
	for ( int i = 0 ; i <n; i ++)
	{
		cout << "  Hang hoa thu " << i + 1 << endl;
		 a[i]. nhap ();
	}

	cout << "  Xuat thong tin hang hoa: " << endl;
	for ( int i = 0 ; i <n; i ++)
	{
		cout << "  Hang hoa thu " << i + 1 << endl;
		  a[i].in ();
	}

	
*/	
	
	
	//Bai tap ve nha 

//cau 1
 /*
class khachhang{
	private: 
	char hoten[30];
	struct NS{
		int ngay;  
       int thang;  
        int nam; 
	}ns;
	char cmt[10];
	char hokhau[50]; 
    public: 
	void nhap(){
		cout<<"nhap ho va ten:"<<endl;
		cin.getline(hoten, 30);
		cout<<"nhap vao ho khau:"<<endl;
		cin.getline(hokhau, 50); 
		cout<<"nhap vao ngay sinh:"<<endl;
		cin>> ns.ngay;
		cout<<"nhap vao thang sinh:"<<endl;
		cin>>ns.thang;
		cout<<"nhap vao nam sinh:"<<endl;
		cin>>ns.nam;
		cout<<"nhap vao chung minh thu so:"<<endl;
		cin>>cmt; 
		 
		fflush(stdin);
	} 
	void xuat(){
		cout<<"ho va ten"<<hoten
		   <<setw(10) <<"ngay sinh"<<ns.ngay 
		   <<setw(10)	<<"thang sinh"<<ns.thang 
		   <<setw(10)	<<"nam sinh"<<ns.nam 
		    <<setw(10)	<<"chung minh thu so"<<cmt
			<<setw(10)<<"ho khau "<<hokhau<<endl; 
	}
	
	//void sapxep(char hoten){
	
      
   //khachhang temp;
   //temp= sapxep[i];
   //sapxep[i]=sapxep[j];
   //sapxep[j]=temp;
 //}
 		 
		
	
	
	 


}; 
int main(){
	int n;
	cout<<"nhap so luong khach hang:";
	cin>>n;
	khachhang a[n];
	fflush(stdin);
	cout<<"nhap thong tin khach hang:"<<endl;
	for(int i=0;i<n;i++){
		cout<<"khach hang  thu:"<<i+1<<endl;
		a[i].nhap();
	}
	cout<<"xuat thong tin khach hang:"<<endl;
	for(int i=0;i<n;i++){
		cout<<"khach hang thu"<<i+1<<endl;
		a[i].xuat(); 
	} 

	*/
	
	//cau2
	/*
  class  giaovien{
	private: 
	char hoten[30];
	int age;
	char bangcap[15];
	char chuyennganh[20];
	float lcb,bl;
	 
    public: 
	void nhap(){
		cout<<"nhap ho va ten:"<<endl;
		cin.getline(hoten, 30);
		cout<<"nhap vao bang cap:"<<endl;
		cin.getline(bangcap, 15);
		cout<<"nhap vao chuyen nganh:"<<endl;
		cin.getline(chuyennganh, 20);
		cout<<"nhap vao tuoi:"<<endl;
		cin>>age;
		cout<<"nhap vao bac luong:"<<endl;
		cin>>bl; 
		 
		fflush(stdin);
	} 
	void xuattt(){
		cout<<"ho va ten:"<<hoten
		    <<"bang cap:"<<bangcap
			<<"chuyen nganh:"<<chuyennganh
			<<"tuoi:"<<age
			<<"bac luong:"<<bl
			<<"luong co ban:"<<lcb<<endl; 
	} 
 void tinh(){
 	
	 lcb =bl * 610;
	  
 } 
 void in(){
 	if(lcb<2000){
 		xuattt(); 
	 } 
 }
};
 int main()
  {
	int n;
	cout << " Nhap so luong giao vien: " ;
	cin >> n;
	giaovien a[n];
	fflush (stdin); // cin.ignore ()
	cout << "  Nhap thong tin giao vien: " << endl;
	for ( int i = 0 ; i <n; i ++)
	{
		cout << "  giao vien thu " << i + 1 << endl;
		 a[i].nhap();
	}

	cout << "  Xuat thong tin giao vien: " << endl;
	for ( int i = 0 ; i <n; i ++)
	{
		cout << "  Giao vien thu " << i + 1 << endl;
		  a[i].in();
	}
	*/
	//cau3
	class dathuc3(){
		private:
	int a,b,c,d;
	public:
	DaThuc3();
	
	DaThuc3(int,int,int,int); 
		
	}; 
	dathuc3::dathuc3(int t,int z, int y, int n)
  {
  t=0;
  z=0;
  y=0;
  n=0
  a=t;
  b=z;
  c=y;
  d=n;
   
  }
	 
	return 0;
}





	
	 
	
	
	
	
	





 

