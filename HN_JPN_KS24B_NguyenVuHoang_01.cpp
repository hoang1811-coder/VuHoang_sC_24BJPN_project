#include<stdio.h>
int main(){
	int choice,size;
	int arr[100];
	int position;
	int check,index,count,sum;
	do{
	printf("---MENU---\n");
	printf("1.Nhap so phan tu va gia tri cua mang\n");
	printf("2.In ra cac gia tri phan tu trong mang theo dang (arr[0]=1, arr[1]=5...)\n");
	printf("3.Dem so luong cac phan tu hoan hao co trong mang. Biet cac so hoan hao la cac so co tong cac yoc bang chinh no\n");
	printf("4.Tim gia tri nho thu trong mang. Khong duoc sap xep\n");
	printf("5.Them mot phan tu vao vi tri dau tien trong mang, phan tu moi them vao mang phai do nguoi dung nhap vao\n");
	printf("6.Xoa phan tu tai mot vi tri cu the (nguoi dung nhap vao)\n");
	printf("7.Sap xep mang theo thu tu giam dan (Selection sort)\n");
	printf("8.Tim kiem cac phan tu trong mang, phan tu tim kiem do nguoi dung nhap vao. Su dung thuat toan Binary search\n");
	printf("9.Sap xep lai mang vab hien thi ra toan bo phan tu co trong mang sao cho toan bo so le dung truoc bo so chan\n");
	printf("10.Dao nguoc thu tu cua cac phan tu co trong mang va hien thi ra toan bo cac phan tu co trong mang theo dang (arr[0]=1,..\n");
	printf("11.Thoat chuong trinh\n");
	printf("HAY NHAP LUA CHON CUA BAN :");
	scanf("%d", &choice);
	switch(choice){
		case 1:
			printf("Hay nhap so phan tu cua mang: ");
			scanf("%d", &size);
			printf("Hay nhap cac phan tu cua mang:\n");
			for(int i=0; i<size; i++){
				printf("phan tu arr[%d]: ", i);
				scanf("%d", &arr[i]);
			}
			break;
		case 2:
			printf("Hay nhap so phan tu cua mang: ");
			scanf("%d", &size);
			printf("Hay nhap cac phan tu cua mang:\n");
			for(int i=0; i<size; i++){
			printf("phan tu arr[%d]: ", i);
			scanf("%d", &arr[i]);
			}
			printf("Cac phan tu co trong mang la: ");
			for(int i=0; i<size; i++){
				printf("arr[%d]=%d,  ", i,arr[i]);
			}
			break;
		case 3:
			if (check == 0)
            {
                printf("\nBan chua them phan tu vao mang\n");
            }
            else
            {
                count = 0;
                for (int i = 0; i < size; i++)
                {
                    sum = 0;
                    for (int j = 1; j < arr[i]; j++)
                    {
                        if (arr[i] % j == 0)
                        {
                            sum += j;
                        }
                    }
                    if (sum == arr[i]){
                        count++;
                    }
                }
                printf("\nSo luong cac so hoan hao trong mang: %d\n", count);
            }
            break;
            case 4:
            	if (check == 0)
            {
                printf("\nBan chua them phan tu vao mang\n");
            }
            else
            {
                printf("\nSo nho thu hai trong mang la: ");
                int min1 = 1000000000, min2 = 1000000000;
                for (int i = 0; i < size; i++)
                {
                    if (min1 > arr[i]){
                        min1 = arr[i];
                    }
                }
                for (int i = 0; i < size; i++)
                {
                    if (min2 > arr[i] && arr[i] != min1){
                        min2 = arr[i];
                    }
                }
                printf("%d", min2);
                printf("\n");
            }
            break;
			case 5:
				printf("Hay nhap so phan tu cua mang: ");
			    scanf("%d", &size);
			    printf("Hay nhap cac phan tu cua mang:\n");
			    for(int i=0; i<size; i++){
				printf("phan tu arr[%d]: ", i);
				scanf("%d", &arr[i]);
			}
				printf("Nhap vi tri muon them phan tu: ");
                scanf("%d", &position);
                int x;
                if (position < 1 || position > size + 1) {
                    printf("Vi tri khong hop le!\n");
                } else {
                    printf("Nhap gia tri phan tu: ");
                    scanf("%d", &x);
                    for (int i = size; i >= position; i--) {
                        arr[i] = arr[i - 1];
                    }
                    arr[position - 1] = x;
                    size++;
                    printf("Phan tu da duoc them vao vi tri %d.\n", position);
                }
                break;
            case 6:
            	if (check == 0)
            {
                printf("\nBan chua them phan tu vao mang\n");
            }
            else
            {
                printf("\nNhap vi tri can xoa phan tu: ");
                scanf("%d", &index);
                if (index >= size)
                {
                    printf("\nVi tri ban nhap vuot qua do dai mang\n");
                }
                else
                {
                    for (int i = index; i < size; i++)
                    {
                        arr[i] = arr[i + 1];
                    }
                    size--;
                }
            }
            break;

				
				
		case 7:
			printf("Mang khi chua duoc sap xep ");
			for(int i=0; i<size; i++){
			printf("%d\t", arr[i]);
			}
			for(int i=0; i<size;i++){
	    	int min=i;
		        for(int j=i+1; j<size; j++){
			        if(arr[j]<arr[min]){
				    min = j;
			}
		}
		int temp=arr[i];
		arr[i]=arr[min];
		arr[min]=temp;
		
		}
		printf("\nmag sau khi da duoc sap xep ");
		for(int i=0; i<size; i++){
			printf("%d\t", arr[i]);
    }
    printf("\n");
    break;
        case 8:
        	int so,a;
        	printf("Hay nhap so phan tu cua mang: ");
			scanf("%d", &size);
			printf("Hay nhap cac phan tu cua mang:\n");
			for(int i=0; i<size; i++){
			printf("phan tu arr[%d]: ", i);
			scanf("%d", &arr[i]);
			}
        	printf("Nhap phan tu can tim kiem :");
        	scanf("%d", &so);
        	for(int i=0; i<size; i++){
        		if(so==arr[i]){
        			a=1;
        			break;
				}else{
					a=0;
					break;
				}
			}
			    if(a==1){
			    	printf("Co phan tu trong mang ");
				}else if(a==0){
					printf("Khong co phan tu trong mang");
				}
				printf("\n");
				break;
			case 11:
		    printf("Thoat khoi chuong trinh\n");
		    break;
		    default:
		    	printf("Vui long lua chon lai");
			
	}
        
	
}while(choice!=11);
	return 0;
}
