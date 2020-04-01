typedef double(*RRFUN)(double x);
double simpson(RRFUN function, double a, double b, int n);
double integrate(RRFUN function, double a, double b, double epsilon);
