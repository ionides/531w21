---
title: "Review comments on Project 15"
author: "STATS/DATASCI 531, Winter 2021"
output:
  html_document:
    theme: flatly
    toc: yes
---

**Strengths**: A well-defined scientific problem, attacked with appropriate statistical methods.

**Points for consideration**:

1. Sec 3.2. $\phi_p$ should be $-\phi_p$ in the AR polynomial.

2. Theoretically, AIC can go down arbitrarily much, but can only increase $\le 2$ when adding a nested parameter.

3. Sec 3.3.1. You say period is about 8 but write SARIMA with period 12; this is just a typo since 8 is used later.

4. Maybe the problem with the test set evaluation is the test set size. If you look at the std error on the estimated RMSE, can you distinguish between the methods?

5. Using the time series to define solar flares makes dependence within this time series equivalent to predictability of solar flares. It is a problem of forecasting extreme values, which is an intesting problem but not covered in this class so requiring special consideration.






