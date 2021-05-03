---
title: "Review comments on Project 16"
author: "STATS/DATASCI 531, Winter 2021"
output:
  html_document:
    theme: flatly
    toc: yes
---

**Strengths**: A thorough comparison on GARCH and a stochastic volatility model with time-varying leverage. In this case, the GARCH model provides a slighty higher log likelihood. 

**Points for consideration**:

1. The project acknowledges that the computation put into maximizing the stochasticic volatility model might be insufficient - for example, there is a trend in the likelihood against $H_0$ suggesting that more searching would yield gains. However, an advantage of GARCH is that it is quicker to compute with.

2. This analysis does not add much insight on previous cited projects. Is there some way to frame a question that goes beyond comparing GARCH vs stochastic volatility with leverage?

3. The POMP modeling part of project looks to be carried out hastily. The profile shows evidence for $\phi < 1$, but that does not make the likelihood for $\phi=1$ "unstable", just lower. The profile is a better search than the local investigation, and even finds a slightly higher likelihood than the global search - the maximized profile likelihood should be taken as the new estimate of the MLE.





