---
title: "Review comments on Project 1"
author: "STATS/DATASCI 531, Winter 2021"
output:
  html_document:
    theme: flatly
    toc: yes
---

**Strengths**: A coherent project, trying out many techniques from the class and some from independent study. Good use of group work to try multiple approaches; perhaps more collective time could have been spend critically editing the combined work.

**Points for consideration**:

1. A series that has occasional periods different from others is best described as showing non-stationary behavior.

2. ARIMA(5,1,4) is a big model. There is evidence of numerical instability in your results - how do you take this into account? Among other things, the Fisher CIs produced by R may work badly.

3. ACF plot interpretation: only high at lag 0.

4. ARFIMA model is defined only by reference.

5. For looking at trend, maybe look for mean after differencing. Modeling the non-stationary (un-differenced) data using stationary models could cause problems.

6. Does non-normality affects conclusions for ARIMA? Maybe a CLT applies?

7. Could plot ACF of absolute log difference.

8. More text and less code would be better.

9. First graph: x-axis label should have units of years.



