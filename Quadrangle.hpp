#define deg2rad(a) (1==1) ? (a/M_PI*180) : (a/M_PI*180)
#define rad2deg(a) (1==1) ? (a*M_PI/180) : (a/M_PI*180)
#define rl(a, b, c, d) (a < b+c+d && b < a+c+d && c < a+b+d && d < a+b+c) ? 1 : 0
#define pl(a, b, c, d) (a>0 && b>0 && c>0 && d>0) ? 1 : 0

#define ok "Четырёхугольник со сторонами %g %g %g %g установлен\n"
#define dk "Четырёхугольник со сторонами %g %g %g %g удалён\n"
#define nk "Сторона не может быть меньше или равной 0\n"
#define ik "Одна сторона не может быть больше суммы остальных\n"
#define ck "Какую сторону хотите поменять?\n1: a = %g\n2: b = %g\n3: c = %g\n4: d = %g\n0: Никакую\n"
#define nv "Введите новое значение для %s: "
#define ak "Площадь четырёхугольника варируется от значения его углов, в вывод идёт 0, учитывайте это\n"

template <typename Type>
class Quadrangle {
    protected:
        Type a, b, c, d;
    public:
        Quadrangle(){
            return;
        };
        Quadrangle(Type a, Type b, Type c, Type d){
            if (pl(a, b, c, d)){
                if (rl(a, b, c, d)){
                    this->a = a; this->b = b; this->c = c; this->d = d;
                    printf(ok, a, b, c, d);
                } else {
                    printf(ik); set();
                }
            } else {
                printf(nk); set();
            }
        }
        ~Quadrangle(){
            //printf(dk, a, b, c, d);
            return;
        }
        void set(Type a=0, Type b=0, Type c=0, Type d=0){
            Start: if (pl(a, b, c, d)){
                if (rl(a, b, c, d)){
                    this->a = a; this->b = b; this->c = c; this->d = d;
                    printf(ok, this->a, this->b, this->c, this->d); return;
                } else {
                    printf(ik);
                }}
            printf("Введите стороны четырёхугольника:\n");
            std::cin >> a >> b >> c >> d;

            goto Start;
        }
        void get(Type *a=NULL, Type *b=NULL, Type *c=NULL, Type *d=NULL){
            if (a != NULL) *a = this->a;
            if (b != NULL) *b = this->b;
            if (c != NULL) *c = this->c;
            if (d != NULL) *d = this->d;
        }
        void show(){
            printf("Стороны четырёхугольника: %g %g %g %g\n", this->a, this->b, this->c, this->d);
        }
        void change(){
            int opt = -1; Type i;
            do {
                switch (opt){
                    case 1:
                        printf(nv, "a");
                        std::cin >> i;
                        if (pl(i,b,c,d)){
                            if (rl(i,b,c,d)){
                                opt = -1; a = i;
                            } else printf(ik);
                        } else printf(nk); break;
                    case 2:
                        printf(nv, "b");
                        std::cin >> i;
                        if (pl(a,i,c,d)){
                            if (rl(a,i,c,d)){
                                opt = -1; b = i;
                            } else printf(ik);
                        } else printf(nk); break;
                    case 3:
                        printf(nv, "c");
                        std::cin >> i;
                        if (pl(a,b,i,d)){
                            if (rl(a,b,i,d)){
                                opt = -1; c = i;
                            } else printf(ik);
                        } else printf(nk); break;
                    case 4:
                        printf(nv, "d");
                        std::cin >> i;
                        if (pl(a,b,c,i)){
                            if (rl(a,b,c,i)){
                                opt = -1; d = i;
                            } else printf(ik);
                        } else printf(nk); break;
                    default:
                        printf(ck, a, b, c, d);
                        std::cin >> opt; break;
                }
            } while (opt);
        }
        double perimetr(){
            return (a+b+c+d);}
        double square(){
            printf(ak);
            return (0);}
};
