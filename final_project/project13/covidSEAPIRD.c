/* pomp C snippet file: covidSEAPIRD */
/* Time: 2021-04-20 21:27:13.192 -0400 */
/* Salt: 714DA2C1FEC85092D73D1737 */

#include <C:/Users/isaac/OneDrive/Documents/R/win-library/4.0/pomp/include/pomp.h>
#include <R_ext/Rdynload.h>

 


/* C snippet: 'rinit' */
#define N		(__p[__parindex[0]])
#define Beta		(__p[__parindex[1]])
#define mu_IR		(__p[__parindex[2]])
#define mu_ID		(__p[__parindex[3]])
#define mu_EI		(__p[__parindex[4]])
#define alpha		(__p[__parindex[5]])
#define mu_AR		(__p[__parindex[6]])
#define mu_PI		(__p[__parindex[7]])
#define c_1		(__p[__parindex[8]])
#define c_2		(__p[__parindex[9]])
#define c_3		(__p[__parindex[10]])
#define c_4		(__p[__parindex[11]])
#define c_5		(__p[__parindex[12]])
#define c_6		(__p[__parindex[13]])
#define rho		(__p[__parindex[14]])
#define tau		(__p[__parindex[15]])
#define intervention		(__covars[__covindex[0]])
#define S		(__x[__stateindex[0]])
#define E		(__x[__stateindex[1]])
#define P		(__x[__stateindex[2]])
#define A		(__x[__stateindex[3]])
#define I		(__x[__stateindex[4]])
#define R		(__x[__stateindex[5]])
#define D		(__x[__stateindex[6]])
#define H		(__x[__stateindex[7]])

void __pomp_rinit (double *__x, const double *__p, double t, const int *__stateindex, const int *__parindex, const int *__covindex, const double *__covars)
{
 
  S = N;
  E = 0;
  P = 0;
  A = 0;
  I = 250;
  R = 0;
  D = 0;
  H = 0;
 
}

#undef N
#undef Beta
#undef mu_IR
#undef mu_ID
#undef mu_EI
#undef alpha
#undef mu_AR
#undef mu_PI
#undef c_1
#undef c_2
#undef c_3
#undef c_4
#undef c_5
#undef c_6
#undef rho
#undef tau
#undef intervention
#undef S
#undef E
#undef P
#undef A
#undef I
#undef R
#undef D
#undef H

/* C snippet: 'step.fn' */
#define N		(__p[__parindex[0]])
#define Beta		(__p[__parindex[1]])
#define mu_IR		(__p[__parindex[2]])
#define mu_ID		(__p[__parindex[3]])
#define mu_EI		(__p[__parindex[4]])
#define alpha		(__p[__parindex[5]])
#define mu_AR		(__p[__parindex[6]])
#define mu_PI		(__p[__parindex[7]])
#define c_1		(__p[__parindex[8]])
#define c_2		(__p[__parindex[9]])
#define c_3		(__p[__parindex[10]])
#define c_4		(__p[__parindex[11]])
#define c_5		(__p[__parindex[12]])
#define c_6		(__p[__parindex[13]])
#define rho		(__p[__parindex[14]])
#define tau		(__p[__parindex[15]])
#define intervention		(__covars[__covindex[0]])
#define S		(__x[__stateindex[0]])
#define E		(__x[__stateindex[1]])
#define P		(__x[__stateindex[2]])
#define A		(__x[__stateindex[3]])
#define I		(__x[__stateindex[4]])
#define R		(__x[__stateindex[5]])
#define D		(__x[__stateindex[6]])
#define H		(__x[__stateindex[7]])

void __pomp_stepfn (double *__x, const double *__p, const int *__stateindex, const int *__parindex, const int *__covindex, const double *__covars, double t, double dt)
{
 
    double beta_intervention;
    
    if (intervention == 1){
        beta_intervention = Beta*c_1;
    }
    else if (intervention == 2){
        beta_intervention = Beta*c_2;
    }
    else if (intervention == 3){
       beta_intervention = Beta*c_3;
    }
    else if (intervention == 4){
       beta_intervention = Beta*c_4;
    }
    else if (intervention == 5){
       beta_intervention = Beta*c_5;
       
    }
    else if (intervention == 6){
       beta_intervention = Beta*c_6;
    }
    else beta_intervention = Beta;
    
  double dN_SE = rbinom(S,1-exp(-beta_intervention*(I+P+A)/N*dt));
  double dN_EI = rbinom(E,1-exp(-mu_EI*dt));
  double dN_PI = rbinom(P,1-exp(-mu_PI*dt));
  double dN_IR = rbinom(I,1-exp(-mu_IR*dt));
  double dN_ID = rbinom(I - dN_IR,1-exp(-mu_ID*dt));
  double dN_AR = rbinom(A,1-exp(-mu_AR*dt));
  
  S -= dN_SE;
  E += dN_SE - dN_EI;
  P += nearbyint((1 - alpha) * dN_EI) - dN_PI;
  A += nearbyint(alpha * dN_EI) - dN_AR;
  I += dN_PI - dN_IR - dN_ID;
  R += dN_IR + dN_AR;
  D += dN_ID;
  H += dN_IR + dN_AR;
 
}

