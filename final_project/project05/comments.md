---
title: "Review comments on Project 5"
author: "STATS/DATASCI 531, Winter 2021"
output:
  html_document:
    theme: flatly
    toc: yes
---

**Strengths**:

1. Fig 1 is a nice representation, showing clearly the steep decline in flu when the 2020 COVID lockdown started, and the complete disappearance in 2021.

2. A range of POMP models was tried. The project noted problematic issues with the models developed, without getting around to solving them.

**Points for consideration**:

1. There is evidence of model misspecification. The perturbed model (with parameters having a random walk) obtains log likelihoods around -300. As the perturbations decrease, the likelihood goes down and filtering failures (large drops in the estimated likelihood) start occurring. This is most likely a result of insufficient process and/or measurement noise.

2. All models use binomial measurement, which can be problematic partly because of the bounded support and partly because it cannot fit overdispersion. Similarly, no models included additional noise in the rates.

3. The model is not fully described (via mathematical equations). The parameter eta is not defined, except by the computer code.

4. Initializing to $I=1$ seems a strong assumption, but works out okay here. 

5. Reference list is limited to course notes, plus the data set source. More context could be added.

6. The likelihood at the initial guess is not scientifically as important as the likelihood after parameter estimation - better to report the latter instead.



