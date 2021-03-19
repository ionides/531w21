---
title: "Review comments on Project 9"
author: "STATS/DATASCI 531, Winter 2021"
output:
  html_document:
    theme: flatly
    toc: yes
---

**Strengths**: An interesting dataset raising challenging and relevant time series questions. A good range of models and methods applied.

**Points for consideration**:

1. Seasonality usually corresponds to an annual cycle. Here, you mean weekly periodicity.

2. A cycle of "about a week" is surprising. Either an economic phenomenon has weekly periodicity or it does not: there is not much reason to suspect an 8 day cycle, for example.

3. We cannot readily use AIC to compare transforms - we have to transform the likelihood appropriately to make it comparable.

4. The final model is large, by the standards of SARIMA modeling, raising the possiblity of numerical issues.

5. You talk about "waving trend" (I'm not sure what that is) and then conclude "there is no trend" but I can't see where that is tested or how it is concluded.

6. The data call for an explanation of how and why PM10 drops so dramaticaly on days 11, 20, 26. Are these rain events?

7. The use of mstl is unclear. What is the periodicity being fitted? A weekly pattern does not look appropriate for the data. It is not clear that this amounts to a hypothesis test for/against periodicity - what is the formal hypothesis?



