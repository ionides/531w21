/* pomp C snippet file: covSEIR */
/* Time: 2021-04-21 15:28:25.309 -0400 */
/* Salt: 1C2D77907ABF1B1ED8FB24B2 */

#include <pomp.h>
#include <R_ext/Rdynload.h>

 


/* C snippet: 'rinit' */
#define N		(__p[__parindex[0]])
#define Beta		(__p[__parindex[1]])
#define mu_EI		(__p[__parindex[2]])
#define mu_IR		(__p[__parindex[3]])
#define rho		(__p[__parindex[4]])
#define eta		(__p[__parindex[5]])
#define S		(__x[__stateindex[0]])
#define E		(__x[__stateindex[1]])
#define I		(__x[__stateindex[2]])
#define R		(__x[__stateindex[3]])
#define H		(__x[__stateindex[4]])

void __pomp_rinit (double *__x, const double *__p, double t, const int *__stateindex, const int *__parindex, const int *__covindex, const double *__covars)
{
 
  S = nearbyint(eta*N);
  E = 90000;
  I = 66000;
  R = nearbyint((1-eta)*N);
  H = nearbyint((1-eta)*N);
 
}

#undef N
#undef Beta
#undef mu_EI
#undef mu_IR
#undef rho
#undef eta
#undef S
#undef E
#undef I
#undef R
#undef H

/* C snippet: 'step.fn' */
#define N		(__p[__parindex[0]])
#define Beta		(__p[__parindex[1]])
#define mu_EI		(__p[__parindex[2]])
#define mu_IR		(__p[__parindex[3]])
#define rho		(__p[__parindex[4]])
#define eta		(__p[__parindex[5]])
#define S		(__x[__stateindex[0]])
#define E		(__x[__stateindex[1]])
#define I		(__x[__stateindex[2]])
#define R		(__x[__stateindex[3]])
#define H		(__x[__stateindex[4]])

void __pomp_stepfn (double *__x, const double *__p, const int *__stateindex, const int *__parindex, const int *__covindex, const double *__covars, double t, double dt)
{
 
  double dN_SE = rbinom(S,1-exp(-Beta*I/N*dt));
  double dN_EI = rbinom(E,1-exp(-mu_EI*dt));
  double dN_IR = rbinom(I,1-exp(-mu_IR*dt));
  S -= dN_SE;
  E += dN_SE - dN_EI;
  I += dN_EI - dN_IR;
  R += dN_IR;
  H += dN_IR;
 
}

#undef N
#undef Beta
#undef mu_EI
#undef mu_IR
#undef rho
#undef eta
#undef S
#undef E
#undef I
#undef R
#undef H

/* C snippet: 'rmeasure' */
#define N		(__p[__parindex[0]])
#define Beta		(__p[__parindex[1]])
#define mu_EI		(__p[__parindex[2]])
#define mu_IR		(__p[__parindex[3]])
#define rho		(__p[__parindex[4]])
#define eta		(__p[__parindex[5]])
#define S		(__x[__stateindex[0]])
#define E		(__x[__stateindex[1]])
#define I		(__x[__stateindex[2]])
#define R		(__x[__stateindex[3]])
#define H		(__x[__stateindex[4]])
#define reports		(__y[__obsindex[0]])

void __pomp_rmeasure (double *__y, const double *__x, const double *__p, const int *__obsindex, const int *__stateindex, const int *__parindex, const int *__covindex, const double *__covars, double t)
{
 
  reports = rbinom(H,rho);
 
}

#undef N
#undef Beta
#undef mu_EI
#undef mu_IR
#undef rho
#undef eta
#undef S
#undef E
#undef I
#undef R
#undef H
#undef reports

/* C snippet: 'dmeasure' */
#define N		(__p[__parindex[0]])
#define Beta		(__p[__parindex[1]])
#define mu_EI		(__p[__parindex[2]])
#define mu_IR		(__p[__parindex[3]])
#define rho		(__p[__parindex[4]])
#define eta		(__p[__parindex[5]])
#define S		(__x[__stateindex[0]])
#define E		(__x[__stateindex[1]])
#define I		(__x[__stateindex[2]])
#define R		(__x[__stateindex[3]])
#define H		(__x[__stateindex[4]])
#define reports		(__y[__obsindex[0]])
#define lik		(__lik[0])

