---
title: "Review comments on Project 8"
author: "STATS/DATASCI 531, Winter 2021"
output:
  html_document:
    theme: flatly
    toc: yes
---

**Strengths**: A sequence of models making progressively better fits to solar flare data. Interestingly, the Heston financial model does best. The other POMP models considered also improve on basic time series models, by describing some of the phenomenological physics of the situation. The project deals with interpreting convergence diagnostics for these models.


**Points for consideration**: The decreasing likelihood in the HMM search is indeed likely to be a symptom of model misspecification: the model needs extra noise to explain the data, and this noise is provided by the perturbations in early iterations of the IF2 optimization. As the optimization algorithm decreases the perturbations, the perturbed likelihood goes down even as the proper likelihood (of the actual model, without perturbations) increases.






