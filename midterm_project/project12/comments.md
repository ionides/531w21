---
title: "Review comments on Project 12"
author: "STATS/DATASCI 531, Winter 2021"
output:
  html_document:
    theme: flatly
    toc: yes
---

**Strengths**: Clear motivation. Covariate time series could be useful for directing the time series analysis toward the analysis goals.

**Points for consideration**:

1. Test for normality after detrending/deseasonalizing. The distribution of residuals is typically of more modeling concern than that of the raw data.

2. Typos:
    + $\epsilon\in$ should be $\epsilon\sim$
    + $\psi_p$ should be $\psi_q$.

3. Taking logs cannot make a process stationary.

4. AIC cannot readily be used to compare differencing - just to compare different models for the same data. 

5. Missing statement on contributions within the group, requested in the project description.



