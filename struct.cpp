#include <iostream>

using namespace std;

typedef struct s_number {
	int u_nb;
	int d_nb;
} r_number;

void euclid(int a, int b, int *d)
{
    if (b == 0) {
        *d = a;
    } else
        euclid(b, a % b, d);
}

int task1(r_number nb) {
	if (!nb.d_nb)
		return(0);
	return(1);
}

double task2(r_number nb1, r_number nb2, char c) {
	double rez = 0;

	switch(c) {
		case '+' : rez = ( (nb1.u_nb * nb2.d_nb) + (nb2.u_nb * nb1.d_nb) ) / (nb1.d_nb * nb2.d_nb);	break;
		case '-' : rez = ( (nb1.u_nb * nb2.d_nb) - (nb2.u_nb * nb1.d_nb) ) / (nb1.d_nb * nb2.d_nb);	break;
		case '*' : rez = ( nb1.u_nb * nb2.u_nb ) / ( nb1.d_nb * nb2.d_nb ); break;
		case '/' : rez = ( nb1.u_nb * nb2.d_nb ) / ( nb1.d_nb * nb2.u_nb ); break;
	}

	return(rez);
}

r_number task3(r_number nb) {
	r_number tmp;
	int div = 1;

	euclid(nb.u_nb, nb.d_nb, &div);
	tmp.u_nb = nb.u_nb / div;
	tmp.d_nb = nb.d_nb / div;

	return(tmp);	
}
