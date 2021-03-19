---
title: "Review comments on Project 13"
author: "STATS/DATASCI 531, Winter 2021"
output:
  html_document:
    theme: flatly
    toc: yes
---

**Strengths**: Various graphical and analytic techniques used to investigate a time series of antihistamine sales. The main conclusion, that sales are seasonal, may be intuitive but you don't know for sure until you look.

**Points for consideration**:

1. Sec 3. sign error for MA polynomial

2. Considerable space is given to summary statistics, including those of many drugs not focal to the study.

3. To test for trend, much better to do regression with ARMA errors (e.g., using time as a covariate) than a basic least squares regression. Why do you show the latter and not the former?

4. It seems hard to tell that the SARMA(1,1)x(1,0) simulation [incorrectly called SARMA(1,1)] fits better than ARMA. Making simulations is worthwhile, but using them to assess fit is difficult.

5. AIC for SARMA is not better than ARMA. What does this show? 

6. Sometimes, a time plot for one year that superimposes seasonal cycles after detrending can help to visualize seasonality.



