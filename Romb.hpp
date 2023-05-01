#define RBok "Ромб со стороной %g и с углом %g создан\n"
#define RBdk "Ромб со стороной %g и с углом %g удалён\n"
#define RBck "Какую сторону хотите поменять?\n1: Стороны = %g\n2: Угол = %g (градусы)\n0: Никакую\n"
#define RBfk "Угол не может быть равен 0\n"

template <typename qb>
class Romb:
public Quadrangle<qb> {
    private:
        qb ang;
    public:
        Romb();
        Romb(qb side, qb angle) : Quadrangle<qb>() {
            if (side>0){
                if (angle){
                    this->a = side; this->c = side; this->b = side; this->d = side;
                    this->ang = angle; printf(RBok, this->a, this->ang);
                } else {
                    printf(RBfk);
                }
            } else {
                printf(nk); set();
            }
        }
        ~Romb(){
            printf(RBdk);
        }
        void set(qb side=0, qb angle=0){
            Start: if (side>0){
                if (angle) {
                    this->a = side; this->c = side; this->b = side; this->d = side;
                    this->ang = deg2rad(angle); printf(RBok, this->a, this->ang); exit (0);
                } else {
                    printf(RBfk);
                }
            }
            printf("Введите сторону ромба и угол (в градусах):\n");
            scanf("%lf %lf", &side, &ang); goto Start;
        }
        void change(){
            int opt = -1; qb i;
            do {
                switch (opt){
                    case 1:
                        printf(nv, "стороны");
                        std::cin >> i;
                        if (i > 0){
                                opt = -1; this->a = i; this->c = i; this->b = i; this->d = i;
                        } else printf(nk); break;
                    case 2:
                        printf(nv, "угла (в градусах)");
                        std::cin >> i;
                        if (i > 0){
                                opt = -1; this->a = deg2rad(this->a);
                        } else printf(nk); break;
                    default:
                        printf(RBck, this->a, this->b, this->c, this->d);
                        scanf("%d", &opt); break;
                }
            } while (opt);
        }
        void show(){
            printf("Ромб со сторонами %g и углом %g \n", this->a, rad2deg(this->ang));
        }
        double square(){
            return (this->a*sin(ang)*this->a*cos(this->ang))/2;
        }
        double perimetr(){
            return (this->a*4);
        }
};