#undef N
#undef Beta
#undef mu_IR
#undef mu_ID
#undef mu_EI
#undef alpha
#undef mu_AR
#undef mu_PI
#undef c_1
#undef c_2
#undef c_3
#undef c_4
#undef c_5
#undef c_6
#undef rho
#undef tau
#undef intervention
#undef S
#undef E
#undef P
#undef A
#undef I
#undef R
#undef D
#undef H

/* C snippet: 'rmeasure' */
#define N		(__p[__parindex[0]])
#define Beta		(__p[__parindex[1]])
#define mu_IR		(__p[__parindex[2]])
#define mu_ID		(__p[__parindex[3]])
#define mu_EI		(__p[__parindex[4]])
#define alpha		(__p[__parindex[5]])
#define mu_AR		(__p[__parindex[6]])
#define mu_PI		(__p[__parindex[7]])
#define c_1		(__p[__parindex[8]])
#define c_2		(__p[__parindex[9]])
#define c_3		(__p[__parindex[10]])
#define c_4		(__p[__parindex[11]])
#define c_5		(__p[__parindex[12]])
#define c_6		(__p[__parindex[13]])
#define rho		(__p[__parindex[14]])
#define tau		(__p[__parindex[15]])
#define intervention		(__covars[__covindex[0]])
#define S		(__x[__stateindex[0]])
#define E		(__x[__stateindex[1]])
#define P		(__x[__stateindex[2]])
#define A		(__x[__stateindex[3]])
#define I		(__x[__stateindex[4]])
#define R		(__x[__stateindex[5]])
#define D		(__x[__stateindex[6]])
#define H		(__x[__stateindex[7]])
#define cases		(__y[__obsindex[0]])
#define deaths		(__y[__obsindex[1]])

void __pomp_rmeasure (double *__y, const double *__x, const double *__p, const int *__obsindex, const int *__stateindex, const int *__parindex, const int *__covindex, const double *__covars, double t)
{
 
    double mean_cases = rho*H;
    double sd_cases = sqrt(tau*rho*H*(1-rho)) ;
    cases =  rnorm(mean_cases,sd_cases) + D;
    deaths = D;
    if (cases > 0.0) {
        cases = nearbyint(cases);
      } else {
    cases = 0.0;
    
    if(sd_cases == 0){
    cases = 0.0;
    }
}
 
}

#undef N
#undef Beta
#undef mu_IR
#undef mu_ID
#undef mu_EI
#undef alpha
#undef mu_AR
#undef mu_PI
#undef c_1
#undef c_2
#undef c_3
#undef c_4
#undef c_5
#undef c_6
#undef rho
#undef tau
#undef intervention
#undef S
#undef E
#undef P
#undef A
#undef I
#undef R
#undef D
#undef H
#undef cases
#undef deaths

/* C snippet: 'dmeasure' */
#define N		(__p[__parindex[0]])
#define Beta		(__p[__parindex[1]])
#define mu_IR		(__p[__parindex[2]])
#define mu_ID		(__p[__parindex[3]])
#define mu_EI		(__p[__parindex[4]])
#define alpha		(__p[__parindex[5]])
#define mu_AR		(__p[__parindex[6]])
#define mu_PI		(__p[__parindex[7]])
#define c_1		(__p[__parindex[8]])
#define c_2		(__p[__parindex[9]])
#define c_3		(__p[__parindex[10]])
#define c_4		(__p[__parindex[11]])
#define c_5		(__p[__parindex[12]])
#define c_6		(__p[__parindex[13]])
#define rho		(__p[__parindex[14]])
#define tau		(__p[__parindex[15]])
#define intervention		(__covars[__covindex[0]])
#define S		(__x[__stateindex[0]])
#define E		(__x[__stateindex[1]])
#define P		(__x[__stateindex[2]])
#define A		(__x[__stateindex[3]])
#define I		(__x[__stateindex[4]])
#define R		(__x[__stateindex[5]])
#define D		(__x[__stateindex[6]])
#define H		(__x[__stateindex[7]])
#define cases		(__y[__obsindex[0]])
#define deaths		(__y[__obsindex[1]])
#define lik		(__lik[0])

