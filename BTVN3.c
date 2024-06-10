#include <stdio.h>

int main() {
  int option;

  printf("*---------Chao mung ban den voi game thuc te ao MENU---------*\n");
  printf("1. Nhap ten va ngay sinh cua nguoi choi\n");
  printf("2. Kiem tra so chan va so le\n");
  printf("3. Exit\n");

  printf("Nhap vao lua chon: ");
  scanf("%d", &option);

  switch (option) {
    case 1: {
      char ten[20];
      int ngay, thang, nam;

      printf("Nhap ten cua nguoi choi: ");
      scanf("%s", ten);

      printf("Nhap ngay sinh (dd/MM/yy): ");
      scanf("%d/%d/%d", &ngay, &thang, &nam);

      printf("Hello %s, Ban giang xuong tran gian vao ngay %d/%d/%d\n", ten, ngay, thang, nam);
      break;
    }
    case 2: {
      int n;

      printf("Nhap vao 1 so: ");
      scanf("%d", &n);

      if (n % 2 == 0) {
        printf("%d la so chan\n", n);
      } else {
        printf("%d la so le\n", n);
      }
      break;
    }
    case 3: {
      printf("Dang dang xuat khoi the gioi MENU...\n");
      break;
    }
    default: {
      printf("Lua chon khong hop le, vui long nhap lai. Neu nhap sai qua 3 lan ban se bi he thong trung phat\n");
    }
  }

  return 0;
}
