---
template: article
title: Vienna Metro Simulator
summary: Vienna Metro system simulation
date: 2025-07-29
authors: Alessio Blascovich, Matteo Di Noia
tags: university, simulation, performance evaluation
category: project
---
<a href="https://github.com/elblasco/SPE-homework">GitHub repository</a>  

| Members            |
| -------------------|
| Alessio Blascovich |
| Matteo Di Noia     |

### What is this?
Final project for the "Simulation and Performance Evaluation" course at UniTN.
The project is a simulation engine that can take a input file describing a matro system and produces a serties of log files describing various metrics. 

### Goal
Develop a discrete simulation engine capable of synthesising `csv` logs about various metrics. This engine was not supposed to be a 1:1 representation of the world, in fact it makes a few simplications.
The logs are used by some `python` scripts in ordert to estimate the whole system performances.

### What did we do?
We developed a simulation engine capable of taking as input a `json` file describing a metro system and simulate an arbitrary amount of time with various paramters such as: train speed, train crash rate, etc.  
We developed a series of `python` script to analyse the key performace indicator such as the person served per minute or the average time waited before entering a train; we also inferred the fairness of the entire system using the _Gini's index_ and the _Lorenz gap_.
