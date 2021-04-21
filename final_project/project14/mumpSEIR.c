/* pomp C snippet file: mumpSEIR */
/* Time: 2021-04-20 23:31:54.130 +0800 */
/* Salt: CAFD6BF0AD69BC043801BE27 */

#include <C:/Users/86151/Documents/R/win-library/4.0/pomp/include/pomp.h>
#include <R_ext/Rdynload.h>

 


/* C snippet: 'rinit' */
#define b1		(__p[__parindex[0]])
#define b2		(__p[__parindex[1]])
#define Phi		(__p[__parindex[2]])
#define mu_EI		(__p[__parindex[3]])
#define mu_IR		(__p[__parindex[4]])
#define eta		(__p[__parindex[5]])
#define rho		(__p[__parindex[6]])
#define N		(__p[__parindex[7]])
#define S		(__x[__stateindex[0]])
#define E		(__x[__stateindex[1]])
#define I		(__x[__stateindex[2]])
#define H		(__x[__stateindex[3]])

void __pomp_rinit (double *__x, const double *__p, double t, const int *__stateindex, const int *__parindex, const int *__covindex, const double *__covars)
{
 
S = nearbyint(eta*N);
E = 20;
I = 10;
H = 0;
 
}

#undef b1
#undef b2
#undef Phi
#undef mu_EI
#undef mu_IR
#undef eta
#undef rho
#undef N
#undef S
#undef E
#undef I
#undef H

/* C snippet: 'step.fn' */
#define b1		(__p[__parindex[0]])
#define b2		(__p[__parindex[1]])
#define Phi		(__p[__parindex[2]])
#define mu_EI		(__p[__parindex[3]])
#define mu_IR		(__p[__parindex[4]])
#define eta		(__p[__parindex[5]])
#define rho		(__p[__parindex[6]])
#define N		(__p[__parindex[7]])
#define S		(__x[__stateindex[0]])
#define E		(__x[__stateindex[1]])
#define I		(__x[__stateindex[2]])
#define H		(__x[__stateindex[3]])

void __pomp_stepfn (double *__x, const double *__p, const int *__stateindex, const int *__parindex, const int *__covindex, const double *__covars, double t, double dt)
{
 
double Beta;
Beta = exp(b1 + b2 * cos(M_2PI/52*t - Phi));
double dN_SE = rbinom(S, 1-exp(-Beta*I/N*dt));
double dN_EI = rbinom(E, 1-exp(-mu_EI*dt));
double dN_IR = rbinom(I, 1-exp(-mu_IR*dt));
S -= dN_SE;
E += dN_SE - dN_EI;
I += dN_EI - dN_IR;
H += dN_IR;
 
}

#undef b1
#undef b2
#undef Phi
#undef mu_EI
#undef mu_IR
#undef eta
#undef rho
#undef N
#undef S
#undef E
#undef I
#undef H

/* C snippet: 'rmeasure' */
#define b1		(__p[__parindex[0]])
#define b2		(__p[__parindex[1]])
#define Phi		(__p[__parindex[2]])
#define mu_EI		(__p[__parindex[3]])
#define mu_IR		(__p[__parindex[4]])
#define eta		(__p[__parindex[5]])
#define rho		(__p[__parindex[6]])
#define N		(__p[__parindex[7]])
#define S		(__x[__stateindex[0]])
#define E		(__x[__stateindex[1]])
#define I		(__x[__stateindex[2]])
#define H		(__x[__stateindex[3]])
#define cases		(__y[__obsindex[0]])

void __pomp_rmeasure (double *__y, const double *__x, const double *__p, const int *__obsindex, const int *__stateindex, const int *__parindex, const int *__covindex, const double *__covars, double t)
{
 
cases = rnbinom(H, rho);
 
}

#undef b1
#undef b2
#undef Phi
#undef mu_EI
#undef mu_IR
#undef eta
#undef rho
#undef N
#undef S
#undef E
#undef I
#undef H
#undef cases

/* C snippet: 'dmeasure' */
#define b1		(__p[__parindex[0]])
#define b2		(__p[__parindex[1]])
#define Phi		(__p[__parindex[2]])
#define mu_EI		(__p[__parindex[3]])
#define mu_IR		(__p[__parindex[4]])
#define eta		(__p[__parindex[5]])
#define rho		(__p[__parindex[6]])
#define N		(__p[__parindex[7]])
#define S		(__x[__stateindex[0]])
#define E		(__x[__stateindex[1]])
#define I		(__x[__stateindex[2]])
#define H		(__x[__stateindex[3]])
#define cases		(__y[__obsindex[0]])
#define lik		(__lik[0])

