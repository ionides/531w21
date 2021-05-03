---
title: "Review comments on Project 11"
author: "STATS/DATASCI 531, Winter 2021"
output:
  html_document:
    theme: flatly
    toc: yes
---

**Strengths**: An honest effort at the challenge of understanding COVID transmission dynamics. Well structured, leading to a clear assessment of where the project was getting stuck. 

**Points for consideration**:

1. Section 2: What is the shaded region around the trend line? Is it meaningful in this situation?

2. This is a case where the Augmented Dickey-Fuller (ADF) test is not particularly appropriate, since the null hpothesis of an ARMA model is not of much interest.

3. Section 3. If you decide to test for stationarity with ADF or similar, and you conclude there is nonstationarity, then fitting a stationary model is not a natural next step.

4. Section 4. The POMP model implemented is not an ODE system, so it is best not to write it as one.

5. From the simulations, you can see that the variability in the data is much higher than the simulations, which follow a smooth curve with little stochasticity. This is the first of many warning signs about what is wrong with the model.

6. The perturbed model (with parameters having a random walk) obtains log likelihoods around -300. As the perturbations decrease, the likelihood goes down and filtering failures (large drops in the estimated likelihood) start occurring. This is most likely a result of insufficient process and/or measurement noise. All models use binomial measurement, which can be problematic partly because of the bounded support and partly because it cannot fit overdispersion. Similarly, no models included additional noise in the rates.

7. Effective sample size is often close to zero, which is another indication of insufficient stochasticity in the model. Modeling multiple COVID waves is not easy: see Projects 13 and 15 for successful approaches.

8. The project mentions the possibility of trying models with additional variability, but does not get around to doing it. For a 5-person group, some subset could have been delegated this task.

9. References should follow a standard format. Links are helpful, but one should be able to look through the reference list without clicking on each one. 



