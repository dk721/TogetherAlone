#define Sok "Квадрат со стороной %g создан\n"
#define Sdk "Квадрат со стороной %g удалён\n"
#define Sck "Какую сторону хотите поменять?\n1: Стороны = %g\n0: Никакую\n"

template <typename Type>
class Square:
public Quadrangle<Type> {
    public:
        Square();
        Square(Type side) : Quadrangle<Type>() {
            if (side>0){
                this->a = side; this->c = side; this->b = side; this->d = side;
                printf(Sok, side);
            } else {
                printf(nk); set();
            }
        }
        ~Square(){
            printf(Sdk, this->a);
        }
        void set(Type side=0){
            Start: if (side>0){
                this->a = side; this->c = side; this->b = side; this->d = side;
                printf(Sok, this->a); return;
            }
            printf("Введите сторону квадрата:\n");
            std::cin >> side; goto Start;
        }
        void change(){
            int opt = -1; Type i;
            do {
                switch (opt){
                    case 1:
                        printf(nv, "стороны");
                        std::cin >> i;
                        if (i > 0){
                                opt = -1; this->a = i; this->c = i; this->b = i; this->d = i;
                        } else printf(nk); break;
                    default:
                        printf(Sck, this->a, this->b, this->c, this->d);
                        std::cin >> opt; break;
                }
            } while (opt);
        }
        void show(){
            printf("Квадрат со сторонами %g\n", this->a);
        }
        double square(){
            return (this->a*this->a);
        }
        double perimetr(){
            return (this->a*4);
        }
        double op_rad(){
            return sqrt(this->a*this->a+this->a*this->a)/2;
        }
        double vp_rad(){
            return double(this->a)/2;
        }
};