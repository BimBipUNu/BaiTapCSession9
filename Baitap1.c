/*Khai báo một mảng có 100 phần tử, yêu cầu người dùng nhập vào số phần tử muốn nhập và nhập từng phần tử vào mảng.
Sau khi đã nhập xong tiến hành thực hiện logic thêm phần tử vào mảng.
Yêu cầu người dùng nhập giá trị và vị trí muốn thêm vào mảng và thực hiện chèn giá trị đó vào vị trí đã nhập.*/
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
    int num,position;
    printf("Nhập giá trị muốn thêm vào mảng: ");scanf("%d",&num);
    printf("Nhập vị trí muốn chèn vào mảng: ");scanf("%d",&position);
    //Thêm phần tử vào mảng
    for (int i =0; i < n +1 ; i++)
    {
        if(i+1 == position)
        {
            for (int j = n+1 ;j>=position ;j--)//Dời các phần tử
            {
                a[j]=a[j-1];
            }
            a[i]=num;
        }
    }
    //Duyệt mảng
    for (int i =0; i<n+1;i++)
    {
        printf("%d ",a[i]);
    }
}