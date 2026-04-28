# Binary Trees Project

This project is part of the Holberton School curriculum.

## Description
This repository contains implementations of basic binary tree operations in C.

## Data Structure

The following structure is used for binary trees:

```c
struct binary_tree_s
{
    int n;
    struct binary_tree_s *parent;
    struct binary_tree_s *left;
    struct binary_tree_s *right;
};
