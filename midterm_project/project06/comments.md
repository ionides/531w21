---
title: "Review comments on Project 6"
author: "STATS/DATASCI 531, Winter 2021"
output:
  html_document:
    theme: flatly
    toc: yes
---

**Strengths**: The project sets a suitable goal. However, no clear evidence about trend is drawn - regression with ARMA errors would be an appropriate way to do this.

**Points for consideration**:

1. "Business cycle" does not necessarily have meaning for climate trends. Do you really mean you are looking for an economic cycle effect on climate?

2. Sec 3: terms in MA polynomial should all be positive.

3. Sec 3.1: MA roots are incorrectly calculated for the same sign reason.

4. AIC cannot readily be used to compare levels of differencing, only to compare likelihoods of different models for the same data.

5. Regression with ARMA errors is a better way to test for a trend than just looking at the decomposition. We don't know the chance variation on the decomposition, so we cannot tell if the estimated trend is significantly different from zero. 

6. Reference labels (here, numbers) should be used within the text to signpost where the reference is used.



