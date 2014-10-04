#include "vec3.h"

int main(int argc, char *argv[]){
    Vec3 a = Vec3(4., 5., 6.);
    Vec3 b = Vec3(1., 2., 3.);

               a.Print("    a =");
               b.Print("    b =");
           (a+b).Print("a + b =");
           (a-b).Print("a - b =");
            (-a).Print("   -a =");
      (a.Unit()).Print("   a^ =");
    (a.Cross(b)).Print("a x b =");
                printf("a . b = %f\n", a.Dot(b));
                printf("||a|| = %f\n", a.Length());

    return 0;
}
