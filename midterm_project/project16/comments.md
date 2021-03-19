---
title: "Review comments on Project 16"
author: "STATS/DATASCI 531, Winter 2021"
output:
  html_document:
    theme: flatly
    toc: yes
---

**Strengths**: This is an original time series analysis pertinent to questions of current national interest.


**Points for consideration**:

1. Perhaps averaging will make the delay signal harder to find. Also, cross-correlations before detrending may make the lag harder to see because of the trend.

2. In the AIC table, ARIMA(5,1,4) is not the lowest AIC.

3. Log-transforming data might help (or, possibly, square root).

4. You could compare different lag relationship models by AIC (or likelihood ratio tests) in a regression with ARMA errors.




