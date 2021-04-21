/* pomp C snippet file: sim1_filt */
/* Time: 2021-04-21 13:00:30.844 -0400 */
/* Salt: D2B5C047644571DBF5330C32 */

#include <pomp.h>
#include <R_ext/Rdynload.h>

 


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

static int __pomp_load_stack = 0;

void __pomp_load_stack_incr (void) {++__pomp_load_stack;}

void __pomp_load_stack_decr (int *val) {*val = --__pomp_load_stack;}

void R_init_sim1_filt (DllInfo *info)
{
R_RegisterCCallable("sim1_filt", "__pomp_load_stack_incr", (DL_FUNC) __pomp_load_stack_incr);
R_RegisterCCallable("sim1_filt", "__pomp_load_stack_decr", (DL_FUNC) __pomp_load_stack_decr);
R_RegisterCCallable("sim1_filt", "__pomp_stepfn", (DL_FUNC) __pomp_stepfn);
}
