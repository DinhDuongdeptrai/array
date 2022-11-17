// Cho 1 mảng có 100 phần tử cố định, cho phép người dùng nhập vào số lượng phần tử. Thực hiện hiển thị giá trị phần tử đã nhập.
// a) Tìm kiếm phần tử thứ đầu tiên, cuối cùng trong mảng
// b) Chèn giá trị x nhập từ bàn phím tại vị trí i
// c) Xóa phần tử tại vị trí thứ x trong mảng
// d) Xóa phần tử tại đầu tiên,cuối cùng trong mảng 
// e) Thực hiện xuất vị trí các phần tử có giá trị cùng nhau
// Hàm main() thực hiện viết menu
#include <iostream>
#include <string.h>
#define MAX 100
using namespace std;


void input ( int a[] , int &n)
{

    cout << "Nhap so phan tu: ";
    cin >> n;
    for ( int i = 0 ; i < n ;i++)
    {
        cout <<"a["<<i<<"]= : ";
        cin >> a[i]; 
    }
}

void output ( const int a[] , const  int &n)
{

    for ( int i = 0 ; i < n ; i++)
    {
        cout << a[i] << "\t";
    }
}

bool add_array ( int a[] , int &n , int vt , int x)
{


    do
    {
        cout << "Them phan tu: ";
        cin >> x;
        cout << "Tai vao vi tri: ";
        cin >> vt;
    } while ( vt < 0 || vt > n);

    n++; 
    for ( int i = n;  i >= vt+1 ; i--)
        a[i] = a[i-1];
    a[vt] = x;
    return true;
    
}



void xoa_mang ( int a[] , int &n , int vt )
{
    do
    {
        cout << "Nhap vi tri can xoa: ";
        cin >> vt;
    } while ( vt < 0 || vt > n);
    
    
    for ( int i = vt +1;  i < n ; i++ )
    {
        a[i-1] = a[i];
    
    }
    n--;
}




void output_one ( int a[] , int n)
{
    
    for ( int i = 0 ; i < n ; i++)
    {
    
        if ( i = n-1)
        {
            cout << a[ 0] ;
            break;
        }
    }

}    

void output_cuoi ( int a[] , int n)
{
    
    for ( int i = 0 ; i < n ; i++)
    {
    
        if ( i =n-1)
        {
            cout << a[ n-1] ;
            break;
        }
       
    }
}    

void xoa_pt1 ( int a[] , int &n  )
{
    
    for ( int i =1;  i < n ; i++ )
    {
        a[i-1] = a[i];
    
    }
    n--;
}

void xoa_cuoi ( int a[] , int &n )
{
    
    for ( int i =1;  i < n ; i++ )
    {
        a[i+1] = a[i];
    
    }
    //a[vt] = x;
    n--;
}

void Trung_Nhau ( int a[] , int &n )
{
    for(int i=0; i < n-1 ; i++)

        for(int j=i+1 ; j<n ; j++)

            if(a[i]==a[j])
                cout << "a["<<i<<"]="<<"a["<<j<<"]="<<a[i] << endl ;

}

int main ()
{
    int a[MAX];
    int n;
    int  luachon;
    int vt , x;
    do
    {
        cout << "\n=================NHAP MANG ==================" << endl;
        input(a,n);
        cout << "=================XUAT MANG ==================" << endl;
        output( a,n);
        cout << "\n\n\n\\======================MENU=======================//" << endl;
        cout << "\n\n\n1.Tim kiem phan tu dau tien va cuoi cung trong mang " << endl;
        cout << "2. Chen gia tri x nhap tu ban phim tai vi tri i" << endl;
        cout << "3. Xoa phan tu tai vi tri thu i trong mang " << endl;
        cout << "4. Xoa phan tu tai vi tri dau tien" << endl;
        cout << "5. Xoa phan tu cuoi cung " << endl;
        cout << "6.Thuc hien xuat vi tri cac phan tu co gia tri cung nhau " << endl;


        cout << "\nMoi ban nhap vao lua chon: ";
        cin>> luachon;
        switch (luachon)
        {
        case 1:
            cout << "Phan tu dau tien trong mang: ";
            output_one (a, n) ;
            cout << "\nPhan tu cuoi cung trong mang: ";
            output_cuoi ( a ,  n) ;
            break;
        
        case 2: 
            add_array ( a,n,vt,x);
            output ( a, n) ;
            break;
        case 3:
            xoa_mang ( a , n ,vt);
            output ( a, n) ;
            break ;
        case 4:
            xoa_pt1 ( a, n);
            output ( a, n);
            break;
        case 5: 
            xoa_cuoi( a, n) ;
            output ( a, n);
            break;
        case 6: 
            Trung_Nhau ( a, n) ;
            
            break;
        default:
            cout << "Loi!" << endl;
            break;
        }

    } while (true);
    


}    

    
    
 // Cho 1 mảng có 100 phần tử cố định, cho phép người dùng nhập vào số lượng phần tử. Thực hiện hiển thị giá trị phần tử đã nhập.
// a) Tìm kiếm phần tử thứ đầu tiên, cuối cùng trong mảng
// b) Chèn giá trị x nhập từ bàn phím tại vị trí i
// c) Xóa phần tử tại vị trí thứ x trong mảng
// d) Xóa phần tử tại đầu tiên,cuối cùng trong mảng 
// e) Thực hiện xuất vị trí các phần tử có giá trị cùng nhau
// Hàm main() thực hiện viết menu