void __pomp_dmeasure (double *__lik, const double *__y, const double *__x, const double *__p, int give_log, const int *__obsindex, const int *__stateindex, const int *__parindex, const int *__covindex, const double *__covars, double t)
{
 
  lik = dbinom(reports,H,rho,give_log);
 
}

#undef N
#undef Beta
#undef mu_EI
#undef mu_IR
#undef rho
#undef eta
#undef S
#undef E
#undef I
#undef R
#undef H
#undef reports
#undef lik

/* C snippet: 'toEst' */
#define N		(__p[__parindex[0]])
#define Beta		(__p[__parindex[1]])
#define mu_EI		(__p[__parindex[2]])
#define mu_IR		(__p[__parindex[3]])
#define rho		(__p[__parindex[4]])
#define eta		(__p[__parindex[5]])
#define T_N		(__pt[__parindex[0]])
#define T_Beta		(__pt[__parindex[1]])
#define T_mu_EI		(__pt[__parindex[2]])
#define T_mu_IR		(__pt[__parindex[3]])
#define T_rho		(__pt[__parindex[4]])
#define T_eta		(__pt[__parindex[5]])

void __pomp_to_trans (double *__pt, const double *__p, const int *__parindex)
{
 	T_Beta = logit(Beta);
	T_mu_EI = logit(mu_EI);
	T_mu_IR = logit(mu_IR); 
}

#undef N
#undef Beta
#undef mu_EI
#undef mu_IR
#undef rho
#undef eta
#undef T_N
#undef T_Beta
#undef T_mu_EI
#undef T_mu_IR
#undef T_rho
#undef T_eta

/* C snippet: 'fromEst' */
#define N		(__p[__parindex[0]])
#define Beta		(__p[__parindex[1]])
#define mu_EI		(__p[__parindex[2]])
#define mu_IR		(__p[__parindex[3]])
#define rho		(__p[__parindex[4]])
#define eta		(__p[__parindex[5]])
#define T_N		(__pt[__parindex[0]])
#define T_Beta		(__pt[__parindex[1]])
#define T_mu_EI		(__pt[__parindex[2]])
#define T_mu_IR		(__pt[__parindex[3]])
#define T_rho		(__pt[__parindex[4]])
#define T_eta		(__pt[__parindex[5]])

void __pomp_from_trans (double *__p, const double *__pt, const int *__parindex)
{
 	Beta = expit(T_Beta);
	mu_EI = expit(T_mu_EI);
	mu_IR = expit(T_mu_IR); 
}

#undef N
#undef Beta
#undef mu_EI
#undef mu_IR
#undef rho
#undef eta
#undef T_N
#undef T_Beta
#undef T_mu_EI
#undef T_mu_IR
#undef T_rho
#undef T_eta

static int __pomp_load_stack = 0;

void __pomp_load_stack_incr (void) {++__pomp_load_stack;}

void __pomp_load_stack_decr (int *val) {*val = --__pomp_load_stack;}

void R_init_covSEIR (DllInfo *info)
{
R_RegisterCCallable("covSEIR", "__pomp_load_stack_incr", (DL_FUNC) __pomp_load_stack_incr);
R_RegisterCCallable("covSEIR", "__pomp_load_stack_decr", (DL_FUNC) __pomp_load_stack_decr);
R_RegisterCCallable("covSEIR", "__pomp_rinit", (DL_FUNC) __pomp_rinit);
R_RegisterCCallable("covSEIR", "__pomp_stepfn", (DL_FUNC) __pomp_stepfn);
R_RegisterCCallable("covSEIR", "__pomp_rmeasure", (DL_FUNC) __pomp_rmeasure);
R_RegisterCCallable("covSEIR", "__pomp_dmeasure", (DL_FUNC) __pomp_dmeasure);
R_RegisterCCallable("covSEIR", "__pomp_to_trans", (DL_FUNC) __pomp_to_trans);
R_RegisterCCallable("covSEIR", "__pomp_from_trans", (DL_FUNC) __pomp_from_trans);
}
