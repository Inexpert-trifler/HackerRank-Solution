#include <stdio.h>
 #include <stdio.h>

int main() {
    int a,b,c,d,e,f,g,h,i,j;
    scanf("%d %d %d %d %d %d %d %d %d %d",
          &a,&b,&c,&d,&e,&f,&g,&h,&i,&j);

    int A1,add1;
    int A2,add2;
    int A3,add3;

    scanf("%d %d",&A1,&add1);
    scanf("%d %d",&A2,&add2);
    scanf("%d %d",&A3,&add3);


    if(A1 == 0) { a = a + add1; 
                 if(a >= 10) a -= 10; }
    else if(A1 == 1) { b = b + add1; 
                      if(b >= 10) b -= 10; }
    else if(A1 == 2) { c = c + add1; 
                      if(c >= 10) c -= 10; }
    else if(A1 == 3) { d = d + add1; 
                      if(d >= 10) d -= 10; }
    else if(A1 == 4) { e = e + add1; 
                      if(e >= 10) e -= 10; }
    else if(A1 == 5) { f = f + add1;
                      if(f >= 10) f -= 10; }
    else if(A1 == 6) { g = g + add1;
                      if(g >= 10) g -= 10; }
    else if(A1 == 7) { h = h + add1;
                      if(h >= 10) h -= 10; }
    else if(A1 == 8) { i = i + add1;
                      if(i >= 10) i -= 10; }
    else if(A1 == 9) { j = j + add1;
                      if(j >= 10) j -= 10; }


    if(A2 == 0) { a = a + add2; 
                 if(a >= 10) a -= 10; }
    else if(A2 == 1) { b = b + add2;
                      if(b >= 10) b -= 10; }
    else if(A2 == 2) { c = c + add2;
                      if(c >= 10) c -= 10; }
    else if(A2 == 3) { d = d + add2;
                      if(d >= 10) d -= 10; }
    else if(A2 == 4) { e = e + add2;
                      if(e >= 10) e -= 10; }
    else if(A2 == 5) { f = f + add2;
                      if(f >= 10) f -= 10; }
    else if(A2 == 6) { g = g + add2;
                      if(g >= 10) g -= 10; }
    else if(A2 == 7) { h = h + add2;
                      if(h >= 10) h -= 10; }
    else if(A2 == 8) { i = i + add2;
                      if(i >= 10) i -= 10; }
    else if(A2 == 9) { j = j + add2;
                      if(j >= 10) j -= 10; }


    if(A3 == 0) { a = a + add3; if(a >= 10) a -= 10; }
    else if(A3 == 1) { b = b + add3; 
                      if(b >= 10) b -= 10; }
    else if(A3 == 2) { c = c + add3; 
                      if(c >= 10) c -= 10; }
    else if(A3 == 3) { d = d + add3; 
                      if(d >= 10) d -= 10; }
    else if(A3 == 4) { e = e + add3; 
                      if(e >= 10) e -= 10; }
    else if(A3 == 5) { f = f + add3; 
                      if(f >= 10) f -= 10; }
    else if(A3 == 6) { g = g + add3; 
                      if(g >= 10) g -= 10; }
    else if(A3 == 7) { h = h + add3;
                      if(h >= 10) h -= 10; }
    else if(A3 == 8) { i = i + add3; 
                      if(i >= 10) i -= 10; }
    else if(A3 == 9) { j = j + add3;
                      if(j >= 10) j -= 10; }

    printf("%d %d %d %d %d %d %d %d %d %d",
           a,b,c,d,e,f,g,h,i,j);

    return 0;
}
//If-Else_Money Heist