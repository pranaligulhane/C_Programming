#include <stdio.h>
int main() {
    int arr[3][3] = {11,22,33,44,55,66,77,88,99};
    printf("arr[1][2] = %d\n",arr[1][2]); //66 array notation
    printf("*(*(arr+1)+2 = %d\n",*(*(arr+1)+2)); //66 pointer notation

     printf("arr[2][2] = %d\n",arr[2][2]); //array notation
    printf("*(*(arr+2)+2) = %d\n",*(*(arr+2)+2));// pointer notation

    printf("arr[0][2] = %d\n",arr[0][2]); //array notation
    printf("*(*(arr+0)+2) = %d\n",*(*(arr+0)+2));// pointer notation


}

// // // #include<stdio.h>
// // // #include<string.h>
// // // void main()
// // // {
// // //     char str1[20] = "Sunbeam", str2[20] = " Pune";
// // //     printf("%sn", strcpy(str2, strcat(str1, 1+str2)));
// // // }

// // #include<stdio.h>
// // #include<string.h>
// // int main(void)
// // {
// // 	char str[] = "C_PROG";
// // 	//*(str+2) = '\0';
// // 	printf("size = %u length=%u\n",sizeof(str),strlen(str));
// // 	return 0;
// // }

// #include<stdio.h>
// #include<string.h>
// int main()
// {

// }
