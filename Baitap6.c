#include<stdio.h>
int main()
{
    int n;
    printf("Menu\n");
    printf("1. Nhập kích cỡ và giá trị các phần tử của mảng\n");
    printf("2. In giá trị các phần tử của mảng theo ma trận\n");
    printf("3. In giá trị các phần tử là lẻ và tính tổng\n");
    printf("4. In ra các phần tử nằm trên đường biên và tính tích\n");
    printf("5. In ra các phần tử nằm trên đường chéo chính\n");
    printf("6. In ra các phần tử nằm trên đường chéo phụ\n");
    printf("7. In ra dòng có tổng giá trị các phần tử là lớn nhất\n");
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
    int row,column;
    printf("Nhập số hàng của mảng: ");scanf("%d",&row);
    printf("Nhập số cột của mảng: ");scanf("%d",&column);
    int a[row][column];
    int sum =0;
    int multiplication =1;
    int maxSumRow,ansRow;
    while(n != 8)
    {
        switch(n)
        {
            case 1:
                for (int i =0; i<row; i++)
                {
                    for (int j =0; j<column; j++)
                    {
                        printf("Nhập phần tử vị trí (%d,%d)",i,j);scanf("%d",&a[i][j]);
                    }
                }
                break;
            case 2:
                for (int i =0; i<row; i++)
                {
                    for (int j =0; j<column; j++)
                    {
                        printf("%d ",a[i][j]);
                        if (a[i][j] < 10)
                        {
                            printf(" ");
                        }
                        
                    }
                    printf("\n");
                }
                break;
            case 3:
                sum =0;
                printf("Các phần tử là số lẻ: ");
                for (int i =0; i<row; i++)
                {
                    for (int j =0; j<column; j++)
                    {
                        if(a[i][j] %2 != 0)
                        {
                            printf("%d ",a[i][j]);
                            sum+=a[i][j];
                        }
                    }
                }
                printf("Tổng các số lẻ là: %d",sum);
                break;
            case 4:
                multiplication =1;
                for (int i =0; i<row; i++)
                {
                    for (int j =0; j<column; j++)
                    {
                        if(i ==0 || j==0 || i==row-1 || j==column-1)
                        {
                            printf("%d ",a[i][j]);
                            multiplication *= a[i][j];
                        }else
                        {
                            printf("  ");
                        }
                    }
                    printf("\n");
                }
                printf("Tích các phần tử là: %d",multiplication);
                break;
            case 5:
                if (row != column)
                {
                    printf("Không có đường chéo chính");
                    break;
                }
                for (int i =0; i<row; i++)
                {
                    for (int j =0; j<column; j++)
                    {
                        if (i==j)
                        {
                            printf("%d ",a[i][j]);
                        }else
                        {
                            printf(" ");
                        }
                        
                    }
                }
                break;
            case 6:
                if (row != column)
                {
                    printf("Không có đường chéo phụ");
                    break;
                }
                for (int i =0,j=column-11; i<row; i++,j--)
                {
                    printf("%d ",a[i][j]);
                }
                break;
            case 7:
                maxSumRow =0;
                sum =0;
                printf("Dòng có tổng các phần tử lớn nhất: ");
                for (int i =0; i<row; i++)
                {
                    for (int j =0; j<column; j++)
                    {
                        sum+=a[i][j];
                    }
                    if (sum>maxSumRow)
                    {
                        maxSumRow=sum;
                        ansRow=i;
                    }
                    sum=0;
                }
                for(int j=0; j<column; j++)
                {
                    printf("%d ",a[ansRow][j]);
                }
                break;
            default:
                printf("Dữ liệu không hợp lệ");
        }
        printf("\nMenu\n");
        printf("1. Nhập kích cỡ và giá trị các phần tử của mảng\n");
        printf("2. In giá trị các phần tử của mảng theo ma trận\n");
        printf("3. In giá trị các phần tử là lẻ và tính tổng\n");
        printf("4. In ra các phần tử nằm trên đường biên và tính tích\n");
        printf("5. In ra các phần tử nằm trên đường chéo chính\n");
        printf("6. In ra các phần tử nằm trên đường chéo phụ\n");
        printf("7. In ra dòng có tổng giá trị các phần tử là lớn nhất\n");
        printf("8. Thoát\n");
        printf("Lựa chọn của bạn: ");scanf("%d",&n);
    }
    printf("Thoát");
}