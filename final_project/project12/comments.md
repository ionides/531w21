---
title: "Review comments on Project 12"
author: "STATS/DATASCI 531, Winter 2021"
output:
  html_document:
    theme: flatly
    toc: yes
---

**Strengths**: Clearly presented steps in a financial analysis.

**Points for consideration**:

1. The returns are shown in reverse order in the EDA section.
The ARMA model also fits them in reverse order.

2. The returns show substantial negative autocorrelation at lag 1, which is somewhat surprising (inconsistent with the efficient market hypothesis, GARCH models and stochastic volatility models). Is this due to a few outliers? Or is is a robust finding?

3. The initial simulation is much too variable to match the data, but that is just a consequence of the initial guess parameters. Better to present simulations at plausible parameter values, say the MLE.

4. This is a fairly routine analysis, carrying out standard GARCH, ARMA and POMP models and comparing model fit. Good to see, but could be extended to ask questions - about alternative models, or how well the pandemic financial shocks fit (or don't fit) the model assumptions, etc.

5. Follows many previous 531 final projects, and finds similar conclusions. One could target the analysis at a more specific question.

6. The trial simulation for the stochastic volatility model does not take plausible values, compared to the data. This may be fixed after likelihood maximization, but could use checking and discussing.

7. Did the authors look at diagnostic plots to investigate model specification and convergence issues?




