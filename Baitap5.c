#include<stdio.h>
int main()
{
    int n;
    printf("Menu\n");
    printf("1. Nhập số phần tử cần nhập và giá trị các phần tử\n");
    printf("2. In ra giá trị các phần tử đang quản lý\n");
    printf("3. In ra giá trị các phần tử chẵn và tính tổng\n");
    printf("4. In ra giá trị lớn nhất và nhỏ nhất trong mảng\n");
    printf("5. In ra các phần tử là số nguyên tố trong mảng và tính tổng\n");
    printf("6. Nhập vào một số và thống kê trong mảng có bao nhiêu phần tử đó\n");
    printf("7. Thêm một phần tử vào vị trí chỉ định\n");
    printf("8. Thoát\n");
    printf("Lựa chọn của bạn: ");scanf("%d",&n);
    if(n==8)
    {
        printf("Thoát");
        return 0;
    }
    while( n != 1)
    {
        printf("Chưa có dữ liệu: \n");
        printf("Lựa chọn của bạn: ");scanf("%d",&n);
        if(n==8)
        {
            printf("Thoát");
            return 0;
        }
    }
    int a,max,min,count,num,position;
    printf("Nhập số phần tử cần nhập: ");scanf("%d",&a);
    int array[a];
    int sum =0;
    while( n != 8)
    {
        switch(n)
        {
            case 1:
                for(int i=0;i<a;i++)
                {
                    printf("Nhập phần tử thứ %d: ",i+1);scanf("%d",&array[i]);
                }
                break;
            case 2:
                printf("Giá trị các phần tử đang quản lý: ");
                for(int i=0; i<a; i++)
                {
                    printf("%d ",array[i]);
                }
                break;
            case 3:
                sum = 0;
                printf("Các số chẵn trong mảng là: ");
                for(int i=0; i<a; i++)
                {
                    if(array[i] %2 ==0)
                    {
                        printf("%d ",array[i]);
                        sum+=array[i];
                    }
                }
                printf("\nTổng các số chẵn là: %d",sum);
                break;
            case 4:
                max =0;
                min=array[0];
                for(int i =0; i<a; i++ )
                {
                    if(array[i] > max)
                    {  
                        max = array[i];
                    }
                    if(array[i] < min)
                    {
                        min = array[i];
                    }
                }
                printf("Giá trị lớn nhất trong mảng: %d\n",max);
                printf("Giá trị nhỏ nhất trong mảng: %d",min);
                break;
            case 5:
                sum=0;
                count=0;
                printf("Các số nguyên tố trong mảng là: ");
                for (int i=0; i< a; i++)
                {
                    if(array[i]<2)
                    {
                        continue;
                    }
                    for(int j = 2; j*j <= array[i]; j++)
                    {
                        if(array[i] %j ==0)
                        {
                            count++;
                        }
                    }
                    if(count ==0)
                    {
                        printf("%d ",array[i]);
                        sum+=array[i];
                    }
                    count=0;
                }
                printf("\nTổng các số nguyên tố trong mảng là : %d",sum);
                break;
            case 6:
                count =0;
                printf("Nhập một số cần kiểm tra: ");scanf("%d",&num);
                for(int i=0; i<a ; i++)
                {
                    if(array[i]==num)
                    {
                        count++;
                    }
                }
                printf("Có %d phần tử trong mảng có giá trị %d",count,num);
                break;
            case 7:
                printf("Nhập giá trị phần tử muốn thêm: ");scanf("%d",&num);
                printf("Nhập vị trí phần tử muốn thêm: ");scanf("%d",&position);
                for(int i=0; i<a+1 ;i++)
                {
                    if(i+1 == position)
                    {
                        for(int j= a+1; j>=position;j--)
                        {
                            array[j]=array[j-1];
                        }
                        array[i]=num;
                    }
                }
                a++;
                break;
            default:
                printf("Dữ liệu không hợp lệ");
        }
        printf("\nMenu\n");
        printf("1. Nhập số phần tử cần nhập và giá trị các phần tử\n");
        printf("2. In ra giá trị các phần tử đang quản lý\n");
        printf("3. In ra giá trị các phần tử chẵn và tính tổng\n");
        printf("4. In ra giá trị lớn nhất và nhỏ nhất trong mảng\n");
        printf("5. In ra các phần tử là số nguyên tố trong mảng và tính tổng\n");
        printf("6. Nhập vào một số và thống kê trong mảng có bao nhiêu phần tử đó\n");
        printf("7. Thêm một phần tử vào vị trí chỉ định\n");
        printf("8. Thoát\n");
        printf("Lựa chọn của bạn: ");scanf("%d",&n);
    }
    printf("Thoát");
}