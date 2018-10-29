#!/bin/bash
grep -e theo1 -e steven1 -e arnaud1 -e pierre-jean | sed 's/theo1/Wile E. Coyote/g' | sed 's/steven1/Daffy Duck/g' | sed 's/arnaud1/Porky Pig/g' | sed 's/pierre-jean/Marvin the Martian/g'

