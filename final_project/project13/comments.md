---
title: "Review comments on Project 13"
author: "STATS/DATASCI 531, Winter 2021"
output:
  html_document:
    theme: flatly
    toc: yes
---

**Strengths**: Developing a mechanistic model extending the SIR framework to fit multiple waves of COVID is not so easy, and this project makes good progress on that. The over-dispersed measurement model combined with the time-varying transmission rate is sufficient to obtain a model that beats an ARMA benchmark comparison.

**Points for consideration**:

1. Section 2.2. An ODE model is written, and then a POMP model including stochasticity. Explain the relationship between these two models. The ODE model is a deterministic skeleton for the actual model used. Here, there are other differences: the SE rate is correctly proportional to $I+A+P$ in the stochastic version, but just proportional to $I$ in the skeleton. This is presumably a typo.

2. Overdispersion in the process model might also help - the binomial process noise seems too small to fit the data well.

3. Not all references are cited in the project.

4. The convergence plots show weak identifiability of some parameters. It is a large model so that is not surprising. This is not a major weakness, since the main contribution is to find a model that fits even if it might have room for simplification, but this should be noted. 

5. There could have been more discussion of the presented results. However, overall, the group made a good decision to allocate much of its time to successful model development. 




