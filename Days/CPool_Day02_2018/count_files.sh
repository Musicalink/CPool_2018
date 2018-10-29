#!/bin/bash
find . -type f -exec echo {} \; | wc -l