void __pomp_dmeasure (double *__lik, const double *__y, const double *__x, const double *__p, int give_log, const int *__obsindex, const int *__stateindex, const int *__parindex, const int *__covindex, const double *__covars, double t)
{
 
  double tol = 1.0e-10;
  double mean_cases = rho*H;
  double sd_cases = sqrt(tau*rho*H*(1-rho));
  
  if(sd_cases == 0){
    lik = tol;
  }
  else{
    lik = dnorm(cases-deaths, mean_cases, sd_cases, 0);
  }
  
  if (give_log) lik = log(lik);
   
}

#undef N
#undef Beta
#undef mu_IR
#undef mu_ID
#undef mu_EI
#undef alpha
#undef mu_AR
#undef mu_PI
#undef c_1
#undef c_2
#undef c_3
#undef c_4
#undef c_5
#undef c_6
#undef rho
#undef tau
#undef intervention
#undef S
#undef E
#undef P
#undef A
#undef I
#undef R
#undef D
#undef H
#undef cases
#undef deaths
#undef lik

/* C snippet: 'toEst' */
#define intervention		(__covars[__covindex[0]])
#define N		(__p[__parindex[0]])
#define Beta		(__p[__parindex[1]])
#define mu_IR		(__p[__parindex[2]])
#define mu_ID		(__p[__parindex[3]])
#define mu_EI		(__p[__parindex[4]])
#define alpha		(__p[__parindex[5]])
#define mu_AR		(__p[__parindex[6]])
#define mu_PI		(__p[__parindex[7]])
#define c_1		(__p[__parindex[8]])
#define c_2		(__p[__parindex[9]])
#define c_3		(__p[__parindex[10]])
#define c_4		(__p[__parindex[11]])
#define c_5		(__p[__parindex[12]])
#define c_6		(__p[__parindex[13]])
#define rho		(__p[__parindex[14]])
#define tau		(__p[__parindex[15]])
#define T_N		(__pt[__parindex[0]])
#define T_Beta		(__pt[__parindex[1]])
#define T_mu_IR		(__pt[__parindex[2]])
#define T_mu_ID		(__pt[__parindex[3]])
#define T_mu_EI		(__pt[__parindex[4]])
#define T_alpha		(__pt[__parindex[5]])
#define T_mu_AR		(__pt[__parindex[6]])
#define T_mu_PI		(__pt[__parindex[7]])
#define T_c_1		(__pt[__parindex[8]])
#define T_c_2		(__pt[__parindex[9]])
#define T_c_3		(__pt[__parindex[10]])
#define T_c_4		(__pt[__parindex[11]])
#define T_c_5		(__pt[__parindex[12]])
#define T_c_6		(__pt[__parindex[13]])
#define T_rho		(__pt[__parindex[14]])
#define T_tau		(__pt[__parindex[15]])

void __pomp_to_trans (double *__pt, const double *__p, const int *__parindex)
{
 	T_Beta = log(Beta);
	T_c_1 = log(c_1);
	T_c_2 = log(c_2);
	T_c_3 = log(c_3);
	T_c_4 = log(c_4);
	T_c_5 = log(c_5);
	T_c_6 = log(c_6);
	T_mu_AR = log(mu_AR);
	T_mu_IR = log(mu_IR);
	T_mu_ID = log(mu_ID);
	T_mu_PI = log(mu_PI);
	T_mu_EI = log(mu_EI);
	T_tau = log(tau);
	T_rho = logit(rho);
	T_alpha = logit(alpha); 
}

#undef intervention
#undef N
#undef Beta
#undef mu_IR
#undef mu_ID
#undef mu_EI
#undef alpha
#undef mu_AR
#undef mu_PI
#undef c_1
#undef c_2
#undef c_3
#undef c_4
#undef c_5
#undef c_6
#undef rho
#undef tau
#undef T_N
#undef T_Beta
#undef T_mu_IR
#undef T_mu_ID
#undef T_mu_EI
#undef T_alpha
#undef T_mu_AR
#undef T_mu_PI
#undef T_c_1
#undef T_c_2
#undef T_c_3
#undef T_c_4
#undef T_c_5
#undef T_c_6
#undef T_rho
#undef T_tau