void __pomp_dmeasure (double *__lik, const double *__y, const double *__x, const double *__p, int give_log, const int *__obsindex, const int *__stateindex, const int *__parindex, const int *__covindex, const double *__covars, double t)
{
 
lik = dnbinom(cases, H, rho, give_log);
 
}

#undef b1
#undef b2
#undef Phi
#undef mu_EI
#undef mu_IR
#undef eta
#undef rho
#undef N
#undef S
#undef E
#undef I
#undef H
#undef cases
#undef lik

/* C snippet: 'toEst' */
#define b1		(__p[__parindex[0]])
#define b2		(__p[__parindex[1]])
#define Phi		(__p[__parindex[2]])
#define mu_EI		(__p[__parindex[3]])
#define mu_IR		(__p[__parindex[4]])
#define eta		(__p[__parindex[5]])
#define rho		(__p[__parindex[6]])
#define N		(__p[__parindex[7]])
#define T_b1		(__pt[__parindex[0]])
#define T_b2		(__pt[__parindex[1]])
#define T_Phi		(__pt[__parindex[2]])
#define T_mu_EI		(__pt[__parindex[3]])
#define T_mu_IR		(__pt[__parindex[4]])
#define T_eta		(__pt[__parindex[5]])
#define T_rho		(__pt[__parindex[6]])
#define T_N		(__pt[__parindex[7]])

void __pomp_to_trans (double *__pt, const double *__p, const int *__parindex)
{
 	T_rho = logit(rho);
	T_eta = logit(eta); 
}

#undef b1
#undef b2
#undef Phi
#undef mu_EI
#undef mu_IR
#undef eta
#undef rho
#undef N
#undef T_b1
#undef T_b2
#undef T_Phi
#undef T_mu_EI
#undef T_mu_IR
#undef T_eta
#undef T_rho
#undef T_N

/* C snippet: 'fromEst' */
#define b1		(__p[__parindex[0]])
#define b2		(__p[__parindex[1]])
#define Phi		(__p[__parindex[2]])
#define mu_EI		(__p[__parindex[3]])
#define mu_IR		(__p[__parindex[4]])
#define eta		(__p[__parindex[5]])
#define rho		(__p[__parindex[6]])
#define N		(__p[__parindex[7]])
#define T_b1		(__pt[__parindex[0]])
#define T_b2		(__pt[__parindex[1]])
#define T_Phi		(__pt[__parindex[2]])
#define T_mu_EI		(__pt[__parindex[3]])
#define T_mu_IR		(__pt[__parindex[4]])
#define T_eta		(__pt[__parindex[5]])
#define T_rho		(__pt[__parindex[6]])
#define T_N		(__pt[__parindex[7]])

void __pomp_from_trans (double *__p, const double *__pt, const int *__parindex)
{
 	rho = expit(T_rho);
	eta = expit(T_eta); 
}

#undef b1
#undef b2
#undef Phi
#undef mu_EI
#undef mu_IR
#undef eta
#undef rho
#undef N
#undef T_b1
#undef T_b2
#undef T_Phi
#undef T_mu_EI
#undef T_mu_IR
#undef T_eta
#undef T_rho
#undef T_N

static int __pomp_load_stack = 0;

void __pomp_load_stack_incr (void) {++__pomp_load_stack;}

void __pomp_load_stack_decr (int *val) {*val = --__pomp_load_stack;}

void R_init_mumpSEIR (DllInfo *info)
{
R_RegisterCCallable("mumpSEIR", "__pomp_load_stack_incr", (DL_FUNC) __pomp_load_stack_incr);
R_RegisterCCallable("mumpSEIR", "__pomp_load_stack_decr", (DL_FUNC) __pomp_load_stack_decr);
R_RegisterCCallable("mumpSEIR", "__pomp_rinit", (DL_FUNC) __pomp_rinit);
R_RegisterCCallable("mumpSEIR", "__pomp_stepfn", (DL_FUNC) __pomp_stepfn);
R_RegisterCCallable("mumpSEIR", "__pomp_rmeasure", (DL_FUNC) __pomp_rmeasure);
R_RegisterCCallable("mumpSEIR", "__pomp_dmeasure", (DL_FUNC) __pomp_dmeasure);
R_RegisterCCallable("mumpSEIR", "__pomp_to_trans", (DL_FUNC) __pomp_to_trans);
R_RegisterCCallable("mumpSEIR", "__pomp_from_trans", (DL_FUNC) __pomp_from_trans);
}
