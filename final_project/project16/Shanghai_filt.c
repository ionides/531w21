/* pomp C snippet file: Shanghai_filt */
/* Time: 2021-04-21 13:00:29.313 -0400 */
/* Salt: 3CBBD1B26CF62B7E2E09FF4E */

#include <pomp.h>
#include <R_ext/Rdynload.h>

 


/* C snippet: 'rinit' */
#define sigma_nu		(__p[__parindex[0]])
#define mu_h		(__p[__parindex[1]])
#define phi		(__p[__parindex[2]])
#define sigma_eta		(__p[__parindex[3]])
#define G_0		(__p[__parindex[4]])
#define H_0		(__p[__parindex[5]])
#define covaryt		(__covars[__covindex[0]])
#define H		(__x[__stateindex[0]])
#define G		(__x[__stateindex[1]])
#define Y_state		(__x[__stateindex[2]])

void __pomp_rinit (double *__x, const double *__p, double t, const int *__stateindex, const int *__parindex, const int *__covindex, const double *__covars)
{
 
  G = G_0;
  H = H_0;
  Y_state = rnorm( 0,exp(H/2) );
 
}

#undef sigma_nu
#undef mu_h
#undef phi
#undef sigma_eta
#undef G_0
#undef H_0
#undef covaryt
#undef H
#undef G
#undef Y_state

/* C snippet: 'step.fn' */
#define sigma_nu		(__p[__parindex[0]])
#define mu_h		(__p[__parindex[1]])
#define phi		(__p[__parindex[2]])
#define sigma_eta		(__p[__parindex[3]])
#define G_0		(__p[__parindex[4]])
#define H_0		(__p[__parindex[5]])
#define covaryt		(__covars[__covindex[0]])
#define H		(__x[__stateindex[0]])
#define G		(__x[__stateindex[1]])
#define Y_state		(__x[__stateindex[2]])

void __pomp_stepfn (double *__x, const double *__p, const int *__stateindex, const int *__parindex, const int *__covindex, const double *__covars, double t, double dt)
{
 
  double beta,omega,nu;
  omega = rnorm(0,sigma_eta * sqrt( 1- phi*phi ) * 
    sqrt(1-tanh(G)*tanh(G)));
  nu = rnorm(0, sigma_nu);
  G += nu;
  beta = Y_state * sigma_eta * sqrt( 1- phi*phi );
  H = mu_h*(1 - phi) + phi*H + beta * tanh( G ) 
    * exp(-H/2) + omega;
 
  Y_state = covaryt;
  
}

#undef sigma_nu
#undef mu_h
#undef phi
#undef sigma_eta
#undef G_0
#undef H_0
#undef covaryt
#undef H
#undef G
#undef Y_state

/* C snippet: 'rmeasure' */
#define sigma_nu		(__p[__parindex[0]])
#define mu_h		(__p[__parindex[1]])
#define phi		(__p[__parindex[2]])
#define sigma_eta		(__p[__parindex[3]])
#define G_0		(__p[__parindex[4]])
#define H_0		(__p[__parindex[5]])
#define covaryt		(__covars[__covindex[0]])
#define H		(__x[__stateindex[0]])
#define G		(__x[__stateindex[1]])
#define Y_state		(__x[__stateindex[2]])
#define y		(__y[__obsindex[0]])

void __pomp_rmeasure (double *__y, const double *__x, const double *__p, const int *__obsindex, const int *__stateindex, const int *__parindex, const int *__covindex, const double *__covars, double t)
{
 
   y=Y_state;
 
}

#undef sigma_nu
#undef mu_h
#undef phi
#undef sigma_eta
#undef G_0
#undef H_0
#undef covaryt
#undef H
#undef G
#undef Y_state
#undef y

/* C snippet: 'dmeasure' */
#define sigma_nu		(__p[__parindex[0]])
#define mu_h		(__p[__parindex[1]])
#define phi		(__p[__parindex[2]])
#define sigma_eta		(__p[__parindex[3]])
#define G_0		(__p[__parindex[4]])
#define H_0		(__p[__parindex[5]])
#define covaryt		(__covars[__covindex[0]])
#define H		(__x[__stateindex[0]])
#define G		(__x[__stateindex[1]])
#define Y_state		(__x[__stateindex[2]])
#define y		(__y[__obsindex[0]])
#define lik		(__lik[0])

