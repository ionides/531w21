---
title: "Review comments on Project 9"
author: "STATS/DATASCI 531, Winter 2021"
output:
  html_document:
    theme: flatly
    toc: yes
---

**Strengths**: This project grapples with the task of understanding COVID transition dynamics, focusing on UT. SIR models are fitted both using a stochastic POMP representation (via pomp) and an ordinary differential equation representation (via a least squares fit using the R package ode).

**Points for consideration**:

1. Basic SIR/SEIR models with fixed parameters simply cannot explain the multiple peaks observed in the pandemic. Rather than looking for different ways to fit an inadequate model, one could work on improving the model. Varying tranmission rates (e.g., to  model varying social distancing mandates) would be one way to start on that. Modeling multiple COVID waves is not easy: see Projects 13 and 15 for successful approaches.

2. $\beta$ and $\gamma$ parameters are mentioned at some point, but not defined.

3. The plot of "recovered" exactly matches "new cases". Something strange may be going on. The project does not explain how "recovered" is defined.

4. For the ODE analysis, the fitted cumulative incidence is not increasing. Clearly, there is some error.



