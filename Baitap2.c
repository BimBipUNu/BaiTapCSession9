/*Khai báo và gán giá trị cho một mảng bất kỳ, yêu cầu người dùng nhập vào vị trí cần sửa và giá trị mới sau khi sửa.
Tiến hành ghi đè giá trị cũ trong mảng tại vị trí cần sửa bằng giá trị mới. Sau khi sửa thì in mảng ra màn hình để kiểm tra.*/
#include<stdio.h>
int main()
{
    int a[10]={1,2,3,4,5,6,7,8,9,10};
    int position,num;
    printf("Nhập vị trí cần sửa: ");scanf("%d",&position);
    printf("Nhập giá trị mới: ");scanf("%d",&num);
    for (int i =0 ; i< 10 ; i++)
    {
        if(i+1 == position)
        {
            a[i]=num;
        }
    }
    for(int i =0 ; i< 10 ; i++)
    {
        printf("%d ",a[i]);
    }
}