void __pomp_dmeasure (double *__lik, const double *__y, const double *__x, const double *__p, int give_log, const int *__obsindex, const int *__stateindex, const int *__parindex, const int *__covindex, const double *__covars, double t)
{
 
   lik=dnorm(y,0,exp(H/2),give_log);
 
}

#undef sigma_nu
#undef mu_h
#undef phi
#undef sigma_eta
#undef G_0
#undef H_0
#undef covaryt
#undef H
#undef G
#undef Y_state
#undef y
#undef lik

/* C snippet: 'toEst' */
#define covaryt		(__covars[__covindex[0]])
#define sigma_nu		(__p[__parindex[0]])
#define mu_h		(__p[__parindex[1]])
#define phi		(__p[__parindex[2]])
#define sigma_eta		(__p[__parindex[3]])
#define G_0		(__p[__parindex[4]])
#define H_0		(__p[__parindex[5]])
#define T_sigma_nu		(__pt[__parindex[0]])
#define T_mu_h		(__pt[__parindex[1]])
#define T_phi		(__pt[__parindex[2]])
#define T_sigma_eta		(__pt[__parindex[3]])
#define T_G_0		(__pt[__parindex[4]])
#define T_H_0		(__pt[__parindex[5]])

void __pomp_to_trans (double *__pt, const double *__p, const int *__parindex)
{
 	T_sigma_eta = log(sigma_eta);
	T_sigma_nu = log(sigma_nu);
	T_phi = logit(phi); 
}

#undef covaryt
#undef sigma_nu
#undef mu_h
#undef phi
#undef sigma_eta
#undef G_0
#undef H_0
#undef T_sigma_nu
#undef T_mu_h
#undef T_phi
#undef T_sigma_eta
#undef T_G_0
#undef T_H_0

/* C snippet: 'fromEst' */
#define covaryt		(__covars[__covindex[0]])
#define sigma_nu		(__p[__parindex[0]])
#define mu_h		(__p[__parindex[1]])
#define phi		(__p[__parindex[2]])
#define sigma_eta		(__p[__parindex[3]])
#define G_0		(__p[__parindex[4]])
#define H_0		(__p[__parindex[5]])
#define T_sigma_nu		(__pt[__parindex[0]])
#define T_mu_h		(__pt[__parindex[1]])
#define T_phi		(__pt[__parindex[2]])
#define T_sigma_eta		(__pt[__parindex[3]])
#define T_G_0		(__pt[__parindex[4]])
#define T_H_0		(__pt[__parindex[5]])

void __pomp_from_trans (double *__p, const double *__pt, const int *__parindex)
{
 	sigma_eta = exp(T_sigma_eta);
	sigma_nu = exp(T_sigma_nu);
	phi = expit(T_phi); 
}

#undef covaryt
#undef sigma_nu
#undef mu_h
#undef phi
#undef sigma_eta
#undef G_0
#undef H_0
#undef T_sigma_nu
#undef T_mu_h
#undef T_phi
#undef T_sigma_eta
#undef T_G_0
#undef T_H_0

static int __pomp_load_stack = 0;

void __pomp_load_stack_incr (void) {++__pomp_load_stack;}

void __pomp_load_stack_decr (int *val) {*val = --__pomp_load_stack;}

void R_init_Shanghai_filt (DllInfo *info)
{
R_RegisterCCallable("Shanghai_filt", "__pomp_load_stack_incr", (DL_FUNC) __pomp_load_stack_incr);
R_RegisterCCallable("Shanghai_filt", "__pomp_load_stack_decr", (DL_FUNC) __pomp_load_stack_decr);
R_RegisterCCallable("Shanghai_filt", "__pomp_rinit", (DL_FUNC) __pomp_rinit);
R_RegisterCCallable("Shanghai_filt", "__pomp_stepfn", (DL_FUNC) __pomp_stepfn);
R_RegisterCCallable("Shanghai_filt", "__pomp_rmeasure", (DL_FUNC) __pomp_rmeasure);
R_RegisterCCallable("Shanghai_filt", "__pomp_dmeasure", (DL_FUNC) __pomp_dmeasure);
R_RegisterCCallable("Shanghai_filt", "__pomp_to_trans", (DL_FUNC) __pomp_to_trans);
R_RegisterCCallable("Shanghai_filt", "__pomp_from_trans", (DL_FUNC) __pomp_from_trans);
}
