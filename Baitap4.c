// Kết hợp kiến thức từ các bài trước, xây dựng chương trình hiển thị và thực hiện các chức năng theo menu
// Sau khi nhập lựa chọn chương trình sẽ thực hiện chức năng tương ứng, sau khi thực hiện chức năng menu sẽ lại hiện lên.
//Chương trình sẽ lặp lại liên tục cho đến khi người dùng chọn thoát.
#include<stdio.h>
int main()
{
    int n;
    int active = 1;
    printf("Menu\n");
    printf("1. Nhập vào mảng\n");
    printf("2. Hiển thị mảng\n");
    printf("3. Thêm phần tử\n");
    printf("4. Sửa phần tử\n");
    printf("5. Xóa phần tử\n");
    printf("6. Thoát\n");
    printf("Lựa chọn của bạn: ");scanf("%d",&n);
    if(n==6)
    {
        printf("Thoát");
        return 0;
    }
    while( n != 1)
    {
        printf("Chưa có dữ liệu: \n");
        printf("Lựa chọn của bạn: ");scanf("%d",&n);
        if(n==6)
        {
            printf("Thoát");
            return 0;
        }
    }
    int a;
    printf("Nhập số phần tử của mảng ");scanf("%d",&a);
    int arrayA[a];
    int num,position;
    int newNum;
    while( n != 6)
    {
        switch(n)
        {
            case 1:
                for (int i =0 ; i < a ;i++)
                {
                    printf("Nhập phần tử thứ %d: ",i+1);scanf("%d",&arrayA[i]);
                }
                break;
            case 2:
                for(int i =0; i < a ; i++)
                {
                    printf("%d ",arrayA[i]);
                }
                break;
            case 3:
                printf("Nhập giá trị muốn thêm vào mảng: ");scanf("%d",&num);
                printf("Nhập vị trí muốn chèn vào mảng: ");scanf("%d",&position);
                for (int i =0; i < a+1 ; i++)
                {
                    if(i+1 == position)
                    {
                        for (int j = a+1 ;j>=position ;j--)
                        {
                            arrayA[j]=arrayA[j-1];
                        }
                        arrayA[i]=num;
                    }
                }
                a++;
                break;
            case 4:
                printf("Nhập giá trị mới: ");scanf("%d",&newNum);
                printf("Nhập vị trí cần sửa: ");scanf("%d",&position);
                for (int i =0 ; i< a ; i++)
                {
                    if(i+1 == position)
                    {
                        arrayA[i]=newNum;
                    }
                }
                break;
            case 5:
                printf("Nhập vị trí muốn xóa khỏi mảng: ");scanf("%d",&position);
                for (int i =0; i < a ; i++)
                {
                    if( i+1 ==position)
                    {
                        for(int j =i ; j< a ; j++)
                        {
                            arrayA[j]=arrayA[j+1];
                        }
                    }
                }
                a--;
                break;
            default:
                printf("Dữ liệu không phù hợp");
        }
        printf("\nMenu\n");
        printf("1. Nhập vào mảng\n");
        printf("2. Hiển thị mảng\n");
        printf("3. Thêm phần tử\n");
        printf("4. Sửa phần tử\n");
        printf("5. Xóa phần tử\n");
        printf("6. Thoát\n");
        printf("Lựa chọn của bạn: ");scanf("%d",&n);
    }
    printf("Thoát");
}