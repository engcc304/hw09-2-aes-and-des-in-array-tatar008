/*
    ให้ผู้ใช้กรอกค่าเข้ามาเก็บในอาเรย์ จากนั้นให้ทำการแสดงค่าข้อมูล 2 แบบคือ "เรียงข้อมูลจากมากไปน้อย" และ "เรียงข้อมูลจากน้อยไปมาก"
    
    Test case:
        Input : 
            1
        Input : 
            5
        Input : 
            1
        Input : 
            4
        Input : 
            6
        Input : 
            9
        Input : 
            13
        Input : 
            -1
    Output:
        0-99 : 1 1 4 5 6 9 13
        99-0 : 13 9 6 5 4 1 1

*/
#include<stdio.h>
int main() {
    int arr[100];
    int i = 0 ;
    int j = 0 ;
    while (1) {
        printf( "Input :\n" ) ;
        scanf( "%d", &arr[i] ) ;
        if(arr[i] == -1 ) {
            break;
        }
        i++ ;
    }

    for (int j = 0; j < i - 1; j++) {
        for (int k = 0; k < i - j - 1; k++) {
            if (arr[k] > arr[k + 1]) {
                // สลับค่า
                int temp = arr[k];
                arr[k] = arr[k + 1];
                arr[k + 1] = temp;
            }
        }
    }
    
    printf( "0-99 : ") ;
    for(j = 0; j < i ; j++ ) {
        printf( "%d ", arr[j] ) ;
    }
    printf("\n99-0 : ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d ", arr[j]);
    }
    
    return 0;

}