/* C snippet: 'fromEst' */
#define intervention		(__covars[__covindex[0]])
#define N		(__p[__parindex[0]])
#define Beta		(__p[__parindex[1]])
#define mu_IR		(__p[__parindex[2]])
#define mu_ID		(__p[__parindex[3]])
#define mu_EI		(__p[__parindex[4]])
#define alpha		(__p[__parindex[5]])
#define mu_AR		(__p[__parindex[6]])
#define mu_PI		(__p[__parindex[7]])
#define c_1		(__p[__parindex[8]])
#define c_2		(__p[__parindex[9]])
#define c_3		(__p[__parindex[10]])
#define c_4		(__p[__parindex[11]])
#define c_5		(__p[__parindex[12]])
#define c_6		(__p[__parindex[13]])
#define rho		(__p[__parindex[14]])
#define tau		(__p[__parindex[15]])
#define T_N		(__pt[__parindex[0]])
#define T_Beta		(__pt[__parindex[1]])
#define T_mu_IR		(__pt[__parindex[2]])
#define T_mu_ID		(__pt[__parindex[3]])
#define T_mu_EI		(__pt[__parindex[4]])
#define T_alpha		(__pt[__parindex[5]])
#define T_mu_AR		(__pt[__parindex[6]])
#define T_mu_PI		(__pt[__parindex[7]])
#define T_c_1		(__pt[__parindex[8]])
#define T_c_2		(__pt[__parindex[9]])
#define T_c_3		(__pt[__parindex[10]])
#define T_c_4		(__pt[__parindex[11]])
#define T_c_5		(__pt[__parindex[12]])
#define T_c_6		(__pt[__parindex[13]])
#define T_rho		(__pt[__parindex[14]])
#define T_tau		(__pt[__parindex[15]])

void __pomp_from_trans (double *__p, const double *__pt, const int *__parindex)
{
 	Beta = exp(T_Beta);
	c_1 = exp(T_c_1);
	c_2 = exp(T_c_2);
	c_3 = exp(T_c_3);
	c_4 = exp(T_c_4);
	c_5 = exp(T_c_5);
	c_6 = exp(T_c_6);
	mu_AR = exp(T_mu_AR);
	mu_IR = exp(T_mu_IR);
	mu_ID = exp(T_mu_ID);
	mu_PI = exp(T_mu_PI);
	mu_EI = exp(T_mu_EI);
	tau = exp(T_tau);
	rho = expit(T_rho);
	alpha = expit(T_alpha); 
}

#undef intervention
#undef N
#undef Beta
#undef mu_IR
#undef mu_ID
#undef mu_EI
#undef alpha
#undef mu_AR
#undef mu_PI
#undef c_1
#undef c_2
#undef c_3
#undef c_4
#undef c_5
#undef c_6
#undef rho
#undef tau
#undef T_N
#undef T_Beta
#undef T_mu_IR
#undef T_mu_ID
#undef T_mu_EI
#undef T_alpha
#undef T_mu_AR
#undef T_mu_PI
#undef T_c_1
#undef T_c_2
#undef T_c_3
#undef T_c_4
#undef T_c_5
#undef T_c_6
#undef T_rho
#undef T_tau

static int __pomp_load_stack = 0;

void __pomp_load_stack_incr (void) {++__pomp_load_stack;}

void __pomp_load_stack_decr (int *val) {*val = --__pomp_load_stack;}

void R_init_covidSEAPIRD (DllInfo *info)
{
R_RegisterCCallable("covidSEAPIRD", "__pomp_load_stack_incr", (DL_FUNC) __pomp_load_stack_incr);
R_RegisterCCallable("covidSEAPIRD", "__pomp_load_stack_decr", (DL_FUNC) __pomp_load_stack_decr);
R_RegisterCCallable("covidSEAPIRD", "__pomp_rinit", (DL_FUNC) __pomp_rinit);
R_RegisterCCallable("covidSEAPIRD", "__pomp_stepfn", (DL_FUNC) __pomp_stepfn);
R_RegisterCCallable("covidSEAPIRD", "__pomp_rmeasure", (DL_FUNC) __pomp_rmeasure);
R_RegisterCCallable("covidSEAPIRD", "__pomp_dmeasure", (DL_FUNC) __pomp_dmeasure);
R_RegisterCCallable("covidSEAPIRD", "__pomp_to_trans", (DL_FUNC) __pomp_to_trans);
R_RegisterCCallable("covidSEAPIRD", "__pomp_from_trans", (DL_FUNC) __pomp_from_trans);
}
