---
title: "Review comments on Project 7"
author: "STATS/DATASCI 531, Winter 2021"
output:
  html_document:
    theme: flatly
    toc: yes
---

**Strengths**: Adapting epidemic models to understand "social media contagion" is a timely topic. An appropriate model is developed, which perhaps fits better than the project gives it credit for. Coherent discussion of conclusions and their limitations.


**Points for consideration**:

1. "Profile is flat, suggesting convergence issues or nonlinearity of the likelihood surface". Neither of these is necessary for a flat profile. There can be a linear tradeoff between parameters, and perfect convergence, and a flat profile will result. An appropriate conclusion could be weak identifiability, or non-identifiability for a perfectly flat profile.

2. It may be unsurprising that simulations do not agree with the particular timing of the information epidemic peaks - the model has no information to let it do this. We can just look for descriptive properties such as peak size and width, which seem like a reasonable match.

3. Rather than estimating $N$ to fit in with the normalization, one could perhaps try to include the normalization in the measurement model? It is not immediately clear how to do that, so it would need more work.

4. The plots called "profiles" are incorrectly calculated. From the code, we see they are computed as a profile over $\eta$ and plotted against other parameters. That may explain some of the issues with interpreting the plots.



