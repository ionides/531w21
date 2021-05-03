---
title: "Review comments on Project 1"
author: "STATS/DATASCI 531, Winter 2021"
output:
  html_document:
    theme: flatly
    toc: yes
---

**Strengths**: Well-motivated analysis that develops a model for COVID dynamics and demonstrates by simulation that a lockdown orders can explain the Fall 2020 wave in PA. 

**Points for consideration**:

1. "We observe no significant evidence that the ARIMA model performs better than white noise" is an error: The AIC table shows that ARMA(1,1) is a big improvement over white noise, with some small potential advantage from larger models.

2. The authors identify model misspecification as a likely cause of the high variability when numerically evaluating and maximizing the likelihood. In the time allowed, it is hard to resolve such issues. I think the high weekly variability in measurememt (likely not present in the actual transmission dynamics) may be relevant. Also, perhaps the noise modeling in the process and/or measurement model is a misfit.

3. The project's interpretation of model misspecification issues is reasonable. However, a simulation study to test the optimization on simulated data could have confirmed that the inference methodology was working correctly. Modeling COVID is not easy: see Projects 13 & 15 for a successful approach.

4. The initial ACF plots are unpolished: it can be unclear what we learn from an ACF of data with substantial trend, and attention is needed to graph labels.

5. What is the red horizontal line in the log_test_positive_ratio plot?





