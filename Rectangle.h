#define Rok "Прямогольник с длиной %g и шириной %g установлен\n"
#define Rdk "Прямогольник с длиной %g и шириной %g удалён\n"
#define Rck "Какую сторону хотите поменять?\n1: Ширину = %g\n2: Длину = %g\n0: Никакую\n"

#define rt(a, b) (a>0 && b>0) ? 1 : 0

template <typename qb>
class Rectangle:
public Quadrangle<qb> {
    public:
        Rectangle();
        Rectangle(qb width, qb height) : Quadrangle<qb>() {
            if (rt(width, height)){
                this->a = height; this->c = width; this->b = height; this->d = width;
                printf(Rok, this->b, this->a);
            } else {
                printf(nk); set();
            }
        }
        ~Rectangle(){
            printf(Rdk, this->b, this->a);
        }
        void set(qb width=0, qb height=0){
            Start: if (rt(width, height)){
                this->a = height; this->b = width; this->c = height; this->d = width;
                printf(Rok, height, width); return;
            }
            printf("Введите длину и ширину прямоугольника:\n");
            scanf("%lf %lf", &width, &height); goto Start;
        }
        void change(){
            int opt = -1; qb i;
            do {
                switch (opt){
                    case 1:
                        printf(nv, "ширины");
                        std::cin >> i;
                        if (rt(i, this->b)){
                                opt = -1; this->a = i; this->c = i;
                        } else printf(nk); break;
                    case 2:
                        printf(nv, "длины");
                        std::cin >> i;
                        if (rt(this->a, i)){
                                opt = -1; this->b = i; this->d = i;
                        } else printf(nk); break;
                    default:
                        printf(Rck, this->a, this->b, this->c, this->d);
                        scanf("%d", &opt); break;
                }
            } while (opt);
        }
        void show(){
            printf("Прямоугольник с шириной %g и длиной %g\n", this->a, this->b);
        }
        double op_rad(){
            return sqrt(this->a*this->a + this->b*this->b)/2;}
        double square(){
            return (this->a*this->b);}
        double perimetr(){
            return (this->a+this->b)*2;}
};