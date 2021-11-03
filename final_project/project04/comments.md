---
title: "Review comments on Project 4"
author: "STATS/DATASCI 531, Winter 2021"
output:
  html_document:
    theme: flatly
    toc: yes
---

**Strengths**: Various time series approaches are combined to investigate treasury bond data and its relationship to related financial time series.

**Points for consideration**:

1. In Section 5.3, notice the indications of bimodality in the likelihood surface (clustered values in the maximized log likelihood). One mode has likelihood roughly 2 log units higher. They correspond to quite different values of $\phi$ and $H_0$. This would be worth further comment, interpretation and maybe investigation.

2. There is a possibility of a relationship in the coherence plot at low frequencies (e.g., a coherence close to 0.6 at frequency close to zero). Is this where you would expect the relationship, or were you expecting a high frequency relationship?

3. Models should be written out. This can help to motivate discussion of model assumptions and how well they stand up to the data analysis. 

4. Similarly, when making a likelihood ratio test, explain exactly what was tested and how.

5. There is room for more discussion of limitations. What sorts of relationships could exist that would not have been discovered by the investigation carried out?



