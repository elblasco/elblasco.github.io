---
template: article
title: q-top
summary: Quorum-based totally ordered broadcast
date: 2024-08-13
authors: Alessio Blascovich, Lorenzo Cereser
tags: university, java, distributed sytems
category: project
---
<a href="https://github.com/elblasco/q-top">GitHub repository</a>  

| Members            |
| -------------------|
| Alessio Blascovich |
| Lorenzo Cereser    |

### What is this?
A protocol of quorum-based totally ordered broadcast crashes resilient based on a coordinator selected via ring election. 
It is the project for the course Distributed Systems at UniTN.

### Goal
Implement the protocol and build an actor-based environment in which the protocol can be tested.
On the protocol:

- The network consists of various replicas, a coordinator and several clients.
- The clients can make read and write requests on a shared variable among the replicas, sequential consistency must be granted.
- Once a replica receives a write request the coordinator asks around to commit or not the changes (2PC fashion).
- If the coordinator crashes the nodes organise themselves in a virtual ring and elect a new coordinator.
- Replicas can crash too, but no election is held.

### What did we do?
We implemented the protocol using the framework <a href="https://akka.io/">akka</a>. The application provides modularity among the number of replicas and clients and the duration of the various communication timeouts.
The application provides a multi-level log system by which a manager can verify the correctness of the protocol itself.
