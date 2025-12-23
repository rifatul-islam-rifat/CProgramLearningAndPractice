
 #include <stdio.h>
int find_smallest(int a, int b){

    if(a < b){
        return printf("%d is smallest\n", a);
    } else{
        return printf("%d is smallest\n", b);
    }


}


int main()
{

    // find the smallest number. suppose a = 3; b = 7;

   int values = find_smallest(3, 7);
   printf("%d\n", values);

   return 0;

}