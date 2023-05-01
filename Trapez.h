#define Tok "Трапеция с нижним основанием %g и верхним основанием %g и боковой стороной %g создана\n"
#define Tdk "Трапеция с нижним основанием %g и верхним основанием %g и боковой стороной %g удалена\n"
#define Tck "Какую сторону хотите поменять?\n1: Нижнее основание = %g\n2: Верхнее основание = %g\n3: Боковые стороны = %g\n0: Никакую\n"

#define Trl(a, b, c) (a < b+c*2 && b < a+c*2) ? 1 : 0
#define Tpl(a, b, c) (a>0 && b>0 && c>0) ? 1 : 0

template <typename qb>
class Trapez:
public Quadrangle<qb> {
    public:
        Trapez();
        Trapez(qb down, qb up, qb side) : Quadrangle<qb>() {
            if (Tpl(down, up, side)){
                if (Trl(down, up, side)){
                    this->a = side; this->b = down; this->c = side; this->d = up;
                    printf(Tok, this->b, this->d, this->a);
                } else {
                    printf(ik); set();
                }
            } else {
                printf(nk); set();
            }
        }
        ~Trapez(){
            printf(Tdk, this->b, this->d, this->a);
        }
        void set(qb down=0, qb up=0, qb side=0){
            Start: if (Tpl(down, up, side)){
                if (Trl(down, up, side)){
                    this->a = side; this->b = down; this->c = side; this->d = up;
                    printf(Tok, this->b, this->d, this->a); return;
                } else {
                    printf(ik);
                }
            }
            printf("Введите нижнее основание, верхнее основание и боквую сторону:\n");
            scanf("%lf %lf %lf", &down, &up, &side);
            goto Start;
        }
        void change(){
            int opt = -1; qb i;
            do {
                switch (opt){
                    case 1:
                        printf(nv, "нижнего основания");
                        std::cin >> i;
                        if (Tpl(i,this->b,this->c)){
                            if (Trl(i,this->b,this->c)){
                                opt = -1; this->b = i;
                            } else printf(ik);
                        } else printf(nk); break;
                    case 2:
                        printf(nv, "верхнего основания");
                        std::cin >> i;
                        if (Tpl(this->a,i,this->c)){
                            if (Trl(this->a,i,this->c)){
                                opt = -1; this->d = i;
                            } else printf(ik);
                        } else printf(nk); break;
                    case 3:
                        printf(nv, "боковых сторон");
                        std::cin >> i;
                        if (Tpl(this->a,this->b,i)){
                            if (Trl(this->a,this->b,i)){
                                opt = -1; this->a = i; this->c = i;
                            } else printf(ik);
                        } else printf(nk); break;
                    default:
                        printf(Tck, this->b, this->d, this->a);
                        scanf("%d", &opt); break;
                }
            } while (opt);
        }
        void show(){
            printf("Трапеция с нижним основанием %g верхним основанием %g и боковыми сторонами %g \n", this->b, this->d, this->a);
        }
        double angle(){
            return acos((abs(this->b-this->d)/2)/this->a);
        }
        double square(){
            return sin(angle())*this->a*((this->b+this->d)/2);
        }
        double perimetr(){
            return (this->a*2 + this->b + this->d);
        }
        double osn(){
            return acos(abs(this->b-this->d)/2/this->a);
        }

};