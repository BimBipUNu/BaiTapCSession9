/*Khai báo một mảng có 100 phần tử, yêu cầu người dùng nhập vào số phần tử muốn nhập và nhập từng phần tử vào mảng.
Sau khi đã nhập xong tiến hành thực hiện logic xóa phần tử khỏi mảng.
Yêu cầu người dùng nhập vị trí cần xóa và thực hiện xóa phần tử ở vị trí đã nhập.*/
#include<stdio.h>
int main()
{
    int n;
    int a[100];
    //Lấy dữ liệu từ người dùng
    printf("Nhập số phần tử muốn nhập vào mảng: ");scanf("%d",&n);
    for(int i =0 ; i<n;i++)
    {
        printf("Nhập phần tử thứ %d: ",i+1);scanf("%d",&a[i]);
    }
    int position;
    printf("Nhập vị trí muốn xóa khỏi mảng: ");scanf("%d",&position);
    //Xóa phần tử trong mảng
    for (int i =0; i < n ; i++)
    {
        if( i+1 ==position)
        {
            for(int j =i ; j< n ; j++)
            {
                a[j]=a[j+1];
            }
        }
    }
    //Duyệt mảng
    for (int i = 0 ; i<n-1 ; i++)
    {
        printf("%d ",a[i]);
    }
}    