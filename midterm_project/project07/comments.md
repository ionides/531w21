---
title: "Review comments on Project 7"
author: "STATS/DATASCI 531, Winter 2021"
output:
  html_document:
    theme: flatly
    toc: yes
---

**Strengths**: Many models and methods carried out, and written up with a good balance of text explanation, equations, figures, and tables.

**Points for consideration**:

1. This decomposition as trend+noise+cycle uses both "trend" and "cycle" to describe seasonality - this is quite different from the situation where that analysis was intended.

2. Augmented Dickey-Fuller test is not described. Extra care is needed using methods not taught in class.

3. ACF values inside dashed line supports a white noise hypothesis, not stationarity. Here, white noise is rejected at lags 1-3.

4. Simulation does not assess consequences of heavy tails, unless the simulation has heavy tails.

5. Axis labels not always edited for clarity

6. Removing seasonality to look for high-frequency associations is apppropriate - otherwise you just obtain seasonal correlations. Climatologists call this deseasonalized value the *anomaly*. It is useful for conclusions to have some way of saying you are no longer considering the original quantity.

7. Reference labels (here, numbers) should be used within the text to signpost where the reference is used.



